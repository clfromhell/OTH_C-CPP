#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode_model {
    int Zahl;
    struct ListNode_model *nextNode;
} Node;

void SelectionSort(Node *l, unsigned int n){

}

int getValue(Node *l, unsigned int pos){
    while (pos > 0) {
        l = l->nextNode;
        pos--;
    }
    return l->Zahl;
}

void main() {

    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    unsigned int i, p = 0;

    Node *l = NULL;
    Node *insertL(Node *l, unsigned int pos, int value){
        Node *new = (Node *) malloc(sizeof(Node));
        new->Zahl = value;

        if (pos == 0){
            new->nextNode = l;
            return new;
        }
        else {
            Node *prev = l;
            while (pos > 1 && prev != NULL) {
                prev = prev->nextNode;
                pos--;
            }
            new->nextNode = prev->nextNode;
            prev->nextNode = new;
            return l;
        }
    }

    do{

        l = insertL(l, p, ar[p]);
        p++;
    }while(p < 10);

    for(i=0; i<10; i++){
        printf("%d\n", getValue(l, i));
    }
}