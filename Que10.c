#include<stdio.h>
int main()
{
    int i,x,num=5;
    for(i=1;i<=10;i++)
    {
        x=num*i;
        printf("%d*%d = %d\n",num,i,x);
    }
    return 0;
}
