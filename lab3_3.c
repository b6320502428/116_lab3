#include <stdio.h>
int main()
{
    int k,tmp=2;
    scanf("%d",&k);
    while(k>0)
    {
        while(k%tmp!=0)
        {
            tmp++;
        }

        tmp=2;
    }
    return 0;
}
