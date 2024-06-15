// 12S23035 - Julius Kaisar Bona Theo Sinaga
// 12S23044 - Gracia Pardede

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct komponen {
  char nama[50];
  int bobot, nilai;
};
int main(int _argc, char *_argv[]) {
  int k = atoi(_argv[1]);
  // Declare
  struct komponen komp[5];

  char command[100];
  float bobot_nilai;
  float nilai_akhir = 0;

  for (int i = 0; i < k; i++) {
    fgets(command, 100, stdin);
    
    char *token;
    token = strtok(command, "#");
    strcpy(komp[i].nama, token);

    token = strtok(NULL, "#");
    komp[i].bobot = atoi(token);

    token = strtok(NULL, "#");
    komp[i].nilai = atoi(token);

    if (strcmp(komp[i].nama, "seminar proposal") == 0){
      bobot_nilai = (komp[i].nilai * (komp[i].bobot * 0.01));
      nilai_akhir = nilai_akhir + bobot_nilai;
    } else if (strcmp(komp[i].nama, "seminar kemajuan") == 0) {
      bobot_nilai = (komp[i].nilai * (komp[i].bobot * 0.01));
      nilai_akhir = nilai_akhir + bobot_nilai;
    } else {
      bobot_nilai = (komp[i].nilai * (komp[i].bobot * 0.01));
      nilai_akhir = nilai_akhir + bobot_nilai;
    }
  }

  for (int i = 0; i < k; i++) {
    printf("%s;%d;%d\n", komp[i].nama ,komp[i].bobot ,komp[i].nilai);

  }
  printf("%.1f\n", nilai_akhir);
  if (nilai_akhir < 50) {
    printf("failed");
  } else {
    printf("passed");
  }

  return 0;
}
