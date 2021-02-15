#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pt[48]={0},i,j,k,max=0,most=0;
    for (i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        pt[j-1]=pt[j-1]+k;
    }
    for (i=0;i<48;i++)
    {
        if(max<pt[i])
        {
            max=pt[i];
            most=i;
        }
    }
    printf("%d %d",most+1,max);
    return 0;
}
