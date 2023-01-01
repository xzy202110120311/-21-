#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//还书代码
int main()
{
    typedef struct book
{
char name[100];//书名
char author[100];//作者
int sum;//总量
int borrowed;//借出数量
int remainder;//剩余数量
int number;//编号
}book;
book books[10]={
{"《三国演义》","罗贯中",2,0,2,01},
{"《西游记》","吴承恩",2,0,2,02},
{"《水浒传》","施耐庵",2,0,2,03},
{"《红楼梦》","曹雪芹",2,0,2,04},
{"《数据结构练习题》","万书振",3,0,3,05},
{"《英语四级练习题》","万书振",3,0,3,06},
{"《大学物理实验》","万书振",2,0,2,07},
{"《高等数学习题册》","鲁迅",3,0,3,10},
{"《计算机概论》","鲁迅",2,0,2,11},
{"《大学生创新创业设计》","鲁迅",2,0,2,12}};


typedef struct{
    char name[20];
    int account;
    int password;
    int score;
    int bNum;
    char bBook1[50];
    char bBook2[50];
}manager;

typedef struct {
	char name[20];
	int account;
	int password;
	int score;
	int bNum;
	char bBook1[50];
    char bBook2[50];
}user;

manager managers[4]={
    {"张明",20190108,208160,100,1,"《三国演义》","无"},
    {"李华",20190102,208161,100,1,"《水浒传》","无"},
    {"赵红",20190103,208162,100,2,"《西游记》","《水浒传》"},
    {"王玲",20190100,208263,100,1,"《红楼梦》","无"}};

user users[100]={
	{"张华",2021101002,102030,100,1,"《大学物理实验》","无"},
	{"王明",2021101001,102031,100,1,"《高等数学习题册》","无"},
	{"郭傲",2021101003,102032,100,1,"《计算机概论》","无"},
	{"汪洋",2021101000,102033,100,1,"《大学生创新创业设计》","无"},
	{"罗方",2021101005,102034,100,2,"《西游记》","《水浒传》"},
	{"张三",2021101010,902833,100,0,"无","无"},
	{"李四",2021101018,782321,100,0,"无","无"},
	{"赵五",2021101020,289832,100,0,"无","无"},
	{"王六",2021101007,829382,100,0,"无","无"},
	{"汪伦",2021101039,228329,100,0,"无","无"}};

    int i,j,k;
    int n,m;
    int account;
    scanf("%d",&account);
    if(10000000<account && account<1000000000)
    {
         printf("下面是您已借的书:\n");
          for(i=0;i<4;i++)
    {
        if(account==managers[i].account)
        {
            n=managers[i].bNum;
            k=i;
        }
    }
    if(n>0)
    {
    printf("1.%s\n",managers[k].bBook1);
    printf("2.%s\n",managers[k].bBook2);
     printf("请输入序号选择您想还的书:\n");
    }
    else
    {
         printf("当前您没有已借的书。\n");
         return 0;
    }
    scanf("%d",&m);
    if(0<m && m<=n)
    {
        printf("您已还书。\n");
        managers[k].bNum=(managers[k].bNum)-1;
        printf("下面是您已借的书:\n");
        if(managers[k].bNum==0)
        {
            printf("当前您没有已借的书。\n");
            return 0;
        }
        else
        {
        if(m==1)
        {
        printf("1.%s\n",managers[k].bBook2);
        }
        if(m==2)
        {
        printf("1.%s\n",managers[k].bBook1);
        }
        }
    }

    else
    {
        printf("错误，请重新输入。");
    }
    }


if(account>1000000000)
{
     printf("下面是您已借的书:\n");
    for(j=0;j<10;j++)
    {
         if(account==users[j].account)
        {
            n=users[j].bNum;
            k=j;
        }
    }
    if(n>0)
    {
    printf("1.%s\n",users[k].bBook1);
    printf("2.%s\n",users[k].bBook2);
    printf("请输入序号选择您想还的书:\n");
    }
    else
    {
         printf("当前您没有已借的书。\n");
         return 0;
    }
scanf("%d",&m);
    if(0<m && m<=n)
    {
        printf("您已还书。\n");
        users[k].bNum=(users[k].bNum)-1;
        printf("下面是您已借的书。\n");
        if(users[k].bNum==0)
        {
            printf("当前您没有已借的书。\n");
            return 0;
        }
        else
        {
        if(m==1)
        {
    printf("1.%s\n",users[k].bBook2);
        }
        if(m==2)
        {
    printf("1.%s\n",users[k].bBook1);
        }
        }
    }

    else
    {
        printf("错误，请重新输入。");
    }
}

    return 0;
}