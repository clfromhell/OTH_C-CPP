#include <stdio.h>

int main() {

    int d, n, i;

    printf("Geben Sie eine Dezimalzahl ein: ");
    scanf("%d", &d);
    printf("Geben Sie eine ausreichende Bitzahl ein: ");
    scanf("%d", &n);

    int b[n];

    for(i=1;i<=n;i++){
        b[i] = d%2;
        d = d/2;
    }

    if(d>0){
        printf("\nFehler: Zu wenig Bits eingegeben!");
    }
    else{
        printf("\nBinärzahl: ");
        for(i=n;i>0;i--){
            printf("%d", b[i]);
        }
    }

    return 0;
}