#include <stdio.h>
#include <conio.h>

float factorial (int);
int main(){
	int n;
	float S;
	do{
		printf("Enter number that you want to find factorial: ");
		scanf("%d", &n);
	}while (n < 0);\
	S = factorial(n);
	printf("\n%d! = %.0f",n, S);	
	getch();
	return 0;
}

float factorial(int n){
	float p = 1;
	for (int i = 1; i <= n; i++){
		p = p * i;
	}
	return p;
}
