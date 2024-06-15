#include "dorm.h"
#include <string.h>
#include <stdio.h>

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
struct dorm_t membentuk_asrama(char *_nama, unsigned short _kapasitas, enum gender_t _gender, unsigned short _jlh_penghuni) 
{

    struct dorm_t asrama;
    
    strcpy(asrama.nama, _nama);
    asrama.kapasitas = _kapasitas;
    asrama.gender = _gender;
    asrama.jlh_penghuni = _jlh_penghuni;

    return asrama;
}

void keluaran_asrama(struct dorm_t _asrama) {
    char *gender;
    if (_asrama.gender == 0) {
        gender = "male";
    } else {
        gender = "female";
    }
    printf("%s|%d|%s|%d\r\n", _asrama.nama, _asrama.kapasitas, gender, _asrama.jlh_penghuni);
}
