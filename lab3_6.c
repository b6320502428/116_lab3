#include <stdio.h>
#include <string.h>
int main()
{
    int x,p1=0,p2=0,p=0,i=2,j=2,tmp,r1=0,r2=0;
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
        else if(tmp%2==0)
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
                sprintf(s,"%d",x);
                tmp=strlen(s);
                if(tmp==1)
                {
                    p=x;
                }
                else if(tmp%2==0)
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
            if(p1!=0)
            {
                break;
            }
            r1++;
        }
        j=2;
        for(i=x+1; i; i++)
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
                p2=i;
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
