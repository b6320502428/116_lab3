#include <stdio.h>
int main()
{
    int k,tmp=2;
    scanf("%d",&k);
    while(k>1)
    {
        while(k%tmp!=0)
        {
            tmp++;
        }
        k=k/tmp;
        printf("%d\n",tmp);
        tmp=2;
    }
    printf("0");
    return 0;
}
