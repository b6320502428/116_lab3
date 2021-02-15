#include <stdio.h>
int main()
{
    int n,tmp=2,num[3],i;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        while(n%tmp!=0)
        {
            tmp++;
        }
        n=n/tmp;
        num[i]=tmp;
        tmp=2;
    }
    return 0;
}
