#include <stdio.h>

int main() {
	char str[100];
	printf("문자를 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력된 문자는 %s 입니다.", str);

	return 0;
}
	