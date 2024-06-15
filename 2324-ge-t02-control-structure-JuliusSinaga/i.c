#include <stdio.h>

int main (){
    int x1, x2;
    int waktuu, waktub;
    int totalwaktu;
    scanf("%d", &x1);
    scanf("%d", &x2);
    while (x1 > 0){
    int antri = x1 -= 3;
        x1 % 3 > 0; 
        waktuu = (antri * 3) + ((antri - 1) * 3);
        printf ("%d\n", waktuu);
    }
    while (x2 > 0){
        int antrian = x2 -= 3;
        x2 % 3 > 0;
        waktub = (antrian * 3) + ((antrian - 1) * 3);
        printf("%d\n", waktub);
    }
    totalwaktu = waktuu + waktub;
    printf("%d\n", totalwaktu);
    return 0;
}