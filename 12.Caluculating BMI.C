#include <stdio.h>
#include<math.h>
int main()
{
float height,bmi;
int weight;
scanf("%d %f",&weight,&height);
bmi=(weight/(height*height));
printf("%.2f",bmi);
	return 0;
}
