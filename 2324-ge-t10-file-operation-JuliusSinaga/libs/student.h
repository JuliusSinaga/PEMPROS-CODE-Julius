#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

struct student_t
{
    char id[12];
    char name[40];
    char year[5];
    enum gender_t gender;
    struct dorm_t *dorm;
};

struct student_t create_student(char *_id, char *_name, char *_year,
                                enum gender_t _gender);

void print_student(struct student_t *_student, int _size);

void print_student_detail(struct student_t *_student, int _size);

#endif
