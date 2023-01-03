//用户修改密码
void revisePassword2(int n) {
	system("cls");
	int  password = 0, password3 = 0, tmp1 = 0, tmp2 = 0;
	int sum1 = 0;
	while (users[sum1].account2 != 0) {
		sum1++;
	}
	int k = Bsearch(users, n, sum1);
	password = users[k].password2;
	printf("请输入原密码\n");
	scanf("%d", &password3);
	while (password3 != password) {
		printf("密码错误，请重新输入\n");
		scanf("%d", &password3);
	}
	printf("请输入新的密码\n");
	scanf("%d", &tmp1);
	printf("请再次输入\n");
	scanf("%d", &tmp2);
	while (tmp1 != tmp2) {
		printf("两次密码输入不一致，请重新输入\n");
		scanf("%d", &tmp2);
	}
	users[k].password2 = tmp2;
	printf("密码修改成功\n");
	int op = 0;
	printf("若要退出系统请点击×关闭窗口，若要返回初始菜单选择其他功能请按任意数字键\n");
	scanf("%d", &op);
}
//用户修改姓名
void reviseName2(int n) {
	system("cls");
	char s[10];
	int sum1 = 0;
	while (managers[sum1].account1 != 0) {
		sum1++;
	}
	int k = Bsearch(users, n, sum1);
	printf("请输入您要改的名字\n");
	scanf("%s", &s);
	strcpy(users[k].name2, s);
	printf("您的姓名修改成功\n");
	int op = 0;
	printf("若要退出系统请点击×关闭窗口，若要返回初始菜单选择其他功能请按任意数字键\n");
	scanf("%d", &op);
}
//用户修改个人信息
void UmodInfo(int n) {
	system("cls");
	int i;
	printf("请选择要修改的信息,1:修改密码,2:修改姓名\n");
	scanf("%d", &i);
	while (i != 1 && i != 2) {
		printf("输入数字不合理，请重新输入\n");
		scanf("%d", &i);
	}
	switch (i)
	{
	case 1: revisePassword2(n);   break;
	case 2: reviseName2(n);       break;
	}
}