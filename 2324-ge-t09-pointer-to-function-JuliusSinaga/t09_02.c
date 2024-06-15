// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Gracia Pardede

#include <stdio.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include <stdlib.h>
#include <string.h>

int main(int _argc, char **_argv) {
    struct dorm_t *dorm = malloc(6 * sizeof(struct dorm_t));
    struct student_t *student = malloc(15 * sizeof(struct student_t));

    char inputan[100], *command, *temp;
    int index_dorm = 0;
    int index_student = 0;

    while (1) {
        fgets(inputan, 100, stdin);
        inputan[strcspn(inputan, "\n")] = 0;  // remove newline
        if (strcmp(inputan, "---") == 0) {
            break;
        } else if (strcmp(inputan, "dorm-print-all-detail") == 0) {
            print_dorm_detail(dorm, index_dorm);
            continue;
        } else if (strcmp(inputan, "dorm-print-all") == 0) {
            print_dorm(dorm, index_dorm);
            continue;
        } else if (strcmp(inputan, "student-print-all-detail") == 0) {
            print_student_detail(student, index_student);
            continue;
        } else if (strcmp(inputan, "student-print-all") == 0) {
            print_student(student, index_student);
            continue;
        }

        command = strtok(inputan, "#");
        if (strcmp(command, "dorm-add") == 0) {
            temp = strtok(NULL, "#");
            strcpy(dorm[index_dorm].name, temp);
            temp = strtok(NULL, "#");
            dorm[index_dorm].capacity = atoi(temp);
            temp = strtok(NULL, "#");
            if (strcmp(temp, "male") == 0) {
                dorm[index_dorm].gender = GENDER_MALE;
            } else {
                dorm[index_dorm].gender = GENDER_FEMALE;
            }

            dorm[index_dorm] = create_dorm(dorm[index_dorm].name, dorm[index_dorm].capacity, dorm[index_dorm].gender);

            index_dorm++;
        } else if (strcmp(command, "student-add") == 0) {
            temp = strtok(NULL, "#");
            strcpy(student[index_student].id, temp);
            temp = strtok(NULL, "#");
            strcpy(student[index_student].name, temp);
            temp = strtok(NULL, "#");
            strcpy(student[index_student].year, temp);
            temp = strtok(NULL, "#");
            if (strcmp(temp, "male") == 0) {
                student[index_student].gender = GENDER_MALE;
            } else {
                student[index_student].gender = GENDER_FEMALE;
            }
            
            student[index_student] = create_student(student[index_student].id, student[index_student].name, student[index_student].year, student[index_student].gender);

            index_student++;
        } else if (strcmp(command, "assign-student") == 0) {
            temp = strtok(NULL, "#");
            char *id = temp;
            temp = strtok(NULL, "#");
            char *dormName = temp;
            for (int i = 0; i < index_dorm; i++) {
                for (int j = 0; j < index_student; j++) {
                    if (strcmp(student[j].id, id) == 0 && strcmp(dorm[i].name, dormName) == 0) {
                        assign_student(student, dorm, j, i);
                    }
                }
            }
        } else {

        }
    }

    return 0;
}