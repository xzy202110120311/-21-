#include"��Ϣ������Ͷ��ֲ���.h"
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
//�жϳ�ʼ���������Ƿ�Ϊ6λ
int matchSum6(int n){
	int sum2=getSum(n);
	if(sum2==6) return 1;
	else return 0;
}

//����Ա�˺������Ƿ�������ȷ
int matchID1(int n1,int n2){
	int sum=0;
	while(managers[sum].account1!=0){
		sum++;
	}
	int flag1=0;
	int k=0;
	for(int i=0;i<sum;i++){
		if(n1==managers[i].account1){
		flag1=1;
		k=i;
	}
}
if(flag1==1&&n2==managers[k].password1) return 1;
else return 0;
}
//�û��˺������Ƿ���ȷ
int matchID2(int n1,int n2){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int k=Bsearch(users,n1,sum2);
if(k!=-1&&n2==users[k].password2) return 1;
else return 0;
}
//�û�ע��
void addInfo2(char s[20],int n1,int n2){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	if(sum2<100){
	strcpy(users[sum2].name2,s);
	users[sum2].account2=n1;
	users[sum2].password2=n2;
	users[sum2].score2=100;
	users[sum2].bNum2=0;
	strcpy(users[sum2].bBook2,"��");
	}
	else{
		printf("�û���Ϣ�洢�ռ䲻��");
	}
}
//����Աע��
void addInfo1(char s[20],int n1,int n2){
	int sum2=0;
	while(managers[sum2].account1!=0){
		sum2++;
	}
	if(sum2<10){
	strcpy(managers[sum2].name1,s);
	managers[sum2].account1=n1;
	managers[sum2].password1=n2;
	managers[sum2].score1=100;
	managers[sum2].bNum1=0;
	strcpy(managers[sum2].bBook1,"��");
	}
	else{
		printf("����Ա��Ϣ�洢�ռ䲻��");
	}
}
//�û���ѯ�Լ�����Ϣ�����˺ţ�
void Ufind(){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int n=0;
	printf("�������˺�\n");
	scanf("%d",&n);
	int k=Bsearch(users,n,sum2);
	if(k==-1) printf("������ʹ���߲�����");
	else{
		printf("���� �˺� ���÷� �ѽ������� ������\n");
	 printf("%s %d %d %d %s\n",users[k].name2,users[k].account2,users[k].score2,
		 users[k].bNum2,users[k].bBook2);
}
}
//����Ա��ѯ�Լ���Ϣ
void Mfind(){
	int n=0;
	printf("�������˺�");
	scanf("%d",&n);
	int sum2=0;
	while(managers[sum2].account1!=0){
		sum2++;
	}
	int k=-1;
	for(int i=0;i<sum2;i++){
		if(n==managers[i].account1) k=i;
}
	if(k==-1) printf("������ʹ���߲�����");
	else {
		printf("���� �˺� ���÷� �ѽ������� ������\n");
		printf("%s %d %d %d %s\n",managers[k].name1,managers[k].account1,
			managers[k].score1,managers[k].bNum1,managers[k].bBook1);
}
}


//����Ա��ȷ�����û���Ϣ��������)
void findUN(){
	int k=-1,flag=0;
	char s[20];
	printf("�����������ҵ��û�����");
	scanf("%s",&s);
	int i=0;
	while(users[i].account2!=0){
		k=strcmp(s,users[i].name2);
		if(k==0){
			flag=1;
			printf("���� �˺� ���÷� �ѽ������� ������\n");
		printf("%s %d %d %d %s\n",users[i].name2,users[i].account2,users[i].score2,
			users[i].bNum2,users[i].bBook2);
	    i++;
	}
	if(flag==0) printf("�������û�������");
}
}
//����Ա��ȷ�����û���Ϣ�����˺�)
void findUA(){
	int n=0;
	printf("�����������ҵ��û��˻�");
	scanf("%d",&n);
		int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int k=Bsearch(users,n,sum2);
	if(k==-1) printf("�������û�������");
	else{
		printf("���� �˺� ���÷� �ѽ������� ������\n");
		printf("%s %d %d %d %s\n",users[k].name2,users[k].account2,users[k].score2,
			users[k].bNum2,users[k].bBook2);
}
}
//����Ա���������û���Ϣ
void findUall(){
		int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	printf("���� �˺� ���÷� �ѽ������� ������\n");
	for(int i=0;i<sum2;i++){
	printf("%s %d %d %d %s\n",users[i].name2,users[i].account2,users[i].score2,
		users[i].bNum2,users[i].bBook2);
	}
}
//����Ա�����û���Ϣ����ʵ��
void manageUser(){
	int n=0;
	printf("����1�����û���Ϣ������2�޸��û���Ϣ������3�����û���Ϣ\n");
	scanf("%d",&n);
if(n==1){//�����û���Ϣ
	int n1=0;
	printf("����1���������û���Ϣ������2�����������û���Ϣ������3���˺Ų����û���Ϣ\n");
	scanf("%d",&n1);
	while(n1<1||n1>3){
		printf("�������ֲ��ڷ�Χ�ڣ�����������");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:findUall();break;
	case 2:findUN();break;
	case 3:findUA();break;
	}
}
//if(n==2){�޸�}
if(n==3){
	char s[20];
	int a=0,b=0;
	printf("��������Ҫ���ӵ��û���Ϣ:������10λѧ�ţ���ʼ���루���֤��6λ��\n");
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
		printf("ע��ɹ�\n");
}
}

