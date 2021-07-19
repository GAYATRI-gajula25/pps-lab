#include <stdio.h>
int main()
{
   int radius;
   float area ,perimeter;
   radius = 6;
    
   perimeter = 2*3.14*radius;
   printf("perimeter of a circle = %f inches \n",perimeter);
   
   area = 3.14*radius*radius;
   printf("area of circle = %f square inches\n",area);
   
   return(0);	
}
