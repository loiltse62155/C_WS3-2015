#include <stdio.h>
#include <conio.h>
#include <math.h>

int test(float, float, float);

int main (){
	
	float x, y, r;
	printf("Enter the position of a point: ");
	scanf ("%f%f", &x, &y);
	do{
		printf("\nType the radius of a circus having the center is (0,0): ");
		scanf("%f", &r);
	}while (r<0);
	int flag = test(x, y, r);
	if (flag == 1){
		printf("\nThe point is in the circle !");
	}
	else if (flag == 0){
		printf("\nThe point is on the circle !");
	}
		else{
			printf("\nThe point is out of the circle !");
		}
	
	getch();
	return 0;
}

int test(float x, float y, float r){
	float d = sqrt(x*x + y*y);
	
	if (d < r){
		return 1;
	}
	else if (d == r){
		return 0;
	}
	return -1;
}
