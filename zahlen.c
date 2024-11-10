#include "zahlen.h"

/* Initialisiere / loesche str mit c. */
void clear (char c, char str[]) {

   for(c=0; *str != 0; c++) {
    str[c]=0;
   }
}

int char2int(char const c) {

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
int str2int(char const str[]) {

    /* Pruefen, ob der Eingabestring leer ist */
    if (*str == 0) {
        return -1;
    }
    int num = 0;

    /* Durchlauf der Zeichenkette */
    for (int i = 0; str[i] !=0; i++) {

        int digit = char2int(str[i]);
        num = num * 10 + digit;
    }
    if (num > 0) {
        return num;
    }
    return -1;
}

/* Schreibt die Binaerdarstellung der Ganzzahl i in die Zeichenkette str */
void int2Binaer(int i, char str[]) {
    int index = 0;
    // Wenn i 0 ist, setzen wir str auf "0"

    if (i == 0) {
        str[index++] = '0';
    } else {
        // Für eine positive Zahl oder negative Zahl stellen wir den Binaerwert umgekehrt dar
        int bit;
        for (bit = 31; bit >= 0; bit--) {
            // Testen des jeweiligen Bits von i
            if ((i >> bit) & 1) {
                str[index++] = '1';
            } else {
                str[index++] = '0';
            }
        }
    }

    // Nullterminator für die Zeichenkette
    str[index] = '\0';

}
