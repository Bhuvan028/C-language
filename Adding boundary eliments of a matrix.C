#include <stdio.h>
int main()
{
int r,c;
int sum=0;
scanf("%d%d",&r,&c);
int i,j;
int mat[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   {
       if(i==0||j==0||i==r-1||j==c-1)
       {
       sum=sum+mat[i][j];
       }
       else
       printf(" ");
   }
printf("%d",sum);
	return 0;
}
