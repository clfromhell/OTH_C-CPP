#include <stdio.h>

int main() {
    int n, i, x, y;
    printf("Geben Sie N ein: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(x=1;x<=n;x++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=n;i++){
        for(x=1;x<=n;x++){
            if((i==0 || i==n-1) || (i!=0 && i!=n-1 && (x==0 || x==n-1))) {
                printf("*");
            }
            else if(i!=0 && i!=n-1 && (x!=0 || x!=n-1)){
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=n;i++){
        for(x=1;x<=i;x++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=n;i++){
        for(x=1;x<=i;x++){
            printf("*");
        }
        for(y=i;y<n;y++){
            printf("+");
        }
        printf("\n");
    }

    return 0;
}