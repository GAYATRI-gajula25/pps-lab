#include <stdio.h>
int main()
{
	char inputString[128];
  
   printf("Enter a multi line string( press ';' to end input)\n");
   scanf("%[^;]s", inputString);
  
   printf("Input String = %s", inputString);
  
   return 0;
 
}
