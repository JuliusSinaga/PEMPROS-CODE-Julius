// 12S23035 - Julius Kaisar Bona Theo Sinaga 

#include <stdio.h>
#include <string.h>

int main(int _argc, char **_argv) {
    // Declare variables
    int a;
    char text[60], b[30], c[30], d[30], e[30], f[30];
    strcpy(b, "vegetables");
    strcpy(c, "side dishes");
    strcpy(d, "staple food");
    strcpy(e, "fruits");
    strcpy(f, "milk");

    // Input
    scanf("%d", &a);

    // Proccess
    if (a == 1) {
        strcpy(text, "you need side dishes");
        printf("%s\n", d);
        printf("%s", text);
    } else if (a == 2) {
        strcpy(text, "you need vegetables");
        printf("%s\n", c);
        printf("%s\n", d);
        printf("%s", text);
    } else if (a == 3) {
        strcpy(text, "good");
        printf("%s\n", b);
        printf("%s\n", c);
        printf("%s\n", d);
        printf("%s", text);
    } else if (a == 4) {
        strcpy(text, "very good");
        printf("%s\n", e);
        printf("%s\n", b);
        printf("%s\n", c);
        printf("%s\n", d);
        printf("%s", text);
    } else if (a == 5) {
        strcpy(text, "perfect");
        printf("%s\n", f);
        printf("%s\n", e);
        printf("%s\n", b);
        printf("%s\n", c);
        printf("%s\n", d);
        printf("%s", text);
    } else {
        strcpy(text, "---");
        printf("%s", text);
    }

    return 0;

}
