// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>
#include <string.h>

int main()
{
  int lama_sekolah, jumlah_hari, jam_belajar;
  char agama[13], start_sekolah[14];

  // Input
  scanf("%d", &lama_sekolah);
  scanf("%s", start_sekolah);
  scanf("%s", agama);
  scanf("%d", &jumlah_hari);
  scanf("%d", &jam_belajar);

  // Operasi
  int hari_habis;

  if ( strcmp(agama, "Kristen") == 0) {
      hari_habis = 283 * lama_sekolah;
  }
  else if ( strcmp(agama, "Katolik") == 0) {
      hari_habis = 283 * lama_sekolah;
  }
  else if ( strcmp(agama, "Islam") == 0) {
      hari_habis = 231 * lama_sekolah;
  }
  else {
  }

  // Output
  printf("%d\n", hari_habis);

  // New
  char status[13];
  int jam;

  if (hari_habis >= jumlah_hari) {
    strcpy(status, "lebih");
  }
  else {
    strcpy(status, "kurang");
  }

  if ( strcmp(status, "lebih") == 0 ) {
    // Operasi untuk jam belajar
    jam_belajar = jam_belajar * 2;
    if (jam_belajar >= 5 && jam_belajar < 10) {
      jam = 8 + jam_belajar + 1;
    } else if (jam_belajar >= 10 && jam_belajar < 15) {
      jam = 8 + jam_belajar + 2;
      } else if (jam_belajar >= 15 && jam_belajar < 20) {  
        jam = 8 + jam_belajar + 3;
      } else {
        jam = 8 + jam_belajar;
      }
    printf("Senin – 08.00-%d.00\n", jam);
    printf("Selasa – 08.00-%d.00\n", jam);
    printf("Rabu – 08.00-%d.00\n", jam);
    printf("Kamis – 08.00-%d.00\n", jam);
    printf("Jumat – 08.00-%d.00\n", jam);
    printf("Sabtu – 08.00-%d.00\n", jam);
  } else if ( strcmp(status, "kurang"  ) == 0) {
    // Operasi untuk jam belajar
    if (jam_belajar >= 5 && jam_belajar < 10) {
      jam = 8 + jam_belajar + 1;
    } else if (jam_belajar >= 10 && jam_belajar < 15) {
      jam = 8 + jam_belajar + 2;
      } else {
        jam = 8 + jam_belajar;
      }
    printf("Senin – 08.00-%d.00\n", jam);
    printf("Selasa – 08.00-%d.00\n", jam);
    printf("Rabu – 08.00-%d.00\n", jam);
    printf("Kamis – 08.00-%d.00\n", jam);
    printf("Jumat – 08.00-%d.00\n", jam);
    printf("Sabtu – 08.00-%d.00\n", jam);
  } else { 
    printf("Error\n");
  }

  return 0;
}