#include <stdio.h>
int main()
{
  float distance,meter,feet,inches,centimeter;
  scanf("%f",&distance);
  meter=(distance*1000);
  feet=(distance*3280.84);
  inches=(distance*39370.1);
  centimeter=(distance*100000);
  printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm\n",meter,feet,inches,centimeter);
  	return 0;
}
