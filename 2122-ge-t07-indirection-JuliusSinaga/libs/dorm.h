#ifndef DORM_H
#define DORM_H

#include "gender.h"

/**
 * @brief define your structure, enums, globally accessible variables, and function prototypes here.
 * The actual function implementation should be defined in the corresponding source file.
 *
 */

struct dorm_t
{
  char nama[20];
  unsigned short kapasitas;
  enum gender_t gender;
  unsigned short jlh_penghuni;
};

struct dorm_t membentuk_asrama(char *_nama, unsigned short _kapasitas, enum gender_t _gender, unsigned short _jlh_penghuni);
void keluaran_asrama(struct dorm_t _asrama);


#endif
