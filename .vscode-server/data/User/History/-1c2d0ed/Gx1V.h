#include <stdio.h>
#include <string.h>

void find(int (*match) (char*)) {
    int i;
    puts("Searh results:");
    puts("----------------------------------");
    for (i=0; i<NUM_ADS;i++){
        if (match(ADS[i]))
            printf("%s\n", ADS[i]);
    }
    puts("----------------------------------");
}
