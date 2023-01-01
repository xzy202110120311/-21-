#include"信息堆排序和二分查找.h"
//获取输入数字的位数
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
//数字位数是否为8位（管理员账号）
int matchSum8(int n){
int sum1=getSum(n);
if(sum1==8) return 1;
else return 0;
}
//数字位数是否为10位（用户账号）
int matchSum10(int n){
	int sum2=getSum(n);
	if(sum2==10) return 1;
	else return 0;
	
}
//判断初始密码输入是否为6位
int matchSum6(int n){
	int sum2=getSum(n);
	if(sum2==6) return 1;
	else return 0;
}

//管理员账号密码是否输入正确
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
//用户账号密码是否正确
int matchID2(int n1,int n2){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int k=Bsearch(users,n1,sum2);
if(k!=-1&&n2==users[k].password2) return 1;
else return 0;
}
//用户注册
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
	strcpy(users[sum2].bBook2,"无");
	}
	else{
		printf("用户信息存储空间不够");
	}
}
//管理员注册
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
	strcpy(managers[sum2].bBook1,"无");
	}
	else{
		printf("管理员信息存储空间不够");
	}
}
//用户查询自己的信息（按账号）
void Ufind(){
	int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int n=0;
	printf("请输入账号\n");
	scanf("%d",&n);
	int k=Bsearch(users,n,sum2);
	if(k==-1) printf("所查找使用者不存在");
	else{
		printf("姓名 账号 信用分 已借书数量 借书名\n");
	 printf("%s %d %d %d %s\n",users[k].name2,users[k].account2,users[k].score2,
		 users[k].bNum2,users[k].bBook2);
}
}
//管理员查询自己信息
void Mfind(){
	int n=0;
	printf("请输入账号");
	scanf("%d",&n);
	int sum2=0;
	while(managers[sum2].account1!=0){
		sum2++;
	}
	int k=-1;
	for(int i=0;i<sum2;i++){
		if(n==managers[i].account1) k=i;
}
	if(k==-1) printf("所查找使用者不存在");
	else {
		printf("姓名 账号 信用分 已借书数量 借书名\n");
		printf("%s %d %d %d %s\n",managers[k].name1,managers[k].account1,
			managers[k].score1,managers[k].bNum1,managers[k].bBook1);
}
}


//管理员精确查找用户信息（按名字)
void findUN(){
	int k=-1,flag=0;
	char s[20];
	printf("请输入所查找的用户姓名");
	scanf("%s",&s);
	int i=0;
	while(users[i].account2!=0){
		k=strcmp(s,users[i].name2);
		if(k==0){
			flag=1;
			printf("姓名 账号 信用分 已借书数量 借书名\n");
		printf("%s %d %d %d %s\n",users[i].name2,users[i].account2,users[i].score2,
			users[i].bNum2,users[i].bBook2);
	    i++;
	}
	if(flag==0) printf("所查找用户不存在");
}
}
//管理员精确查找用户信息（按账号)
void findUA(){
	int n=0;
	printf("请输入所查找的用户账户");
	scanf("%d",&n);
		int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	int k=Bsearch(users,n,sum2);
	if(k==-1) printf("所查找用户不存在");
	else{
		printf("姓名 账号 信用分 已借书数量 借书名\n");
		printf("%s %d %d %d %s\n",users[k].name2,users[k].account2,users[k].score2,
			users[k].bNum2,users[k].bBook2);
}
}
//管理员查找所有用户信息
void findUall(){
		int sum2=0;
	while(users[sum2].account2!=0){
		sum2++;
	}
	printf("姓名 账号 信用分 已借书数量 借书名\n");
	for(int i=0;i<sum2;i++){
	printf("%s %d %d %d %s\n",users[i].name2,users[i].account2,users[i].score2,
		users[i].bNum2,users[i].bBook2);
	}
}
//管理员查找用户信息函数实现
void manageUser(){
	int n=0;
	printf("输入1查找用户信息，输入2修改用户信息，输入3增加用户信息\n");
	scanf("%d",&n);
if(n==1){//查找用户信息
	int n1=0;
	printf("输入1查找所有用户信息，输入2按姓名查找用户信息，输入3按账号查找用户信息\n");
	scanf("%d",&n1);
	while(n1<1||n1>3){
		printf("输入数字不在范围内，请重新输入");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:findUall();break;
	case 2:findUN();break;
	case 3:findUA();break;
	}
}
//if(n==2){修改}
if(n==3){
	char s[20];
	int a=0,b=0;
	printf("请输入需要增加的用户信息:姓名，10位学号，初始密码（身份证后6位）\n");
	scanf("%s %d %d",&s,&a,&b);
	while(!matchSum10(a)){
		printf("账号位数有误，请重新输入\n");
		scanf("%d",&a);
		}
		while(!matchSum6(b)){
		printf("密码位数有误，请重新输入\n");
		scanf("%d",&b);
		}
		addInfo2(s,a,b);
		HeapSortU();
		printf("注册成功\n");
}
}

