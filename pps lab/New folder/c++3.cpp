#include <stdio.h>
int main()
{
	int num1, num2, num3;
	int sum, avg;
	
	printf("enter three numbers: ");
	scanf("%d %d %d,&num1,&num2,&num3");
	
	sum = num1 + num2 + num3;
	avg = sum/3;
	
	printf("enter numbers are %.2d,%.2d and %.2d\n",num1,num2,num3);
	printf("sum = %d",sum);
	printf("\naverage = %.2d\n",avg);
	
   return(0);	
}
