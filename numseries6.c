//1,4,9,16,25,36,......n
#include<stdio.h>
int main()
{
    int limit,x;
    scanf("%d,",&limit);
    for(x=1;x<=limit;x++)
    {
        if(x%3!=0)
        printf("%d,",x*x);
    else
    printf("%d,",(x*x)*1);
    }
    return 0;
}
   