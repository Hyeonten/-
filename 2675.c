#include <stdio.h>
#include <string.h>

int main() {

    int t, r;
    char s[20];
    scanf_s("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf_s("%d %s", &r, s, sizeof(s));
        for (int j = 0; j < strlen(s); j++)
            for (int k = 0; k < r; k++) printf("%c", s[j]);
        printf("\n");
    }
    return 0;
}