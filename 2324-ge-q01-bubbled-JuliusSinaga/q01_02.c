// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>

int main(int _argc, char **_argv)
{
  char karakter[100];
  int i;

  for (i = 0; i < 100; i++) {
    scanf("%c", &karakter[i]);
    if (karakter[i] == '\n')
    {
      break;
    } else if (karakter[i] == ',')
    {
      i = i - 1;
    } else {

    }
  }

  char temp;
  int j, k;

  for (j = 0; j < i; j++) {
    for (k = j + 1; k < i; k++) {
      if (karakter[j] < karakter[k]) {
        temp = karakter[j];
        karakter[j] = karakter[k];
        karakter[k] = temp;
      }
    }
  }

  for (j = 0; j < i; j++) {
    if (j == i - 1)
    {
      printf("%c", karakter[j]);
    } else if (j < i){
      printf("%c,", karakter[j]);
    }
  }

  return 0;
}
