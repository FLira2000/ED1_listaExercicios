#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int fat;
    for(fat = 1; n > 1; n = n - 1)
        fat = fat * n;
    return fat;
}

int main()
{
    printf("%d", fatorial(10));
    return 0;
}
