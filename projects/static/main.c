#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
	char s[]="Say my name";
	encrypt(s);
	printf("Encrypted in 'char *'\n, s");
	printf("Control sum %i\n", checksum(s));
	encrypt(s);
	printf("Disencrypted in '%s'\n", s);
	printf("Control sum %i\n", checksum(s));
	return 0;
}
