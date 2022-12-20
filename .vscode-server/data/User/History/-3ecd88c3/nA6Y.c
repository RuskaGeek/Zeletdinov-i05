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
int main() {
    find(sports_or_workout);
    return 0;
}