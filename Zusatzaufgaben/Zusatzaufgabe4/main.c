#include <stdio.h>

void main() {
    int x; //Alter des Vaters bei der Geburt seines Sohnes
    int y; //Alter des Opas bei der Geburt seines Enkels
    int z = 0; //Alter des Sohnes


    printf("Geben Sie das Alter des Vaters bei der Geburt des Sohnes ein: ");
    scanf("%d", &x);
    printf("Geben Sie das Alter des Opas bei der Geburt des Enkels ein: ");
    scanf("%d", &y);

    while(z <= ((x + y) / 4)){
        z++;
        x++;
        y++;
    }
    printf("\nSohn: %d | Vater: %d | Opa: %d", z, x, y);
}