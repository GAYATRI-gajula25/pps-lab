#include <stdio.h>
int main()
{
	float num1, num2, num3;
	float sum, avg;
	
	printf("Enter three numbers: ");
	scanf("%f %f %f", &num1,&num2,&num3);
	
	sum = num1 +num2 + num3;
	avg = sum/3;
	
	printf("entered numbers are:%.2f,%.2f and %.2f\n",num1,num2,num3);
	printf("average = %.2f\n",avg);
	
	
   return(0);	
}
