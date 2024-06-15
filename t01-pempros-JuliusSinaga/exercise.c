// 12S23035 - Julius Kaisar Bona Theo Sinaga

#include <stdio.h>
#include <string.h>

int main()
{
    int lama_sekolah;
    char agama[13], start_sekolah[14];

    // Input
    scanf("%d", &lama_sekolah);
    scanf("%s", start_sekolah);
    scanf("%s", agama);

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
    printf("%d", hari_habis);

    return 0;
}