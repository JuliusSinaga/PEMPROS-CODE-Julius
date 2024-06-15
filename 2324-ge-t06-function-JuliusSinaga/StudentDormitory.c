// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Gracia Pardede

#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender){
  struct student_t std;
  strcpy(std.id, _id);
  strcpy(std.name, _name);
  strcpy(std.year, _year);
  strcpy(std.study_program, _study_program);
  std.gender = _gender;

  return std;
}

struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type){
  struct dorm_t dorm_;
  strcpy(dorm_.dormitory_name, _dormitory_name);
  dorm_.capacity = _capacity;
  dorm_.status = _status;
  dorm_.type = _type;
  dorm_.residents_num = 0;

  return dorm_;
}

void print_students(struct student_t *_students, int size){
  printf("Students:\n");
  for (int i = 0; i < size; i++)
  {
    switch (_students[i].gender)
    {
      case FEMALE:
          printf("%s#%s#%s#%s#FEMALE\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program);
          break;
      case MALE:
          printf("%s#%s#%s#%s#MALE\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program);
          break;
    }
  }
  printf("\n");
}

void print_dorms(struct dorm_t *_dorm, int size){
  printf("Dorms:\n");
  for (int i = 0; i < size; ++i)
  {
    switch (_dorm[i].type)
    {
    case FOR_FEMALE:
        printf("%s#%d#%s#For Female\n", _dorm[i].dormitory_name, _dorm[i].capacity, _dorm[i].status == NA ? "Not Available" : "Available");
        break;
    case FOR_MALE:
        printf("%s#%d#%s#For Male\n", _dorm[i].dormitory_name, _dorm[i].capacity, _dorm[i].status == NA ? "Not Available" : "Available");
        break;
    }
  }
  printf("\n");
}

void print_dorm(struct dorm_t _dorm){
  char *status = _dorm.status == NA ? "Not Available" : "Available";
  char *gender = _dorm.type == FOR_FEMALE ? "For Female" : "For Male";
  printf("%s#%d#%s#%s\n", _dorm.dormitory_name, _dorm.capacity, status, gender);
}

void print_students_dorm(struct student_dormitory_t *students_dorms, int students_size, struct dorm_t *_dorm, int dorms_size)
{
  int sum = 0;
  int temp = 0;
  for (int indexDorm = 0; indexDorm < dorms_size; indexDorm++){
    print_dorm(_dorm[indexDorm]);
    if (_dorm[indexDorm].residents_num > 0)
    {
      sum += _dorm[indexDorm].residents_num;
      for (int indexStudent = temp; indexStudent < sum; indexStudent++)
      {
        if (indexStudent != sum)
        {
          printf("%s#%s#%s#%s\n", students_dorms[indexStudent].student.id, students_dorms[indexStudent].student.name, students_dorms[indexStudent].student.year, students_dorms[indexStudent].student.study_program);
        }
        else
        {
          temp = indexStudent;
          break;
        }
      }
    }
    else{
      printf("0\n");
    }
    printf("\n");
  }
  return;
}

void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *students, int size_dorms, int size_students)
{
  print_students(students, size_students);
  print_dorms(dorms, size_dorms);
  int indexDormStudent = 0;

  for (int indexDorm = 0; indexDorm < size_dorms; ++indexDorm)
  {

    if (dorms[indexDorm].type == FOR_FEMALE)
    {
      for (int indexStudent = 0; indexStudent < size_students; ++indexStudent)
      {
        if (students[indexStudent].gender == FEMALE && (strcmp(students[indexStudent].id, "-") != 0))
        {
          if (dorms[indexDorm].capacity < 0)
          {
            dorms[indexDorm].status = NA;
          }
          else
          {
            students_dorms[indexDormStudent].dorm = dorms[indexDorm];
            students_dorms[indexDormStudent].student = students[indexStudent];
            strcpy(students[indexStudent].id, "-");
            dorms[indexDorm].capacity--;
            dorms[indexDorm].residents_num++;
            indexDormStudent++;
          }
        }
      }
    }
    else
    {
      for (int indexStudent = 0; indexStudent < size_students; ++indexStudent)
      {
        if (students[indexStudent].gender == MALE && (strcmp(students[indexStudent].id, "-") != 0))
        {
          if (dorms[indexDorm].capacity > 0)
          {
            students_dorms[indexDormStudent].dorm = dorms[indexDorm];
            students_dorms[indexDormStudent].student = students[indexStudent];
            strcpy(students[indexStudent].id, "-");
            dorms[indexDorm].capacity--;
            dorms[indexDorm].residents_num++;
            indexDormStudent++;
          }
        }
      }
    }
  }
}

struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender)
{
  struct dorm_t temp;
  temp = *dorms;
  if (temp.capacity > 0)
  {
    temp.capacity--;
    temp.residents_num++;
  }
  else
  {
    temp.status = NA;
  }

  return temp;
}