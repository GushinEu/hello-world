#include <stdio.h>
int factorial(int a);

void main (void)
{
	int n,k,answer;

	scanf("%d %d",&n,&k);
	answer = factorial(n)/(factorial(k)*factorial(n-k));
	printf("%d", answer);
	
	return ;
}

int factorial(int a){
	int t=1;
		for(int i = 1; i < a+1; i++){
			t *= i; 
		}return t;
}