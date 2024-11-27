#include <stdio.h>
#include <string.h>

int main() {
    char a[1000005];
    int arr[26] = { 0 };  // 배열을 0으로 초기화

    int max = -1;  // 빈도가 0보다 작은 값을 초기화로 설정
    int size;
    char ans;

    // 문자열 입력 받기
    scanf_s("%s", a, sizeof(a));

    size = strlen(a);

    // 문자 카운트
    for (int i = 0; i < size; i++) {
        if (a[i] >= 'a') {
            arr[a[i] - 'a']++;  // 소문자
        }
        else {
            arr[a[i] - 'A']++;  // 대문자
        }
    }

    // 가장 많이 등장한 알파벳 찾기
    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ans = 'A' + i;  // 가장 많이 등장한 알파벳
        }
        else if (arr[i] == max) {
            ans = '?';  // 같은 빈도를 가진 알파벳이 여러 개 있을 때
        }
    }

    printf("%c\n", ans);

    return 0;
}
