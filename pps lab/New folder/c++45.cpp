#include <stdio.h>
int main()
{
char i;
	
	printf("Small Letters:\n");
	//print small letters alphabets
	for(i = 'a'; i <='z'; i++){
	    printf("%c", i);
	}
	
	printf("\n\nCapital Letters:\n");   
	//print captial letters alphabets
	for(i = 'A'; i <='Z'; i++){
	    printf("%c", i);
	}
	return(0);
}
