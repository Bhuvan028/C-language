#include <stdio.h>
int main()
{
 int seconds,days,hours,minutes;
scanf("%d",&seconds);
days=seconds/86400;
hours=(seconds%86400)/3600;
minutes=((seconds%86400)%3600)/60;
seconds=((seconds%86400)%3600)%60;
printf("The Duration is %d days %d hours %d minutes %d seconds ",days,hours,minutes,seconds);
return 0;
}
