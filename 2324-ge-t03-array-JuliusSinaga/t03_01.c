// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>

int main(int _argv, char **_argc) {
  // Deklarasi variabel
  int n;
  scanf("%d", &n);
  int angka[n];

  // Input
  int i;
  for (i = 0 ; i < n ; i++) {
    scanf("%d", &angka[i]);
  }

  // Output
  for (i = 0 ; i < n ; i++) {
    if (i == n-1) {
      printf("%d", angka[i]);
    } else {
      printf("%d,", angka[i]);
    }
  }

  return 0;
}
