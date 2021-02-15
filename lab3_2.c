#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pt[48]={0},i,j,k;
    for (i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        pt[j]=pt[j]+k;
    }
    return 0;
}