//����Ա������Ϣ����
void MmanSelfinfo(){
	int n1=0;
	printf("1�����ѯ������Ϣ��2�����޸ĸ�����Ϣ������������");
	scanf("%d",&n1);
	while(n1<1||n1>2){
		printf("�������ֲ��ڷ�Χ�ڣ�����������");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:Mfind();break;//����Ա���Ҹ�����Ϣ
	//case 2:�޸�;break;
	}
}
//�û�������Ϣ����
void UmanSelfinfo(){
	int n1=0;
	printf("1�����ѯ������Ϣ��2�����޸ĸ�����Ϣ������������\n");
	scanf("%d",&n1);
	while(n1<1||n1>2){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:Ufind();break;//�û����Ҹ�����Ϣ
	//case 2:�޸�;break;
	}
}
//�˵��в�ѯ�鼮��Ϣ�ĺ�������������
void findB_Na(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[40];
	int k=-1,flag=0;
	printf("������Ҫ���ҵ�����������������\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].name);
		if(k==0){
			flag=1;
			printf("���� ���� ��� ���� ������� ʣ������ ���\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("�����鼮������");
}
//������
void findB_Au(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[10];
	int k=-1,flag=0;
	printf("������Ҫ���ҵ��������\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].author);
		if(k==0){
			flag=1;
			printf("���� ���� ��� ���� ������� ʣ������ ���\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("�����鼮������");
}
//�����
void findB_Ty(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[20];
	int k=-1,flag=0;
	printf("������Ҫ���ҵ�����������,�����,�ߵ���ѧ,��ѧ����,��ҵ,Ӣ��)\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].type);
		if(k==0){
			flag=1;
			printf("���� ���� ��� ���� ������� ʣ������ ���\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("�����鼮������");
}
//�����
void findB_Nu(){
	int n;
	printf("�������鱾���\n");
	scanf("%d",&n);
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	int k=Bsearch_book(books,n,sum2);
	if(k==-1) printf("�����鼮������");
	else{
		printf("���� ���� ��� ���� ������� ʣ������ ���\n");
		printf("%s %s %s %d %d %d %d\n",books[k].name,books[k].author,books[k].type,
			books[k].sum,books[k].borrowed,books[k].remainder,books[k].number);

	}
}
//����Ա�����鼮����ʵ��
void manBookinfo(){
	int n=0,n1=0;
	printf("������������ѡ���ܣ�1:�����鼮,2:�����鼮\n");
	scanf("%d",&n);
	while(n<1||n>2){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&n);
	}
	//if(n==1) �����鼮����
	if(n==2){
		printf("������������ѡ��ͬ���ҷ�ʽ��1:����,2:����,3:���,4:���\n");
	scanf("%d",&n1);
	while(n1<1||n1>4){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:findB_Na();break;
	case 2:findB_Au();break;
	case 3:findB_Ty();break;
	case 4:findB_Nu();break;
	}
	}
}
//�û���ѯ�鼮��Ϣ����ʵ��
void findBookinfo(){
	int n1=0;
	printf("������������ѡ��ͬ���ҷ�ʽ��1:����,2:����,3:���,4:���\n");
	scanf("%d",&n1);
	while(n1<1||n1>4){
		printf("�������ֲ��ڷ�Χ�ڣ�����������\n");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:findB_Na();break;
	case 2:findB_Au();break;
	case 3:findB_Ty();break;
	case 4:findB_Nu();break;
	}
}