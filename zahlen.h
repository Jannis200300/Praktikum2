#ifndef ZAHLEN_H
#define ZAHLEN_H

#endif

/* Verwende zur Darstellung maximal DIGITS lange Zeichenketten */
#define DIGITS 8

/* groesste erlaubte Zahl mit DIGITS Stellen */
#define MAXZAHL (1<<DIGITS)

/* Initialisiere /loesche str mit c. */
void clear (char c, char str []);

/*Hilfsfunktion*/
int char2int(char c);

/* Bilde aus der Zeichenkette str eine positive Ganzzahl und gebe diese zurueck oder -1
 * im Fehlerfall einer ungueltigen Zeichenkette */
int str2int(char str[]);

/* Schreibt die Binaerdarstellung der Ganzzahl i in die Zeichenkette str */
void int2Binaer(int i, char str[]);
