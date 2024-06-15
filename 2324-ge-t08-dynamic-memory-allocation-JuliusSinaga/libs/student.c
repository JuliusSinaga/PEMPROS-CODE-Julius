#include "student.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct student_t create_student(char *_id, char *_name, char *_year, enum gender_t _gender)
{
    struct student_t student;

    strcpy(student.id, _id);
    strcpy(student.name, _name);
    strcpy(student.year, _year);
    student.gender = _gender;

    return student;
}

void print_student(struct student_t *_student, int _index) {
    for (int i = 0; i < _index; i++)
    {
        char *_gender;
        if (_student[i].gender == GENDER_MALE) {
            _gender = "male";
        } else {
            _gender = "female";
        }
        printf("%s|%s|%s|%s\n", _student[i].id, _student[i].name, _student[i].year, _gender);
    }
    
}