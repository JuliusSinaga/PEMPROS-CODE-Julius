#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

/**
 * @brief define your structure, enums, globally accessible variables, and function prototypes here.
 * The actual function implementation should be defined in the corresponding source file.
 *
 */

struct student_t
{
    char nim[12];
    char nama[40];
    char tahun[5];
    enum gender_t gender;
    struct dorm_t *dorm;
};

struct student_t bentuk_identitas(char *_nim, char *_nama, char *_tahun,
                                enum gender_t _gender);

void keluaran_identitas(struct student_t _identitas);

#endif
