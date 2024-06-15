#include "student.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

struct student_t bentuk_identitas(char *_nim, char *_nama, char *_tahun, enum gender_t _gender)
{
    struct student_t identitas;

    strcpy(identitas.nim, _nim);
    strcpy(identitas.nama, _nama);
    strcpy(identitas.tahun, _tahun);
    identitas.gender = _gender;
    identitas.dorm = NULL;
    
    return identitas;
}

void keluaran_identitas(struct student_t _identitas) {
    char *gender;
    if (_identitas.gender == 0) {
        gender = "male";
    } else {
        gender = "female";
    }
    if (strcmp(_identitas.dorm->nama, "NULL") == 0)
    {
       printf("%s|%s|%s|%s|unsigned\n", _identitas.nim, _identitas.nama, _identitas.tahun, gender);
    } else {
        printf("%s|%s|%s|%s|%s\n", _identitas.nim, _identitas.nama, _identitas.tahun, gender, _identitas.dorm->nama);
    }
    
    
    
}

/*
#include "student.h"
#include <stdio.h>
#include <string.h>

struct student_t bentuk_identitas(char *_nim, char *_nama, char *_tahun, enum gender_t _gender)
{
    struct student_t identitas;

    strcpy(identitas.nim, _nim);
    strcpy(identitas.nama, _nama);
    strcpy(identitas.tahun, _tahun);
    identitas.gender = _gender;
    
    return identitas;
}

void keluaran_identitas(struct student_t _identitas, int _index) {
    char *gender;
    if (_identitas.gender == 0) {
        gender = "male";
    } else {
        gender = "female";
    }
    if (strcmp(_identitas.dorm->nama, "NULL") == 0)
    {
       printf("%s|%s|%s|%s|unsigned\r\n", _identitas.nim, _identitas.nama, _identitas.tahun, gender, _identitas.dorm->nama);
    } else {
        printf("%s|%s|%s|%s|%s\r\n", _identitas.nim, _identitas.nama, _identitas.tahun, gender, _identitas.dorm->nama);
    }
    
    
    
} */