#include<stdio.h>
typedef struct manager{
	char name[20];
	int account1;
	int password1;
}manager;

manager managers[5]={{"����",20190101,208160},{"�",20190102,208161},{"�Ժ�",20190103,208162},{"����",20190104,208163},{"��˼",20190105,208164}};

typedef struct user{
	char name[20];
	long account2;
	int password2;
}user;

user users[5]={{"Ҷ�޻�",2021101207,102030},{"��ҿ��",2021101208,102031},{"�»�",2021101209,102032},{"���",2021101210,102033},{"л����",2021101211,10}};
//��ȡ�������ֵ�λ��
int getSum(int n){
	int count=0;
	if(n==0) count=0;
	else{
	while(n){
		n=n/10;
		count++;
	}
}
	return count;
}
//����λ���Ƿ�Ϊ8λ������Ա�˺ţ�
int matchSum8(int n){
int sum1=getSum(n);
if(sum1==8) return 1;
else return 0;
}
//����λ���Ƿ�Ϊ10λ���û��˺ţ�
int matchSum10(int n){
	int sum2=getSum(n);
	if(sum2==10) return 1;
	else return 0;
	
}
//����Ա�˺������Ƿ�������ȷ
int matchID1(int n1,int n2){
	int flag2=0;
	int k=0;
	for(int i=0;i<5;i++){
		if(n1==managers[i].account1){
		flag2=1;
		k=i;
	}
}
if(flag2==1&&n2==managers[k].password1) return 1;
else return 0;
}
//�û��˺������Ƿ���ȷ
int matchID2(int n1,int n2){
	int flag2=0;
	int k=0;
	for(int i=0;i<5;i++){
		if(n1==users[i].account2){
		flag2=1;
		k=i;
	}
}
if(flag2==1&&n2==users[k].password2) return 1;
else return 0;
}
//������
int main(){
int option1=0,option2=0,account1=0,password1=0;
printf("1�������Ա�ˣ�2�����û��ˣ���ѡ��1��2\n");
scanf("%d",&option1);
if(option1==1){
	printf("�������������Ա�˺ż����룬�Կո���Ϊ������س�������\n");
	scanf("%d %d",&account1,&password1);
	while(!matchSum8(account1)){
		printf("�˺�λ����������������\n");
		scanf("%d",&account1);
	}
	while(!matchID1(account1,password1)){
		printf("�˺Ż�������������������\n");
		scanf("%d %d",&account1,&password1);
	}
	printf("ͼ��ϵͳ��ӭ��\n");
	printf("����1-5�ֱ��Ӧ���¹���\n");
	printf("1:ͼ����Ϣ�ı༭\n2:���û����й���\n3:�������\n4:�޸ĸ�����Ϣ\n5:��ѯ�鼮��Ϣ\n");
	printf("����������\n");
	scanf("%d",&option2);
	while(option2<1||option2>5){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&option2);
	}
	/*switch(option2){
		case 1:editBookInfo();break;
		case 2:manageUser();break;
		case 3:brorgb();break;
		case 4:modSelfinfo();break;
		case 5:findBookinfo();break;
	}*/
}
else{
    int option3=0,account2=0,password2=0;
    printf("����֮ǰʹ�ù���ϵͳ��������1���е�¼����δʹ�ù�������2����ע��\n");
    scanf("%d",&option3);
    if(option3==1){
    		printf("�����������û��˺ż����룬�Կո���Ϊ������س�������\n");
	scanf("%d %d",&account2,&password2);
	while(!matchSum10(account2)){
		printf("�˺�λ����������������\n");
		scanf("%d",&account2);
	}
	while(!matchID2(account2,password2)){
		printf("�˺Ż�������������������\n");
		scanf("%d %d",&account2,&password2);
	}
	printf("ͼ��ϵͳ��ӭ��");

    	
	}
   
}

}

