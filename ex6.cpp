#include <stdio.h>
#include <conio.h>

int fibo (int);
int main(){
	int n;
	do{
		printf("Type the number: ");
		scanf("%d", &n);
	}while (n <= 0);
	if (fibo(n) == 1){
		printf("\n%d is a Fibonacci element !", n);
	}
	else{
		printf("\n%d is not a Fibonacci element !", n);
	}
	getch();
	return 0;
}

int fibo(int n){
	int t1 = 1, t2 = 1, f = 1;
	if (n < 3){
		return 1;
	}
	else{
		for(int i = 3; i<=n; i++){
			f = t1 + t2;
			t1 = t2;
			t2 = f;
			if (f == n){
				return 1;
			}
			
		}
	}
	return 0;
}
