#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ԤԼ����
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
    {"����",20190108,208160,100,1,"���������塷","��"},
    {"�",20190102,208161,100,1,"��ˮ䰴���","��"},
    {"�Ժ�",20190103,208162,100,2,"�����μǡ�","��ˮ䰴���"},
    {"����",20190100,208263,100,1,"����¥�Ρ�","��"}};

user users[100]={
	{"�Ż�",2021101002,102030,100,1,"����ѧ����ʵ�顷","��"},
	{"����",2021101001,102031,100,1,"���ߵ���ѧϰ��ᡷ","��"},
	{"����",2021101003,102032,100,1,"����������ۡ�","��"},
	{"����",2021101000,102033,100,1,"����ѧ�����´�ҵ��ơ�","��"},
	{"�޷�",2021101005,102034,100,2,"����¥�Ρ�","�����μǡ�"},
	{"����",2021101010,902833,100,0,"��","��"},
	{"����",2021101018,782321,100,0,"��","��"},
	{"����",2021101020,289832,100,0,"��","��"},
	{"����",2021101007,829382,100,0,"��","��"},
	{"����",2021101039,228329,100,0,"��","��"}};

    typedef struct book
{
char name[100];//����
char author[100];//����
int sum;//����
int borrowed;//�������
int remainder;//ʣ������
int number;//���
int reserve;//ԤԼ���,0��ʾδ��ԤԼ��1��ʾ�ѱ�ԤԼ
}book;
book books[10]={
{"���������塷","�޹���",2,1,1,1,0},
{"�����μǡ�","��ж�",2,2,0,2,1},
{"��ˮ䰴���","ʩ����",2,2,0,3,0},
{"����¥�Ρ�","��ѩ��",2,2,0,4,0},
{"�����ݽṹ��ϰ�⡷","������",3,0,3,5,0},
{"��Ӣ���ļ���ϰ�⡷","������",3,0,3,6,0},
{"����ѧ����ʵ�顷","������",2,1,1,7,0},
{"���ߵ���ѧϰ��ᡷ","³Ѹ",3,1,2,8,0},
{"����������ۡ�","³Ѹ",2,1,1,9,0},
{"����ѧ�����´�ҵ��ơ�","³Ѹ",2,1,1,10,0}};

    int i,j=1,k;
    int n,m,account;
    printf("��ǰ��ʣ����鼮��:\n");
    for(i=0;i<10;i++)
    {
        if(books[i].remainder==0)
        {
            printf("%d.%s\n",j,books[i].name);
            j++;
        }
    }
    printf("\n");
    printf("�����������˺�:\n");
    scanf("%d",&account);
    if(account>1000000000)
    {
        for(i=0;i<10;i++)
{
    if(account==users[i].account)
    {
        k=i;
    }
}
        printf("����������ԤԼ����ĺ��롣\n");
        scanf("%d",&n);
        if(n<j && n>j)
        {
            printf("�������������롣\n");
        }
        else
        {
            if(users[k].score>90 && users[k].bNum<2 && books[n].reserve==0)
            {
                printf("ԤԼ�ɹ�����һλ���߻�����Զ��������ġ�\n");
                books[n].reserve=1;
                return 1;
            }
            else
            {
                printf("ԤԼʧ�ܡ�");
            }
        }
    }



    if(account<1000000000)
    {
           for(i=0;i<4;i++)
    {
        if(account==managers[i].account)
        {
            n=managers[i].bNum;
            k=i;
        }
    }
         printf("����������ԤԼ����ĺ���:\n");
        scanf("%d",&n);
         if(n<j && n>j)
        {
            printf("�������������롣\n");
        }
        else
        {
            if(managers[k].score>90 && managers[k].bNum<2 && books[n].reserve==0)
            {
                printf("ԤԼ�ɹ�����һλ���߻�����Զ��������ġ�\n");
                books[n].reserve=1;
                return 1;
            }
            else
            {
                printf("ԤԼʧ�ܡ�\n");
            }
        }
    }
    return 0;
}