// 12S23035 - Julius Kaisar Bona Theo Sinaga 

#include <stdio.h>
#include <string.h>

int main(int _argc, char **_argv) {

    // Declare variables
    int jumlah_buku, harga_buku;
    float harga_diskon, harga_total;
    char Output[4];

    // Input
    scanf("%d", &jumlah_buku);
    scanf("%d", &harga_buku);

    // Proses one
    int harga_sementara = jumlah_buku * harga_buku;

    if (harga_sementara > 50000 && harga_sementara < 100000) {
        harga_diskon = harga_sementara * 0.05;
        harga_total = harga_sementara - harga_diskon;
    } else if(harga_sementara >= 100000 && harga_sementara < 500000) {
        harga_diskon = harga_sementara * 0.1;
        harga_total = harga_sementara - harga_diskon;
    } else if (harga_sementara >= 500000) {
        harga_diskon = harga_sementara * 0.15;
        harga_total = harga_sementara - harga_diskon;
    } else {
        strcpy(Output, "---");
        harga_total = harga_sementara;
    }

    // Output
    if (harga_sementara < 50000) {
        printf("%s\n", Output);
        printf("%.2f", harga_total);
    } else {
        printf("%.2f\n", harga_diskon);
        printf("%.2f", harga_total);
    }
    


    return 0;

}
