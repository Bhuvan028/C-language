#include <stdio.h>
int main()
{
int feet,inches;
float cms;
int totinches;
scanf("%d %d",&feet,&inches);
totinches=12*feet+inches; 
cms=2.54*totinches;
printf("Your height in centimeters is : %.2f",cms);
	return 0;
}
