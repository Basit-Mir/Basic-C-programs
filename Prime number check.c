#include <stdio.h>

int main()
{

    int x;
    int p;
    printf("Enter the natural number you want to test:\n");
    scanf("%x",&x);
    if(x==2)
    {
        printf("The number is Prime\n");
    }
    else
    {
    for(int i=2; i<x; i++)
    {
        p=x%i;
        if(p==0)
        break;
    }
    if(p==0)
    {
    printf("The number is NOT Prime\n");
    }
    else{
    printf("The number is Prime\n");
    }
    }
    return 0;
}