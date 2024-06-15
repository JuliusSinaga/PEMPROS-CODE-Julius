// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Gracia Pardede

#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender)
{
  struct student_t std;
  
  strcpy(std.id, _id);
  strcpy(std.name, _name); 
  strcpy(std.year, _year);
  strcpy(std.study_program, _study_program);
  std.gender = _gender;
  
  return std;
}

struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type)
{
  struct dorm_t dorm_;

  strcpy(dorm_.dormitory_name, _dormitory_name);
  dorm_.capacity = _capacity;
  dorm_.status = _status;
  dorm_.type = _type;

  return dorm_;
} 
  
void print_students(struct student_t *_students, int size ){
  char *gender;
  printf("Students:\n");
  for (int i = 0; i < size; i++) {
    if (_students[i].gender == 0) {
      gender = "MALE";
    } else {
      gender = "FEMALE";
    }
    printf("%s#%s#%s#%s#%s\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program, gender);
  }

}

void print_dorms(struct dorm_t *_dorm, int size){
  char *status, *type;
  printf("Dorms:\n");
  for (int i = 0; i < size; i++) {
    if (_dorm[i].status == 0) {
      status = "Available";
    } else {
      status = "Not Available";
    }
    if (_dorm[i].type == 0) {
      type = "For Male";
    } else { 
      type = "For Female";
    }
    printf("%s#%d#%s#%s\n", _dorm[i].dormitory_name, _dorm[i].capacity, status, type);
  }
  
}

void print_dorm(struct dorm_t _dorm ){
  char *status, *type;
  if (_dorm.status == 0) {
    status = "Available";
  } else {
    status = "Not Available";
  }
  
  if (_dorm.type == 0) {
    type = "For Male";
  } else { 
    type = "For Female";
  }
  printf("%s#%d#%s#%s\n", _dorm.dormitory_name, _dorm.capacity, status, type);
}

void print_students_dorm(struct student_dormitory_t *students_dorms, int student_size, struct dorm_t *_dorm, int dorm_size) {
  char *status, *type;
  for (int i = 0; i < dorm_size; i++) {
    printf("\n");
    if (_dorm[i].status == 0) {
      status = "Available";
    } else {
      status = "Not Available";
    }
    if (_dorm[i].type == 0) {
      type = "For Male";
    } else { 
      type = "For Female";
    }
    
    printf("%s#%d#%s#%s\n", _dorm[i].dormitory_name, _dorm[i].capacity, status, type);
    if (_dorm[i].residents_num == 0) {
        printf("0\n");
    }    
    for (int j = 0; j < student_size; j++) {
      if (students_dorms[j].dorm.dormitory_name == _dorm[i].dormitory_name) {
      printf("%s#%s#%s#%s\n", students_dorms[j].student.id, students_dorms[j].student.name, students_dorms[j].student.year, students_dorms[j].student.study_program);
      } else {
      }
    }
  }
}

void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *std, int size_dorms, int size_students){
  print_students(std, size_students);
  printf("\n");
  print_dorms(dorms, size_dorms);
  int h = 0; // Counter untuk students_dorms
  
  // Mengisi data students_dorms

  for (int i = 0; i < size_dorms; i++) {
    // Cek tipe dorm
    if (dorms[i].type == 0) {
      // Cek Gender MALE Student untuk dimasukkan ke asrama laki-laki
      for (int j = 0; j < size_students; j++) {
        // Cek Apakah sudah ada asrama nya atau belum
        if (students_dorms[j].dorm.dormitory_name == NULL ) {
          // Jika masih kosong, lakukan perbandingan untuk mengetahui A atau NA
          if (std[j].gender == MALE && dorms[i].residents_num < dorms[i].capacity) {
          // Masukkan data ke students_dorms
          students_dorms[j].student = std[j];
          students_dorms[j].dorm = dorms[i];
          dorms[i].residents_num++;
          dorms[i].capacity--;
          } else { }
        } else {

        }
        
      }

    } else {
      // Cek Gender FEMALE Student untuk dimasukkan ke asrama perempuan
      for (int j = 0; j < size_students; j++) {
        if (std[j].gender == FEMALE && dorms[i].residents_num < dorms[i].capacity) {
          // Masukkan data ke students_dorms
          students_dorms[j].student = std[j];
          students_dorms[j].dorm = dorms[i];
          dorms[i].residents_num++;
          dorms[i].capacity--;
        } else {

        }
      }
    }

    // Cek status dorm
    if (dorms[i].capacity == 0) {
      dorms[i].status = NA;
    } else {
      dorms[i].status = A;
    }
    
    
  }
}

struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender){
  struct dorm_t temp;
  
  for (int i = 0; i < size; i++) {
    if (dorms[i].type == 0) {
      temp = dorms[i];
    } else {
      temp = dorms[i];
      }
  }
  return temp;
}
