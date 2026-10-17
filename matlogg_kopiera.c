#include <stdio.h>
#include "verktyg.h"

void matlogg_kopiera(const char *kalla, const char *destination) {
    FILE *in = fopen(kalla, "r");
    if (!in) {
        printf("Kunde inte öppna källfilen: %s\n", kalla);
        return;
    }

    FILE *out = fopen(destination, "w");
    if (!out) {
        printf("Kunde inte skapa målfilen: %s\n", destination);
        fclose(in);
        return;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Kopiering klar: %s -> %s\n", kalla, destination);
}
