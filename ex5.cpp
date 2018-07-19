#include <stdio.h>
#include <conio.h>

float fibo (int);

int main(){
	int n;
	do{
		printf("Enter number: ");
		scanf("%d", &n);
	}while(n < 0);
	float f = fibo(n);
	printf("\nThe %dth position in Fibonacci sequence: %.0f", n, f);
	getch();
	return 0;
}

float fibo(int n){
	int t1 = 1, t2 = 1, f = 1;
	for (int i = 3; i<= n; i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}
