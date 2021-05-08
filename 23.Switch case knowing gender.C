#include <stdio.h>
int main()
{
char gender;
scanf("%c",&gender);
switch(gender)
    {   case 'M':
        printf("Male");
        break;
        case 'F':
        printf("Female");
        break;
        case 'm':
        printf("Male");
        break;
        case 'f':
        printf("Female");
        break;
        default:
        printf("Unspecified Gender");
    }
	return 0;
}
