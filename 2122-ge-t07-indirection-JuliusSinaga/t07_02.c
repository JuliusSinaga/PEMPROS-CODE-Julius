// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Graciaa Pardede

#include <stdio.h>
#include "./libs/dorm.h"
#include "./libs/student.h"

int main(int _argc, char **_argv)
{
    struct dorm_t dorms[5];
    struct student_t students[10];

    dorms[0] = membentuk_asrama("Pniel", 4, GENDER_FEMALE, 0);
    dorms[1] = membentuk_asrama("Kapernaum", 3, GENDER_MALE, 0);

    keluaran_asrama(dorms[0]);
    keluaran_asrama(dorms[1]);

    students[0] = bentuk_identitas("12S21001", "Dhino Turnip", "2021", GENDER_MALE);
    students[1] = bentuk_identitas("12S21002", "Marudut Tampubolon", "2021", GENDER_MALE);
    students[2] = bentuk_identitas("12S21003", "Jusas Tampubolon", "2021", GENDER_MALE);
    students[3] = bentuk_identitas("12S21004", "Estomihi pangaribuan", "2021", GENDER_MALE);
    students[4] = bentuk_identitas("12S21006", "Weny Sitinjak", "2021", GENDER_FEMALE);
    students[5] = bentuk_identitas("12S21007", "Dame Sitinjak", "2021", GENDER_FEMALE);
    students[6] = bentuk_identitas("12S21008", "Tuani Manurung", "2021", GENDER_MALE);
    students[7] = bentuk_identitas("12S21009", "Mikhael Pakpahan", "2021", GENDER_MALE);
    students[8] = bentuk_identitas("12S21010", "Bobby Siagian", "2021", GENDER_MALE);
    students[9] = bentuk_identitas("12S21011", "Aldi Simamora", "2021", GENDER_MALE);

    keluaran_identitas(students[0]);
    keluaran_identitas(students[4]);
    keluaran_identitas(students[8]);

    /**
     * Put your code here to assign all of the students to the corresponding dorms.
     */
    

    keluaran_identitas(students[0]);
    keluaran_identitas(students[1]);
    keluaran_identitas(students[2]);
    keluaran_identitas(students[3]);
    keluaran_identitas(students[4]);
    keluaran_identitas(students[5]);
    keluaran_identitas(students[6]);
    keluaran_identitas(students[7]);
    keluaran_identitas(students[8]);
    keluaran_identitas(students[9]);

    keluaran_asrama(dorms[0]);
    keluaran_asrama(dorms[1]);

    return 0;
}
