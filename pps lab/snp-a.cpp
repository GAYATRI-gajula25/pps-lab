#include<stdio.h>
int main(){ 
	printf(“Minimum number among the given three numbers is :”findMin(2, 8, 3)); 
	printf(“Maximum number among the given three numbers is :”findMax(2, 8, 3)); 
} 
 
int findMin(int a, int b, int c){ 
	int min = 0; 
	while(a!=0 && b!=0 && c!=0){ 
		a—; 
		b—; 
		c—; 
		min ++; 
	} 
	return min; 
} 
 
int findMax(int a, int b, int c){ 
	int max = 0; 
	while(a>0 || b>0 || c>0){ 
		a—; 
		b—; 
		c—; 
		max ++; 
	} 
	return max; 
} 

