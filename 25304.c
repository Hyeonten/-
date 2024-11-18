#include <stdio.h>
int main() {
    int x, n;
    scanf_s("%d\n %d", &x, &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf_s("%d %d", &a, &b);
        sum += a * b;
    }
    if (sum == x) printf("Yes");
    else printf("No");
    return 0;
}