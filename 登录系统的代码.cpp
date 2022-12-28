#include<stdio.h>
typedef struct manager{
	char name[20];
	int account1;
	int password1;
}manager;

manager managers[5]={{"张明",20190101,208160},{"李华",20190102,208161},{"赵红",20190103,208162},{"王玲",20190104,208163},{"陈思",20190105,208164}};

typedef struct user{
	char name[20];
	long account2;
	int password2;
}user;

user users[5]={{"叶艳卉",2021101207,102030},{"刘铱凡",2021101208,102031},{"陈华",2021101209,102032},{"杨策",2021101210,102033},{"谢晶晶",2021101211,10}};
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
//管理员账号密码是否输入正确
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
//用户账号密码是否正确
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
//主程序
int main(){
int option1=0,option2=0,account1=0,password1=0;
printf("1代表管理员端，2代表用户端，请选择1或2\n");
scanf("%d",&option1);
if(option1==1){
	printf("请依次输入管理员账号及密码，以空格作为间隔，回车键结束\n");
	scanf("%d %d",&account1,&password1);
	while(!matchSum8(account1)){
		printf("账号位数有误，请重新输入\n");
		scanf("%d",&account1);
	}
	while(!matchID1(account1,password1)){
		printf("账号或密码有误，请重新输入\n");
		scanf("%d %d",&account1,&password1);
	}
	printf("图书系统欢迎您\n");
	printf("数字1-5分别对应以下功能\n");
	printf("1:图书信息的编辑\n2:对用户进行管理\n3:借书或还书\n4:修改个人信息\n5:查询书籍信息\n");
	printf("请输入数字\n");
	scanf("%d",&option2);
	while(option2<1||option2>5){
		printf("输入数字不在范围内，请重新输入\n");
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
    printf("若您之前使用过此系统，请输入1进行登录，若未使用过请输入2进行注册\n");
    scanf("%d",&option3);
    if(option3==1){
    		printf("请依次输入用户账号及密码，以空格作为间隔，回车键结束\n");
	scanf("%d %d",&account2,&password2);
	while(!matchSum10(account2)){
		printf("账号位数有误，请重新输入\n");
		scanf("%d",&account2);
	}
	while(!matchID2(account2,password2)){
		printf("账号或密码有误，请重新输入\n");
		scanf("%d %d",&account2,&password2);
	}
	printf("图书系统欢迎你");

    	
	}
   
}

}

