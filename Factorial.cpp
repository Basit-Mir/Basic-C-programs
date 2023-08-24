#include <stdio.h>
int main ()
{
    int i,m,a;
    scanf("%d",&m);
    a=1;
    for(i=1; i<m+1; i++)
    {
    a=a*i;
    }
    printf("The factorial of %d is %d :\n",m,a);
    return 0;
}