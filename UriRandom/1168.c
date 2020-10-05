#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int numDecode (int num) {
    switch (num) {
        case 0:
            return 6;
        case 1:
            return 2;
        case 2:
            return 5;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 3;
        case 8:
            return 7;
        case 9:
            return 6;  
    }
}


int numLeds(char * leds) {
    int i, res=0, num=0;
    for (i = 0; i < strlen(leds); i++) {
        // convert single char in int 
        num = leds[i] - '0';
        num = numDecode(num);
        res += num;
    }
    return res;
}




int main () {
    int c;
    scanf("%d\n", &c);
    for (c; c > 0; c--){
        char leds[200];
        memset(&leds, 0, sizeof(leds));
        gets(leds);
        printf("%d leds\n", numLeds(leds));
    }
}