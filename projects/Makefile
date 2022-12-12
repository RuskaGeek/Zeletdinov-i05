islandmain: island.o islandmain.o
	gcc islandmain.o island.o -o islandmain

island.o: island.c island.h
	gcc -c island.c

islandmain.o: islandmain.c island.h
	gcc -c islandmain.c
