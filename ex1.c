#include <stdio.h>
void main (void)
{
	double x,y;

	scanf("%lf %lf", &x, &y);

	printf("%d", ((x>0&&y<0)*4) + (x>0&&y>0) + ((x<0&&y<0)*3) + ((x<0&&y>0)*2));
	return ;
}
