// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Gracia Pardede

#include <stdio.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include <stdlib.h>
#include <string.h>

int main(int _argc, char **_argv)
{
    struct student_t *student = malloc(12 * sizeof(struct student_t));

    char inputan[100], *command, *temp;
    int index = 0;

    while (1) {
        fgets(inputan, 100, stdin);
        inputan[strcspn(inputan, "\n")] = 0;  // remove newline
        if (strcmp(inputan, "---") == 0) {
            break;
        } else if (strcmp(inputan, "student-print-all") == 0) {
            print_student(student, index);
            continue;
        }
        command = strtok(inputan, "#");
        if (strcmp(command, "student-add") == 0) {
            temp = strtok(NULL, "#");
            strcpy(student[index].id, temp);
            temp = strtok(NULL, "#");
            strcpy(student[index].name, temp);
            temp = strtok(NULL, "#");
            strcpy(student[index].year, temp);
            temp = strtok(NULL, "#");
            if (strcmp(temp, "male") == 0) {
                student[index].gender = GENDER_MALE;
            } else {
                student[index].gender = GENDER_FEMALE;
            }
            
            student[index] = create_student(student[index].id, student[index].name, student[index].year, student[index].gender);

            index++;
        } else {
            printf("Invalid command\n");
        }
    }

    return 0;
}
