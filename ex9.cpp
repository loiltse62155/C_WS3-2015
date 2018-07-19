#include <stdio.h>
#include <conio.h>

int GCD(int, int);
int LCM(int, int);

int main(){
	int n1, n2;
	int ucll, bcnn;
	do{
		printf("Enter 2 numbers: ");
		scanf("%d%d", &n1, &n2);
	}while(n1<0 || n2<0);
	ucll = GCD (n1, n2);
	bcnn = LCM (n1, n2);
	printf("\nThe greatest common devisors: %d", ucll);
	printf("\nThe least common multiple: %d", bcnn);
	getch();
	return 0;
}

int GCD(int n1, int n2){
	while(n1 != n2){
		if (n1 > n2){
			n1 = n1 - n2;
		}
		else n2 = n2 - n1;
	}
	return n1;
}

int LCM (int n1, int n2){
	return (n1*n2)/GCD(n1, n2);
}

