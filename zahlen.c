#include "zahlen.h"

/* Initialisiere / loesche str mit c. */
void clear (char c, char str[]) {
    int i;
    for(i = 0; str[i] != 0; i++) {
        str[i] = c;
    }
}

int char2int(char c) {

    /* Der ASCII-Zeichensatz gibt an, dass '0' den Wert 48 hat,
 * also zieht man von dem Element "i" der Zeichenkette den ASCII-Wert '48' ab und gelangt auf die numerische
 * Differenz des Elementes "i" der Zeichenkette.
 * Beispiel: str[i] = 3 // '3' hat den Wert '51', also 51-48=3
 */

    if (c >='0' && c <= '9') {
        return c - '0';
    }
    return -1;
}

/* Bilde aus der Zeichenkette str eine positive Ganzzahl und gebe diese zurueck oder -1
 * im Fehlerfall einer ungueltigen Zeichenkette */
int str2int(char str[]) {
    int num,i,digit,len;

    /* Pruefen, ob der Eingabestring leer ist */
    for (len = 0; str[len] != 0; len++) {
        if (*str == 0 || len > DIGITS) return -1;
    }
        num = 0;

    /* Durchlauf der Zeichenkette */
    for (i = 0; str[i] != 0; i++) {
        digit = char2int(str[i]);
        num = num * 10 + digit;
    }
    if (num >= 0 && num < MAXZAHL) return num;
    return -1;
}

/* Schreibt die Binaerdarstellung der Ganzzahl i in die Zeichenkette str */
void int2Binaer(int i, char str[]) {
    int index, bit;

    index = 0;
    /* Wenn i 0 ist, setzen wir str auf "0" */
    if (i == 0) {
        str[index] = '0';
    } else {

        for (bit = DIGITS - 1; bit >= 0; bit--) { {
            /* Testen des jeweiligen Bits von i */
            if ((i >> bit) & 1) {
                str[index++] = '1';
            } else {
                str[index++] = '0';
            }
            }
        }
        /* Nullterminator fuer die Zeichenkette */
        str[index] = '\0';
    }
}
