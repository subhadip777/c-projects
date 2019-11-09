#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
            {
                d=a*100+b*10+c;
                printf("%d\n",d);
            }
        }
    }








    return 0;
}
