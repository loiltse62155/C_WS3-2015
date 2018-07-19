#include <stdio.h>
#include <conio.h>
#include <math.h>
int detPrime(int);

int main(int argc, char** argv) {
    int n;
    do{
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n <= 0){
            printf("\nWrong information. Try again !\n");
        }
    }while(n <= 0);
    for (int i = 2; i <= n; i++ )
    {
    	if (detPrime(i))
    	{
    		printf("\n%d", i);
		}
	}
    
	getch();
    return 0;
}

int detPrime (int n)
{
    	if(n < 2)
	{
		return 0;
	}
	else if(n > 2)
	{
		if(n % 2 == 0)
		{
			return 0;
		}
		for(int i = 3; i <= (int)sqrt((float)n); i += 2)
		{
			if(n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}
