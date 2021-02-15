#include <stdio.h>
int main()
{
    int x,p1=0,p2=0,p=0,i=2,j=2,tmp;
    scanf("%d",&x);
    while(i<=x)
    {
        tmp=x%i;
        if(tmp==0)
        {
            break;
        }
        i++;
    }
    if(x==i)
    {
        p=x;
    }
    i=2;
    int xtmp1=x,xtmp2=x;
    if(p==0)
    {

    }
    printf("%d",p);
    return 0;
}
