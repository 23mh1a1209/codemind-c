#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
           if(j>=N+1-i)
           printf("%d ",N+1-i);
           else
            printf(" ");
        }
        printf("
");
    }
   return 0; 
}