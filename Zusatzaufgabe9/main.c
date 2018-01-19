#include <stdio.h>
#include <string.h>

void main() {
    int key, i, c;
    int a = "A"[0];
    int z = "Z"[0];
    char kette[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Geben Sie den Schlüssel als Ganzzahl ein: ");
    scanf("%d", &key);

    printf("\nVerschlüsselte Kette: ");
    for(i = 0; i<=25; i++){
        c = kette[i];
        if((c + key) > z){
            c = c - z + a + key - 1;
            kette[i] = (char)c;
        }
        else{

            c += key;
            kette[i] = (char)c;
        }
        printf("%c", kette[i]);
    }




}