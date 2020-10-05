#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int fat;
    for(fat = 1; n > 1; n = n - 1)
        fat = fat * n;
    return fat;
}

float funcaoMatematica(int n){
    float result = 1;
    for(int i = 1; i <= n; i++){
        result+= (float)1/fatorial(i);
    }
    return result;
}

int main()
{
    printf("%f", funcaoMatematica(3));
    return 0;
}
