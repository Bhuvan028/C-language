#include <stdio.h>
int main()
{char operator;
    double n1, n2;
scanf("%c %lf %lf",&operator,&n1,&n2);
switch(operator)
{
    case'*':
    printf("%.1lf",n1*n2);
    break;
    case'+':
    printf("%.1lf",n1+n2);
    break;
    case'-':
    printf("%.1lf",n1-n2);
    break;
    case'/':
    printf("%.1lf",n1/n2);
    break;
}
	return 0;
}
