#include <stdio.h>
int main()
{
    int n,tmp=2,num[3],i,ans;
    scanf("%d",&n);
    int a=n;
    for(i=0; i<3; i++)
    {
        while(n%tmp!=0)
        {
            tmp++;
        }
        n=n/tmp;
        num[i]=tmp;
        tmp=2;
    }
    if(num[0]!=num[1]&&num[0]!=num[2]&&num[1]!=num[2])
    {
        printf("%d is a Lucky Number.",a);
    }
    return 0;
}
