#include <stdio.h>

int main() {
    float eingabe = 0;
    do{
        printf("Geben Sie eine Temperatur in Celsius an (Abbruch bei Eingabe = -273.15): ");
        scanf("%f", &eingabe);
        if(eingabe >= (-273.14)){
            float Fahrenheit, Kelvin;
            Fahrenheit = ((9.0 / 5.0) * eingabe) + 32.0;
            Kelvin = eingabe + 273.15;
            printf("Die Temperatur %f°C ist %f°F oder %fK.\n", eingabe, Fahrenheit, Kelvin);
        }
        else if(eingabe <= (-273.16)) {
            printf("Die Temperatur %f°C liegt unter dem absoluten Nullpunkt.\n", eingabe);
        }
        else{
            break;
        }
        printf("%f\n", eingabe);
    }
    while(eingabe != -273.149994);

    return 0;
}