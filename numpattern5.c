/*c pgm to generate numeric pattern
5 4 3 2 1
5 4 3 2 
5 4 3
5 4 
5*/ 
#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("%d ",n-j);
        }
        printf("\n");
       
    }
}