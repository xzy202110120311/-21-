#include <stdio.h>
#define  PI  3.14159

int  main()  
{   int n,m;
    int i,j;
    scanf("%d",&n);
    if(n<0)
    {
        printf("����n����С��0");
    }
    else
    {
    printf("�������Ӧ����ѡ���������飺\n");
    for(i=0;i<n;i++)
    {
    printf("%d.������%d�š���\n",(i+1),(i+1));
    }
    }
    scanf("%d",&m);
    if(m<=0)
    {
        printf("����m����С��1");
    }
    else if(m>n)
    {
        printf("����m���ܴ���n");
    }
    else
    {
        printf("����ѡ��%d.������%d�š���",m,m);
    }
    return 0;
}