#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[4];
    int count = 0;

    printf("Vvedite stroku\n");
    fgets(s1, sizeof(s1),stdin);
    printf("Vvedite podstroku\n");
    fgets(s2, sizeof(s2), stdin);
    char* p = s1;

    do {
        p = strstr(p, s2);
        if (p != NULL) {
            count++;
            p = &p[strlen(s2)];
        }
    } while (p != NULL);

    printf("Chislo vhozhdeniy = %d\n", count);
    return 0;
}