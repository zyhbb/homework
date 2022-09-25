
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if(a==b&&b==c)
    {
        printf("三个值都相等");

    }
    else if(a==b||c==b||a==c)
    {
        printf("仅有两个值相等");

    }
    else
    {
        printf("都不相等");
    }
    return 0;
}
