#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int verifica(int testNum)
{
    int a, c;
    float temp, b;

    temp = (float)testNum / 100;
    a = (int)temp;
    b = (float)temp - a;
    b *= 100;
    c = a + (int)b;
    c *= c;

    if (c == testNum)
        return TRUE;
    return FALSE;
}

void bruteForce()
{
    int arr[9000], j = 0, teto;
    for (int i = 1000; i <= 9999; i++)
    {
        if (verifica(i))
        {
            arr[j] = i;
            j++;
        }
    }

    teto = j;
    j = 0;

    do
    {
        printf("%d\n", arr[j]);
        j++;
    } while (j < teto);
}

int main(int argc, char *argv)
{
    bruteForce();
}