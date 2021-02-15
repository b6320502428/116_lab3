#include <stdio.h>
int main()
{
    int x,p1=0,p2=0,p=0,i=2,j=2,tmp,r1=0,r2=0;
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
                j++;
            }
            if(i==j)
            {
                p1=i;
            }
            if(p1!=0)
            {
                break;
            }
            r1++;
        }
    }
    printf("%d",p);
    return 0;
}
