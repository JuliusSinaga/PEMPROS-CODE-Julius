// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  // Declare variables
  char numerik[60], keluaran[20];
  int i;

  // Input
  for (i = 0; i < 60; i++) {
    scanf("%c", &numerik[i]);
    if (numerik[i] == '\n') {
      numerik[i] = '\0';
      break;
    } else {
    }
  }

  // Process
  for (i = 0; i < strlen(numerik); i+= 3) {
    // Konversi karakter tiga angka ke integer
    sscanf(numerik + i, "%3hhd", &keluaran[i / 3]);   
    
    // Konversi integer ke karakter
    sprintf(keluaran + i / 3, "%c", keluaran[i / 3]);
  }

  // Output
  printf("%s\n", keluaran);

  return 0;
}
