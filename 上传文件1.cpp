#include <stdio.h>
#define  PI  3.14159

int  main()  
{   int n,m;
    int i,j;
    scanf("%d",&n);
    if(n<0)
    {
        printf("错误，n不能小于0");
    }
    else
    {
    printf("请输入对应号码选择你想借的书：\n");
    for(i=0;i<n;i++)
    {
    printf("%d.《书名%d号》。\n",(i+1),(i+1));
    }
    }
    scanf("%d",&m);
    if(m<=0)
    {
        printf("错误，m不能小于1");
    }
    else if(m>n)
    {
        printf("错误，m不能大于n");
    }
    else
    {
        printf("您已选择%d.《书名%d号》。",m,m);
    }
    return 0;
}