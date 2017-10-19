#include <stdio.h>

int main(){
	int n, t;
	
	printf("Gib n ein: ");
	scanf("%d", &n);
	
	int zahlen[n];
	
	int i = 0;
	int max = 0;
	int min = 0;
	
	while(i <= n){
		t = 0;
		
		printf("Gib Zahl fuer Feld #%d ein: ", i);
		scanf("%d", &t);
		
		zahlen[i] = t;
		
		if(t <= min || min == 0){
			min = t;
		}
		else if(t >= max || max == 0){
			max = t;
		}
		i++;
	}
	
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Arraygroesse: %d", n);
	
	return 0;
}
