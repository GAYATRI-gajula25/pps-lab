#include <stdio.h>
int main()
{
	char id[10];
	int hour;
	double value, salary;
	printf("input the employees ID(max . 10 chars); ");
	scanf("%s", &id);
	printf("\ninput the working hrs : ");
	scanf("%d", &hour);
	printf("\nsalary amount /hr: ");
	scanf("1f", &value);
	salary = value * hour;
	printf("\nemployees ID = %s\nsalary = u$%.21f\n",id,salary);
	
   return(0);	
}
