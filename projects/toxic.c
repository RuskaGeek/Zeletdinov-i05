#include <stdio.h>
#include "toxic.h"

void catalog(struct toxic f) {
	printf("%s -  eto %s s %d hromosomami. Emu %d let \n",
		f.name, f.species, f.teeth, f.age);
}
