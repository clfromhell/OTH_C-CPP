#include <stdio.h>

int findval(int *v, int *n, int *x){
    int mid = *n / 2;
    int i;

    if(v[mid] == *x){
        return mid;
    }
    else if(v[mid] < *x){
        for(i = mid - 1; i>=0; i--){
            if(v[i] == *x){
                return i;
            }
        }
        return -1;
    }
    else{
        for(i = mid + 1; i<=0; i++){
            if(v[i] == *x){
                return i;
            }
        }
        return -1;
    }
}

void main() {
    int x, i, n;

    printf("Geben Sie die Arraylänge ein: ");
    scanf("%d", &n);

    int v[n];
    for(i=0; i<n; i++){
        v[i] = i + 1;
    }

    printf("Geben Sie den zu suchenden Wert ein: ");
    scanf("%d", &x);

    printf("\nArrayposition des zu suchenden Wertes: %d", findval(v, &n, &x));


    return;
}