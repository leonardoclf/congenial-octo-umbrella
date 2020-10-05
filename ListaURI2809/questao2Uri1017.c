#include <stdio.h>
 
int main() {
    float hour, speed, liters;
    
    scanf("%f", &hour);
    scanf("%f", &speed);
    liters = (hour * speed) / 12;
    printf("%.3f\n", liters );
    
    return 0;
}