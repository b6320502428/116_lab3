#include <stdio.h>
#include <string.h>
int main()
{
    int x,p1=0,p2=0,p=0,i=2,j=2,tmp,r1=0,r2=0,k;
    char s[11]="";
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
        sprintf(s,"%d",x);
        tmp=strlen(s);
        if(tmp==1)
        {
            p=x;
        }
        else
        {
            p=x;
            for(i=0; i<tmp/2; i++)
            {
                if(s[i]!=s[tmp-1-i])
                {
                    p=0;
                }
            }
        }
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
                strcpy(s,"");
                sprintf(s,"%d",i);
                tmp=strlen(s);
                if(tmp==1)
                {
                    p1=i;
                }
                else
                {
                    p1=i;
                    for(k=0; k<tmp/2; k++)
                    {
                        if(s[k]!=s[tmp-1-k])
                        {
                            p1=0;
                        }
                    }
                }
            }
            if(p1!=0)
            {
                break;
            }
            r1++;
        }
        j=2;
        for(i=x+1; 1; i++)
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
                strcpy(s,"");
                sprintf(s,"%d",i);
                tmp=strlen(s);
                if(tmp==1)
                {
                    p2=i;
                }
                else
                {
                    p2=i;
                    for(k=0; k<tmp/2; k++)
                    {
                        if(s[k]!=s[tmp-1-k])
                        {
                            p2=0;
                        }
                    }
                }
            }
            if(p2!=0)
            {
                break;
            }
            r2++;
        }
        if(r2<r1)
        {
            p=p2;
        }
        else
        {
            p=p1;
        }
    }
    printf("%d",p);
    return 0;
}
