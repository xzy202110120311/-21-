#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�������
int main()
{
    typedef struct book
{
char name[100];//����
char author[100];//����
int sum;//����
int borrowed;//�������
int remainder;//ʣ������
int number;//���
}book;
book books[10]={
{"���������塷","�޹���",2,0,2,01},
{"�����μǡ�","��ж�",2,0,2,02},
{"��ˮ䰴���","ʩ����",2,0,2,03},
{"����¥�Ρ�","��ѩ��",2,0,2,04},
{"�����ݽṹ��ϰ�⡷","������",3,0,3,05},
{"��Ӣ���ļ���ϰ�⡷","������",3,0,3,06},
{"����ѧ����ʵ�顷","������",2,0,2,07},
{"���ߵ���ѧϰ��ᡷ","³Ѹ",3,0,3,10},
{"����������ۡ�","³Ѹ",2,0,2,11},
{"����ѧ�����´�ҵ��ơ�","³Ѹ",2,0,2,12}};


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
    {"����",20190108,208160,100,1,"���������塷","��"},
    {"�",20190102,208161,100,1,"��ˮ䰴���","��"},
    {"�Ժ�",20190103,208162,100,2,"�����μǡ�","��ˮ䰴���"},
    {"����",20190100,208263,100,1,"����¥�Ρ�","��"}};

user users[100]={
	{"�Ż�",2021101002,102030,100,1,"����ѧ����ʵ�顷","��"},
	{"����",2021101001,102031,100,1,"���ߵ���ѧϰ��ᡷ","��"},
	{"����",2021101003,102032,100,1,"����������ۡ�","��"},
	{"����",2021101000,102033,100,1,"����ѧ�����´�ҵ��ơ�","��"},
	{"�޷�",2021101005,102034,100,2,"�����μǡ�","��ˮ䰴���"},
	{"����",2021101010,902833,100,0,"��","��"},
	{"����",2021101018,782321,100,0,"��","��"},
	{"����",2021101020,289832,100,0,"��","��"},
	{"����",2021101007,829382,100,0,"��","��"},
	{"����",2021101039,228329,100,0,"��","��"}};

    int i,j,k;
    int n,m;
    int account;
    scanf("%d",&account);
    if(10000000<account && account<1000000000)
    {
         printf("���������ѽ����:\n");
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
     printf("���������ѡ�����뻹����:\n");
    }
    else
    {
         printf("��ǰ��û���ѽ���顣\n");
         return 0;
    }
    scanf("%d",&m);
    if(0<m && m<=n)
    {
        printf("���ѻ��顣\n");
        managers[k].bNum=(managers[k].bNum)-1;
        printf("���������ѽ����:\n");
        if(managers[k].bNum==0)
        {
            printf("��ǰ��û���ѽ���顣\n");
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
        printf("�������������롣");
    }
    }


if(account>1000000000)
{
     printf("���������ѽ����:\n");
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
    printf("���������ѡ�����뻹����:\n");
    }
    else
    {
         printf("��ǰ��û���ѽ���顣\n");
         return 0;
    }
scanf("%d",&m);
    if(0<m && m<=n)
    {
        printf("���ѻ��顣\n");
        users[k].bNum=(users[k].bNum)-1;
        printf("���������ѽ���顣\n");
        if(users[k].bNum==0)
        {
            printf("��ǰ��û���ѽ���顣\n");
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
        printf("�������������롣");
    }
}

    return 0;
}