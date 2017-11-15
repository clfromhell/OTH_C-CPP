#include <stdio.h>

int main() {
    int n1, n2, d, i, r, t, e=0;

    printf("Geben Sie die Bitzahl der ersten Zahl ein: ");
    scanf("%d", &n1);

    int b1[n1];

    for(i=0;i<n1;i++){
        printf("Geben Sie Bit #%d ein: ", i);
        scanf("%d", &b1[i]);
    }

    printf("\nGeben Sie die Bitzahl der zweiten Zahl ein: ");
    scanf("%d", &n2);

    int b2[n2];

    for(i=0;i<n2;i++){
        printf("Geben Sie Bit #%d ein: ", i);
        scanf("%d", &b2[i]);
    }

    if(n1 <= n2){
        d=n2;
    }
    else{
        d=n1;
    }

    int b3[d];

    r = 0;

    for(i=0;i<d;i++){
        t = b1[i] + b2[i] + r;
        if(t==2){
            b3[i] = 0;
            r = 1;
        }
        else if(t>2){
            if(t%2==0){
                b3[i] = 0;
                r = t - 2;
            }
            else{
                b3[i] = 1;
                r = t - 1;
            }
        }
        else {
            if(r >= 1) {
                b3[i] = b1[i] + b2[i] + r;
                r--;
            }
            else{
                b3[i] = b1[i] + b2[i] + 1;
                r--;
            }
        }
    }

    if(r>=1){
        printf("\n\nOVERFLOW.");
    }
    else{
        printf("\n\nErgebnis: \n");
        for(i=d-1;i>=0;i--){
            printf("%d", b3[i]);
            e = e + (b3[i]*(2^i));
        }
        printf(" / %d", e);
    }

    return 0;
}