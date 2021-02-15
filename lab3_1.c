#include <stdio.h>
int main()
{
    int score[5][4],i,j,st[5]={0,0,0,0,0},max=0,win=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&score[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            st[i]=st[i]+score[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        if(max<st[i])
        {
            max=st[i];
            win=i;
        }
    }
    return 0;
}
