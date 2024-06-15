// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  // Declare Variables
  char karakter[20], numerik[60];
  int i;

  // Input
  for (i = 0; i < 20; i++) {
    scanf("%c", &karakter[i]);
    if (karakter[i] == '\n') {
      karakter[i] = '\0';
      break;
    } else {
    }
  }

  // Process
  for (i = 0; i < strlen(karakter); i++) {
    // Konversi karakter ke integer
    sprintf(numerik + i * 3, "%03d", karakter[i]);
  }
  
  // Output
  printf("%s\n", numerik);

  return 0;
}
