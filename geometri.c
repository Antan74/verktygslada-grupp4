#include <stdio.h>
#include "verktyg.h"

double rektangelarea(double bredd, double hojd)
{
    return bredd * hojd;
}
void storst_rektangel(double bredder[], double hojder[], int antal,
    double *storsta_area_ut, int *index_ut)
{
    if (antal != 0)
    {    
        *storsta_area_ut = rektangelarea(bredder[0], hojder[0]);
        *index_ut = 0;
        for(int i; i < antal; i++)
        {
            double area = rektangelarea(bredder[i], hojder[i]); 

            if(area > *storsta_area_ut)
            {
                *storsta_area_ut = area;
                index_ut = i;
            }
        }
    }
    else 
        Printf("not valid amount");
}