#include <stdio.h>
int main()
{
int amtreq; 
float iniamt;
scanf("%d%f",&amtreq,&iniamt);
if(amtreq>iniamt)
printf("Invalid Withdrawal Request\nInitial Balance : %.2f",iniamt);
else
printf("Current Balance : %.2f\nInitial Balance : %.2f",iniamt-amtreq,iniamt);

	return 0;
}
