#include <stdio.h>
#include <conio.h>
int sum(int);

int main(){
	int n;
	do{
		printf("Enter the number: ");
		scanf("%d", &n);
	}while(n<0);
	int S = sum (n);
	printf("\nSum of all digits: %d", S);
	getch();
	return 0;
}

int sum(int n){
	int S=0;
	while (n != 0){
		S += n%10;
		n/=10;
	}
	return S;
}
