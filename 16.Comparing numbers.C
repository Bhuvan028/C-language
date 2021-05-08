#include <stdio.h>
int main()
{
int number1,number2;
scanf("%d%d",&number1,&number2);
if(number1>number2)
printf("num1 is big");
else if(number2>number1)
printf("num2 is big");
else
printf("Both are equal");
	return 0;
}
