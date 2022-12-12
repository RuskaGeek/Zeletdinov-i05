#include <stdio.h>

int main() {
	int x, y, z, d;
	printf("Vvedi x i y ne par' mozgi!");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("Vibirite deystvie:");
	printf("1-slojenie/n");
	printf("2-vychitanie/n");
	printf("3-umnojenie/n");
	printf("4-delenie");
	scanf("%d", &d);
	if (d==1) {
		z=x+y;
		printf("%d + %d = %d", x,y,z);
	}
	else if (d==2) {
		z=x-y;
		printf("%d - %d = %d", x,y,z);
	}
	else if (d==3) {
		z=x*y;
		printf("%d * %d = %d", x,y,z);
	}
	else if (d==4) {
		if (y==0) {
			printf("y=0, pridurok!");
		}
		else{
			z=(float)x/y;
		}
	printf("%d + %d = %d\n",x,y,z);
	}
	return 0;
}

