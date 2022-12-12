search: find.o search.o
	gcc search.o find.o -o search

find.o: find.c find.h
	gcc -c find.c

search.o: search.c find.h
	gcc -c search.c
