// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>
#include <string.h>

int main(int _argc, char **_argv) {
  // Declare variables
  int m;
  char month[15];

  // Input
  scanf("%d", &m);

  // Process
  int i = 0;
  int x, l;
  while (i < 3) {
    x = m + i;
    if (x == 1) {
      strcpy(month, "January");
      printf("%s\n", month);
    } else if (x == 2) {
      strcpy(month, "February");
      printf("%s\n", month);
    } else if (x == 3) {
      strcpy(month, "March");
      printf("%s\n", month);
    } else if (x == 4) {
      strcpy(month, "April");
      printf("%s\n", month);
    } else if (x == 5) {
      strcpy(month, "May");
      printf("%s\n", month);
    } else if (x == 6) {
      strcpy(month, "June");
      printf("%s\n", month);
    } else if (x == 7) {
      strcpy(month, "July");
      printf("%s\n", month);
    } else if (x == 8) {
      strcpy(month, "August");
      printf("%s\n", month);
    } else if (x == 9) {
      strcpy(month, "September");
      printf("%s\n", month);
    } else if (x == 10) {
      strcpy(month, "October");
      printf("%s\n", month);
    } else if (x == 11) {
      strcpy(month, "November");
      printf("%s\n", month);
    } else if (x == 12) {
      strcpy(month, "December");
      printf("%s\n", month);
    } else if (x > 12) {
      l = x%12;
      if (l == 1) {
        strcpy(month, "January");
        printf("New year\n");
        printf("%s\n", month);
      } else if (l == 2) {
        strcpy(month, "February");
        printf("%s\n", month);
      } else {
        printf("Invalid month\n");
      }
    }
    i++;
  }



  return 0;
}
