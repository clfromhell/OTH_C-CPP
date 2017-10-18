#include <stdio.h>
#include "math.h"

int main() {
    double a, b, c;
    char* ou;

    char* gse = "Gleichsseitiges Dreieck";
    char* gsc = "Gleichschenkliges Dreieck";
    char* ure = "Unregelmäßig rechtwinkliges Dreieck";
    char* rec = "Rechtwinkliges Dreieck";

    //Input Seite A
    printf("Länge Seite A: ");
    scanf("%lf", &a);

    //Input Seite B
    printf("Länge Seite B: ");
    scanf("%lf", &b);

    //Input Seite C
    printf("Länge Seite C: ");
    scanf("%lf", &c);

    //Dreieck checken
    if(a < (b + c) && b < (c + a) && c < (a + b) && a > (b - c) && b > (a - c) && c > (a - b)) {
        if(a == b && b == c) {
            ou = gse;
        }
        else if(a == b && a != c){
            if(sqrt((a * a) + (b * b)) == c) {
                ou = rec;
            }
            else {
                ou = gsc;
            }
        }
        else if(b == c && a != c){
            if(sqrt((b * b) + (c * c)) == a){
                ou = rec;
            }
            else {
                ou = gsc;
            }
        }
        else if(a == c && b != c){
            if(sqrt((a * a) + (c * c)) == b){
                ou = rec;
            }
            else {
                ou = gsc;
            }
        }
        else {
            if(sqrt((a * a) + (b * b)) == c){
                ou = ure;
            }
            else if(sqrt((a * a) + (c * c)) == b){
                ou = ure;
            }
            else if(sqrt((b * b) + (c * c)) == a){
                ou = ure;
            }
            else {
                ou = "Dreieck";
            }
        }
    }
    else {
        ou = "Kein Dreieck";
    }

    printf("%s",  ou);

    return 0;
}