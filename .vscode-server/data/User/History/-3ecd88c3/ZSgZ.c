#include <stdio.h>
#include <string.h>

int sports_no_bieber(char *s){
return strstr(s, "sport") && !strstr(s, "bieber");
}
int sports_or_workout(char *s){
return strstr(s, "sport") || !strstr(s, "working out");
}
int ns_theater(char *s){
return strstr(s, "smoke") && !strstr(s, "theater");
}
int arts_theater_or_dining(char *s){
return strstr(s, "art") && !strstr(s, "theater") || strstr(s, "dining");
}
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