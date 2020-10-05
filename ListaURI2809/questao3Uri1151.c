#include <stdio.h>

int main() {
    int i, num, t1 = 0, t2 = 1, proxTermo;
    
    scanf("%d", &num);
    
    for (i = 1; i <= num; ++i) {
        if (i != num) {
            printf("%d ", t1);
            proxTermo = t1 + t2;
            t1 = t2;
            t2 = proxTermo;
        } else {
            printf("%d\n", t1);
        }
    }
    return 0;
}