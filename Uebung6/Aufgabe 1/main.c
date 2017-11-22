#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Geben Sie a ein: ");
    scanf("%f", &a);
    printf("Geben Sie b ein: ");
    scanf("%f", &b);
    printf("Geben Sie c ein: ");
    scanf("%f", &c);

    if(a == 0) {
        if (b == 0 && c != 0) {
            printf("Gleichung nicht lösbar.");
        }
        else if(b == 0 && c == 0){
            printf("Gleichung ist unbestimmt.");
        }
        else{
            float x;
            x = (-c) / b;
            printf("Die Lösung lautet: %f",x);
        }
    }
    else{
        float d;
        d = (b*b)-4*a*c;
        if(d > 0){
            float x1, x2;
            x1 = ((-b) + sqrt(d)) / (2 * a);
            x2 = ((-b) - sqrt(d)) / (2 * a);
            printf("Die Lösungen lauten: x1 = %f, x2 = %f", x1, x2);
        }
        else if(d == 0){
            float x;
            x = (-b) / (2 * a);
            printf("Die Lösungen lauten: x1 = x2 = %f", x);
        }
        else if(d < 0){
            float R, C, bd;
            bd = sqrt(d * d);
            R = (-b) / (2 * a);
            C = (sqrt(bd)) / (2 * a);
            printf("Die Lösungen sind komplex und lauten: x1,x2 = %f +- i%f.", R, C);
        }

    }

    return 0;
}