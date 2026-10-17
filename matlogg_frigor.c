#include <stdio.h>
#include <string.h>
#include "verktyg.h"

int matlogg_frigor(const char *filnamn) {
    FILE *f = fopen(filnamn, "r");
    if (!f) {
        printf("Kunde inte öppna filen: %s\n", filnamn);
        return 0;
    }

    char rad[512];
    int antal = 0;

    while (fgets(rad, sizeof(rad), f)) {
        if (strstr(rad, "frigor") != NULL) {
            antal++;
        }
    }

    fclose(f);

    printf("Antal rader med 'frigor': %d\n", antal);
    return antal;
}
