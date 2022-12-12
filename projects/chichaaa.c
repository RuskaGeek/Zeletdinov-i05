#include <stdio.h>
#include "encrypt.c"

int main() {
	char mes[20];
	scanf("%s", mes);
	encrypt(mes);
	printf("%s\n", mes);
	encrypt(mes);
	printf("%s\n", mes);
	return 0;
}
