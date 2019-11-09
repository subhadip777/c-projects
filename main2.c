#include <stdio.h>
#include <stdlib.h>
int rec(int);
int main()
{
    int a;
    float c;
    a=1;
    while(a<=6)
    {
        c=(a/rec(a))+((a+1)/rec(a+1));
        a++;

    }
 printf("the value of c=%f\n",c);

    return 0;
}
int rec(int x)
{
    int f;
    if (x==1)
        return(1);
    else
        f=x*rec(x-1);




    return(f);
}
