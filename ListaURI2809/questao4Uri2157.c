#include <stdio.h>
#include <string.h>


int main() {
    
    int c, i, j;
    int start, end;
    char buffer[12221];
    scanf("%d", &c);
    while (c) {
        scanf("%d %d", &start, &end);
        // ordem crescente
        for ( i = start; i <= end; i++ ) {
            printf("%d", i);
        }
        // ordem decrescente com num reverso
        for (i = end; i >= start; i--) {
            sprintf(buffer, "%d", i);
            for (j = strlen(buffer) - 1; j >= 0 ; j--) {
                printf("%c", buffer[j]);
                
            }
        }
        printf("\n");
        c--;
    }
}











// int main() {
    
//     int c, i;
//     int start, end;
//     scanf("%d", &c);
//     while (c > 0) {
//         scanf("%d %d", &start, &end);
//         // ordem crescente
//         for ( i = start; i <= end; i++ ) {
//             printf("%d", i);
//         }
//         // ordem decrescente com num reverso
//         for (i = end; i >= start; i--){
//             printf("%d", i);
//         }
        


//         c--;
//     }


    
// }