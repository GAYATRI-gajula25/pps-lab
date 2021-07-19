#include <stdio.h>
int main()
{
    int x;
    float y;
    printf("input total distance in km; ");
    scanf("%d,&x");
    printf("input total fuel spend in liters; ");
    scanf("%f,&y");
    printf("average comsuption (km/1t)%.3f",x/y);
    printf("\n");
	
	
   return(0);	
}
