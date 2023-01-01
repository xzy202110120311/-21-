#include"各种函数.h"
#include<Windows.h>
int main(){
HeapSortU();
int option1=0,option2=0,account1=0,password1=0;
printf("1代表管理员端，2代表用户端，请选择1或2\n");
scanf("%d",&option1);
if(option1==1){//管理员
	printf("请依次输入管理员账号及密码，以空格作为间隔，回车键结束\n");
	scanf("%d %d",&account1,&password1);//管理员登录
	while(!matchID1(account1,password1)){
		printf("账号或密码有误，请重新输入\n");
		scanf("%d %d",&account1,&password1);
	}
	printf("图书管理系统欢迎您\n");//选择功能
	printf("数字1-5分别对应以下功能\n");//4包括修改和查看，5包括增加和查看，1包括查找和修改
	printf("1:用户信息管理\n2:借书\n3:还书\n4:个人信息管理\n5:书籍信息管理\n");
	printf("请输入数字\n");
	scanf("%d",&option2);
	while(option2<1||option2>6){
		printf("输入数字不在范围内，请重新输入\n");
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
else{//用户
	 char s[20];
     int option3=0,option4=0,a=0,b=0;
    printf("若您之前使用过此系统，请输入1进行登录，若未使用过请输入2进行注册\n");
    scanf("%d",&option3);
    if(option3==1){//用户登录
    printf("请依次输入用户账号及密码，以空格作为间隔，回车键结束\n");
	scanf("%d %d",&a,&b);
	while(!matchID2(a,b)){
		printf("账号或密码有误，请重新输入\n");
		scanf("%d %d",&a,&b);
	}
	}
	else{//用户注册
		printf("请输入您的姓名.10位学号,身份证号后6位分别作为账号和密码,空格键做间隔\n");
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
		printf("注册成功\n请重新输入账号密码登录该系统\n");
		scanf("%d %d",&a,&b);
		while(!matchID2(a,b)){
		printf("账号或密码有误，请重新输入\n");
		scanf("%d %d",&a,&b);
	}

	}//功能选择
	printf("图书系统欢迎你\n");
	printf("请输入数字1-4来选择对应功能:\n1:借书\n2:还书\n3:查询书籍信息\n4:管理个人信息\n");
	scanf("%d",&option4);
	while(option4<1||option4>4){
	printf("输入数字不在范围内，请重新输入");
	scanf("%d",&option4);
	}
	switch(option4){
	//case 1:borrowBook();break;
	//case 2:returnBook();break;
	case 3:findBookinfo();break;
	case 4:UmanSelfinfo();break;
	}
}
system("pause");//防止闪退
}