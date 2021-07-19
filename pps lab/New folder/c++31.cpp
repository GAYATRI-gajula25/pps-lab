#include <stdio.h>
int main()
{
	
    float c, m, k;
    
    // c = centimeter
    // m = meter
    // k = kilometer

    printf("Enter the length in centimeter::\n");
    scanf("%f", &c);

    /* Convert centimeter into meter and kilometer */
    m = (float)(c / 100);
    k = (float)(c / 100000);

    // Output
    printf("\nLength in Meter      = %f meter \n", m);
    printf("Length in Kilometer  = %f kilometer\n", k);

    return 0;
}
