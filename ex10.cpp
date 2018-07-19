#include <stdio.h>
#include <conio.h>

int minDigit(int);
int maxDigit(int);

int main(){
	int n, maxd;
	int mind;
	do{
		printf("Enter a number: ");
		scanf("%d", &n);
	}while(n<0);
	maxd = maxDigit(n);
	mind = minDigit(n);
	printf("\nMin digit of %d is: %d", n, mind);
	printf("\nMax digit of %d is: %d", n, maxd);
	getch();
	return 0;
}

int maxDigit(int n){
	int max = n%10, temp;
	while (n != 0){
		n/=10;
		temp = n%10;
		if (temp > max){
			max = temp;
		}
	}
	return max;
}

int minDigit(int n){
	int min = n%10, temp;
	n/=10;
	while (n != 0){
		temp = n%10;
		if (temp < min){
			min = temp;
		}
		n/=10;
	}
	return min;
}
