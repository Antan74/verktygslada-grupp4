#include "verktyg.h"

int ar_primtal(int tal)
{
    if(tal == 2)
    {
        return 0;
    }
    else if (tal / tal == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}