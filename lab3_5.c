#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k,tmp=2;//ดึงจากข้อ3
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
