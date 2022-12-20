#include <stdio.h>
#include "find.h"

const int NUM_ADS=7;
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
int main() {
    find(sports_or_workout);
    return 0;
}