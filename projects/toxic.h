#ifdef __FISH_H
#define __FISH_H

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
};

void catalog(struct fish);

#endif
