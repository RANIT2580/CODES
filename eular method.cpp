#include<stdio.h>
#define f(x,y) x+y
int main()
{
	float x0,y0,xn,yn,h,slope;
	int i,n;
	printf("enter initial condition:\n");
	printf("x0 =");
	scanf("%f",&x0);
	printf("y0 =");
	scanf("%f",&y0);
	printf("enter calculating point : xn= ");
	scanf("%f",&xn);
	printf("enter num of steps :");
	scanf("%d",&n);
	h=(xn-x0)/n;
	for(i=0;i<n;i++){
		slope= f(x0,y0);
		yn=y0+h*slope;
		printf("%4f\t%.4f\t%.4f\t%.4f\t",x0,y0,slope,yn);
		y0=yn;
		x0=x0+h;
	}
	printf("value of y at x =%.2f is %0.3f",xn,yn);
	return 0;
	}
