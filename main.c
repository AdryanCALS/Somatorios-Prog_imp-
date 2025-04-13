#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#define SOMAT 4

#if (SOMAT == 1)
int main(){
    int result = Somatorio1();
    printf("O resultado do Somatorio 1 foi: %d", result);
    return 0;
}
#elif (SOMAT == 2)
int main(){
    int result = Somatorio2();
    printf("O resultado do Somatorio 2 foi: %d", result);
    return 0;
}
#elif (SOMAT == 3)
int main(){
    int result = Somatorio3();
    printf("O resultado do Somatorio 3 foi: %d", result);
    return 0;
}
#else
int main(){
    int result = Somatorio4();
    printf("O resultado do Somatorio 4 foi: %d", result);
    return 0;
}
#endif