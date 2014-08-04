/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* HELPER FUNCTIONS */
/* THESE GO FIRST */

/* FINALLY, MAIN */
int main(int argc, char** argv) {
    FILE* f;
    char c=0;
    printf("%d\n", argc);
    f = fopen(argv[1], "r");
    while (!feof(f)) {
        c = fgetc(f);
        if (c==EOF) {
            printf("EOF");
        } else {
            printf("%c",c);
        }
    }
    return 0;
    
}
