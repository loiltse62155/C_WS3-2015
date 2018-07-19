#include <stdio.h>
#include <conio.h>
#include <math.h>

float addReal(float, float);
int main(){
	float n1, n2;
	printf("Enter number 1: ");
	scanf("%f", &n1);
	do{
		printf("\nEnter number 2: ");
		scanf("%f", &n2);
	}while(n2<0);
	
	float S = addReal(n1, n2);
	printf("\nResults = %.2f", S);
	getch();
	return 0;
}

float addReal(float n1, float n2){
	float S;
	int n = (int)log10(n2)+1;
	n2 = n2/(int)(pow(10, (float)n));
	S = n1 + n2;
	return S;
}
