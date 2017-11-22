#include <stdio.h>
#include <ctype.h>

int main() {
    char eingabe;
    printf("Geben Sie eine Ziffer oder einen Buchstaben (groß oder klein) ein: ");
    scanf("%s", &eingabe);

    if(isdigit(eingabe)){
        printf("\nDie Eingabe ist eine Ziffer.");
    }
    else{
        if(isupper(eingabe)){
            printf("\nDie Eingabe ist ein Großbuchstabe.");
        }
        else{
            printf("\nDie Eingabe ist ein Kleinbuchstabe.");
        }

    }

    return 0;
}