#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,f;

     scanf("%d",&x);

    if (x==1)
        return (1);
    else
        f=f*main(x-1);
        printf("%d",f);
    return (0);

    return 0;
}
