#include <stdio.h>

int main() {
	char str[100];
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));
	printf("�Էµ� ���ڴ� %s �Դϴ�.", str);

	return 0;
}
	