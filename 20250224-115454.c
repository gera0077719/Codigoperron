#include <stdio.h>
int main (){ 
    printf(" ****** ando ******\n");
    printf("true && true : %d\n", (1 && 1));
    printf("true && false : %d\n", (1 && 0));
    printf("false && true : %d\n", (0 && 1));
    printf("false && true : %d\n", (0 && 1));

    printf(" ****** or ******\n");
    printf("true || true : %d\n", (1 || 1));
    printf("true || flase : %d\n", (1 || 0));
    printf("false || true : %d\n", (0 || 1));
    printf("false || false : %d\n", (0 || 0));
    
    printf(" ****** xor ******\n");
    printf("true ^ true : %d\n", (1 ^ 1));
    printf("true ^ false : %d\n", (1 ^ 0));
    printf("false ^ true : %d\n", (0 ^ 1));
    printf("flase ^ flase : %d\n", (0 ^ 0));
    
    system ("pause");
    return 0;
}    
  