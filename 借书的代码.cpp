#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//借书代码
int main()
{
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
	{"罗方",2021101005,102034,100,2,"《红楼梦》","《西游记》"},
	{"张三",2021101010,902833,100,0,"无","无"},
	{"李四",2021101018,782321,100,0,"无","无"},
	{"赵五",2021101020,289832,100,0,"无","无"},
	{"王六",2021101007,829382,100,0,"无","无"},
	{"汪伦",2021101039,228329,100,0,"无","无"}};

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
{"《三国演义》","罗贯中",2,1,1,1},
{"《西游记》","吴承恩",2,2,0,2},
{"《水浒传》","施耐庵",2,2,0,3},
{"《红楼梦》","曹雪芹",2,2,0,4},
{"《数据结构练习题》","万书振",3,0,3,5},
{"《英语四级练习题》","万书振",3,0,3,6},
{"《大学物理实验》","万书振",2,1,1,7},
{"《高等数学习题册》","鲁迅",3,1,2,8},
{"《计算机概论》","鲁迅",2,1,1,9},
{"《大学生创新创业设计》","鲁迅",2,1,1,10}};

int i,j,k;
int n,m;
int account;
printf("请输入您的账号:\n");
scanf("%d",&account);
for(i=0;i<10;i++)
{
    if(account==users[i].account)
    {
        k=i;
    }
}
n=10;
for(i=0;i<n;i++)
{
printf("%d.%s,剩余%d本。\n",(i+1),books[i].name,books[i].remainder);
}
if(account>1000000000)
{
    printf("请输入序号选择你想借的书。\n");
    scanf("%d",&m);
    if(m<=0 && m>10)
    {
        printf("错误，请重新输入\n");
    }
    else
    {
        printf("您选择了%s\n",books[m-1].name);
        if(books[m-1].remainder>0 && users[k].score>90 && users[k].bNum<2)
        {
            printf("借书成功！\n");
            users[k].bNum=(users[k].bNum)+1;
            books[m-1].borrowed=(books[m-1].borrowed)+1;
            books[m-1].remainder=(books[m-1].remainder)-1;
        }
        else
        {
            printf("借书失败。\n");
        }
    }
            }

if(account<1000000000)
{
    printf("请输入序号选择你想借的书。\n");
    scanf("%d",&m);
    if(m<=0 && m>10)
    {
        printf("错误，请重新输入\n");
    }
    else
    {
        printf("您选择了%s\n",books[m-1].name);
        if(books[m-1].remainder>0 && managers[k].score>90 && managers[k].bNum<2)
        {
            printf("借书成功！\n");
            managers[k].bNum=(managers[k].bNum)+1;
            books[m-1].borrowed=(books[m-1].borrowed)+1;
            books[m-1].remainder=(books[m-1].remainder)-1;
        }
        else
        {
            printf("借书失败。\n");
        }
    }
            }

    return 0;
}