#include"���ֺ���.h"
#include<Windows.h>
int main(){
HeapSortU();
int option1=0,option2=0,account1=0,password1=0;
printf("1�������Ա�ˣ�2�����û��ˣ���ѡ��1��2\n");
scanf("%d",&option1);
if(option1==1){//����Ա
	printf("�������������Ա�˺ż����룬�Կո���Ϊ������س�������\n");
	scanf("%d %d",&account1,&password1);//����Ա��¼
	while(!matchID1(account1,password1)){
		printf("�˺Ż�������������������\n");
		scanf("%d %d",&account1,&password1);
	}
	printf("ͼ�����ϵͳ��ӭ��\n");//ѡ����
	printf("����1-5�ֱ��Ӧ���¹���\n");//4�����޸ĺͲ鿴��5�������ӺͲ鿴��1�������Һ��޸�
	printf("1:�û���Ϣ����\n2:����\n3:����\n4:������Ϣ����\n5:�鼮��Ϣ����\n");
	printf("����������\n");
	scanf("%d",&option2);
	while(option2<1||option2>6){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&option2);
	}
	switch(option2){
		case 1:manageUser();break;
		//case 2:borrowBook();break;
		//case 3:returnBook();break;
		case 4:MmanSelfinfo();break;
		case 5:manBookinfo();break;
	}
}
else{//�û�
	 char s[20];
     int option3=0,option4=0,a=0,b=0;
    printf("����֮ǰʹ�ù���ϵͳ��������1���е�¼����δʹ�ù�������2����ע��\n");
    scanf("%d",&option3);
    if(option3==1){//�û���¼
    printf("�����������û��˺ż����룬�Կո���Ϊ������س�������\n");
	scanf("%d %d",&a,&b);
	while(!matchID2(a,b)){
		printf("�˺Ż�������������������\n");
		scanf("%d %d",&a,&b);
	}
	}
	else{//�û�ע��
		printf("��������������.10λѧ��,���֤�ź�6λ�ֱ���Ϊ�˺ź�����,�ո�������\n");
		scanf("%s %d %d",&s,&a,&b);
		while(!matchSum10(a)){
		printf("�˺�λ����������������\n");
		scanf("%d",&a);
		}
		while(!matchSum6(b)){
		printf("����λ����������������\n");
		scanf("%d",&b);
		}
		addInfo2(s,a,b);
		HeapSortU();
		printf("ע��ɹ�\n�����������˺������¼��ϵͳ\n");
		scanf("%d %d",&a,&b);
		while(!matchID2(a,b)){
		printf("�˺Ż�������������������\n");
		scanf("%d %d",&a,&b);
	}

	}//����ѡ��
	printf("ͼ��ϵͳ��ӭ��\n");
	printf("����������1-4��ѡ���Ӧ����:\n1:����\n2:����\n3:��ѯ�鼮��Ϣ\n4:���������Ϣ\n");
	scanf("%d",&option4);
	while(option4<1||option4>4){
	printf("�������ֲ��ڷ�Χ�ڣ�����������");
	scanf("%d",&option4);
	}
	switch(option4){
	//case 1:borrowBook();break;
	//case 2:returnBook();break;
	case 3:findBookinfo();break;
	case 4:UmanSelfinfo();break;
	}
}
system("pause");//��ֹ����
}