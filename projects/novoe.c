#include <stdio.h>
#include "fish.c"

int main() {
	struct fish snappy = {"Jab", "Toxic", 69, 14};
	catalog(snappy);
	return 0;
}
