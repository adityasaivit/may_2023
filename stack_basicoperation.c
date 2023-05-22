#include <stdio.h>
int t=-1;
int a[100];
int p;
void push(int n)
{

    t++;
    a[t]=n;
}
void pop()
{
    if(t==-1)
    {
        printf("underflow\n");
    }
    else
    {
     printf("%d",a[t]);
     t--;
    }
}

int main()
{
    int n1;
    while(1)
    {
        scanf("%d",&n1);
        if(n1==-1)
        {
            for(int i=t;i>=0;i--)
            {
                printf("%d",a[i]);
            }
            break;
        }
        if(n1==1)
        {
            int pu;
            scanf("%d",&pu);
            push(pu);
            printf("pushed\n");
        }
        if(n1==2)
        {
            pop();
        }
    }
}
