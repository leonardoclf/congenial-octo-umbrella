#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main () {
    char sentence[51];
    char newSentence[51];
    int upperLower = 1, i;

    while (gets(sentence) != NULL) {
        for (i = 0; i < strlen(sentence); i++) {
            if( isspace(sentence[i]) ) {
                newSentence[i] = sentence[i];
            } else {
                if (upperLower == 1) {
                    newSentence[i] = toupper(sentence[i]);
                    upperLower = 0;
                } else {
                    newSentence[i] = tolower(sentence[i]);
                    upperLower = 1;
                }
            }
        }
        upperLower = 1;
        newSentence[i] = '\0';
        printf("%s\n", newSentence);
    }
}



// int main () {
//     char sentence[51];
//     char newSentence[51];
//     int upperLower = 1, i;
//     gets(sentence);
//     for (i = 0; i < strlen(sentence); i++) {
//         if( isspace(sentence[i]) ) {
//             newSentence[i] = sentence[i];
//         } else {
//             if (upperLower == 1) {
//                 newSentence[i] = toupper(sentence[i]);
//                 upperLower = 0;
//             } else {
//                 newSentence[i] = tolower(sentence[i]);
//                 upperLower = 1;
//             }
//         }
//     }
//     newSentence[i] = '\0';
//     printf("%s\n", newSentence);
// }