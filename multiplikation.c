#include <stdio.h>
#include "verktyg.h"

void skriv_multiplikationstabell(int tal)
{
    int value = 0;

    for(int i = 1; i <= 10; i++)
    {
        value = tal * i;
        printf("%d x %d = %d", tal, i , value); 
    }
}