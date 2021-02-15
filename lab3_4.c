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
    if(p==0)
    {
        for(i=x-1; i>0; i--)
        {
            while(j<=i)
            {
                tmp=i%j;
                if(tmp==0)
                {
                    break;
                }
                i++;
            }
            if(i==j)
            {
                p1=i;
            }
            if(p1!=0)
            {
                break;
            }
        }
    }
    printf("%d",p);
    return 0;
}