//管理员个人信息管理
void MmanSelfinfo(){
	int n1=0;
	printf("1代表查询个人信息，2代表修改个人信息，请输入数字");
	scanf("%d",&n1);
	while(n1<1||n1>2){
		printf("输入数字不在范围内，请重新输入");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:Mfind();break;//管理员查找个人信息
	//case 2:修改;break;
	}
}
//用户个人信息管理
void UmanSelfinfo(){
	int n1=0;
	printf("1代表查询个人信息，2代表修改个人信息，请输入数字\n");
	scanf("%d",&n1);
	while(n1<1||n1>2){
		printf("输入数字不在范围内，请重新输入\n");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:Ufind();break;//用户查找个人信息
	//case 2:修改;break;
	}
}
//菜单中查询书籍信息的函数（按书名）
void findB_Na(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[40];
	int k=-1,flag=0;
	printf("请输入要查找的书名并加上书名号\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].name);
		if(k==0){
			flag=1;
			printf("书名 作者 类别 总量 借出数量 剩余数量 编号\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("所找书籍不存在");
}
//按作者
void findB_Au(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[10];
	int k=-1,flag=0;
	printf("请输入要查找的书的作者\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].author);
		if(k==0){
			flag=1;
			printf("书名 作者 类别 总量 借出数量 剩余数量 编号\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("所找书籍不存在");
}
//按类别
void findB_Ty(){
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	char s[20];
	int k=-1,flag=0;
	printf("请输入要查找的书的类别（名著,计算机,高等数学,大学物理,就业,英语)\n");
	scanf("%s",s);
	for(int i=0;i<sum2;i++){
		k=strcmp(s,books[i].type);
		if(k==0){
			flag=1;
			printf("书名 作者 类别 总量 借出数量 剩余数量 编号\n");
		printf("%s %s %s %d %d %d %d\n",books[i].name,books[i].author,books[i].type,
			books[i].sum,books[i].borrowed,books[i].remainder,books[i].number);
		}
	}
	if(flag==0) printf("所找书籍不存在");
}
//按编号
void findB_Nu(){
	int n;
	printf("请输入书本编号\n");
	scanf("%d",&n);
	int sum2=0;
	while(books[sum2].number!=0){
		sum2++;
	}
	int k=Bsearch_book(books,n,sum2);
	if(k==-1) printf("所找书籍不存在");
	else{
		printf("书名 作者 类别 总量 借出数量 剩余数量 编号\n");
		printf("%s %s %s %d %d %d %d\n",books[k].name,books[k].author,books[k].type,
			books[k].sum,books[k].borrowed,books[k].remainder,books[k].number);

	}
}
//管理员管理书籍函数实现
void manBookinfo(){
	int n=0,n1=0;
	printf("请输入数字来选择功能，1:增加书籍,2:查找书籍\n");
	scanf("%d",&n);
	while(n<1||n>2){
		printf("输入数字不在范围内，请重新输入\n");
		scanf("%d",&n);
	}
	//if(n==1) 增加书籍函数
	if(n==2){
		printf("请输入数字来选择不同查找方式，1:书名,2:作者,3:类别,4:编号\n");
	scanf("%d",&n1);
	while(n1<1||n1>4){
		printf("输入数字不在范围内，请重新输入\n");
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
//用户查询书籍信息函数实现
void findBookinfo(){
	int n1=0;
	printf("请输入数字来选择不同查找方式，1:书名,2:作者,3:类别,4:编号\n");
	scanf("%d",&n1);
	while(n1<1||n1>4){
		printf("输入数字不在范围内，请重新输入\n");
		scanf("%d",&n1);
	}
	switch(n1){
	case 1:findB_Na();break;
	case 2:findB_Au();break;
	case 3:findB_Ty();break;
	case 4:findB_Nu();break;
	}
}