// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>

int main(int _argv, char **_argc) {
  // Declare Variable
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
      printf("%d\n", angka[i]);
    } else {
      printf("%d,", angka[i]);
    }
  }

  int a = 0; // Indeks yang lebih rendah
  int b = n - 1; //  Indeks yang lebih tinggi

  while (a <= b) {
    if (a == b) {
      printf("%d", angka[a]);
      break;
    } else if (a + 1 == b) {
      printf("%d,", angka[a]);
      printf("%d", angka[b]);
    } else {
    printf("%d,", angka[a]);
    printf("%d,", angka[b]);
    }

    a++;
    b--;
  }

  return 0;
}
