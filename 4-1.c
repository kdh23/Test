#include <stdio.h>
int main()
{
	char a = 'a';

	printf("%c의 대문자는 %c입니다.\n", a, a - 0x20);

	return 0;
}