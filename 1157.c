#include <stdio.h>
#include <string.h>

int main() {
    char a[1000005];
    int arr[26] = { 0 };  // �迭�� 0���� �ʱ�ȭ

    int max = -1;  // �󵵰� 0���� ���� ���� �ʱ�ȭ�� ����
    int size;
    char ans;

    // ���ڿ� �Է� �ޱ�
    scanf_s("%s", a, sizeof(a));

    size = strlen(a);

    // ���� ī��Ʈ
    for (int i = 0; i < size; i++) {
        if (a[i] >= 'a') {
            arr[a[i] - 'a']++;  // �ҹ���
        }
        else {
            arr[a[i] - 'A']++;  // �빮��
        }
    }

    // ���� ���� ������ ���ĺ� ã��
    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ans = 'A' + i;  // ���� ���� ������ ���ĺ�
        }
        else if (arr[i] == max) {
            ans = '?';  // ���� �󵵸� ���� ���ĺ��� ���� �� ���� ��
        }
    }

    printf("%c\n", ans);

    return 0;
}
