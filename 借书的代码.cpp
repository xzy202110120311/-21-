#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�������
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
}book;
book books[10]={
{"���������塷","�޹���",2,1,1,1},
{"�����μǡ�","��ж�",2,2,0,2},
{"��ˮ䰴���","ʩ����",2,2,0,3},
{"����¥�Ρ�","��ѩ��",2,2,0,4},
{"�����ݽṹ��ϰ�⡷","������",3,0,3,5},
{"��Ӣ���ļ���ϰ�⡷","������",3,0,3,6},
{"����ѧ����ʵ�顷","������",2,1,1,7},
{"���ߵ���ѧϰ��ᡷ","³Ѹ",3,1,2,8},
{"����������ۡ�","³Ѹ",2,1,1,9},
{"����ѧ�����´�ҵ��ơ�","³Ѹ",2,1,1,10}};

int i,j,k;
int n,m;
int account;
printf("�����������˺�:\n");
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
printf("%d.%s,ʣ��%d����\n",(i+1),books[i].name,books[i].remainder);
}
if(account>1000000000)
{
    printf("���������ѡ���������顣\n");
    scanf("%d",&m);
    if(m<=0 && m>10)
    {
        printf("��������������\n");
    }
    else
    {
        printf("��ѡ����%s\n",books[m-1].name);
        if(books[m-1].remainder>0 && users[k].score>90 && users[k].bNum<2)
        {
            printf("����ɹ���\n");
            users[k].bNum=(users[k].bNum)+1;
            books[m-1].borrowed=(books[m-1].borrowed)+1;
            books[m-1].remainder=(books[m-1].remainder)-1;
        }
        else
        {
            printf("����ʧ�ܡ�\n");
        }
    }
            }

if(account<1000000000)
{
    printf("���������ѡ���������顣\n");
    scanf("%d",&m);
    if(m<=0 && m>10)
    {
        printf("��������������\n");
    }
    else
    {
        printf("��ѡ����%s\n",books[m-1].name);
        if(books[m-1].remainder>0 && managers[k].score>90 && managers[k].bNum<2)
        {
            printf("����ɹ���\n");
            managers[k].bNum=(managers[k].bNum)+1;
            books[m-1].borrowed=(books[m-1].borrowed)+1;
            books[m-1].remainder=(books[m-1].remainder)-1;
        }
        else
        {
            printf("����ʧ�ܡ�\n");
        }
    }
            }

    return 0;
}