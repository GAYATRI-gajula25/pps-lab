#include(stdio.h)                           
#include(conio.h)
int fact( int);                                     
int main( )
{
int no,result;
clrscr( );
printf("Enter the required number:");
scanf("%d", &no);
result = fact( no);
printf("\n %d Factorial is : %d", no, result);
getch( );
return 0;
}

