//管理员修改密码
void revisePassword1(int n)//修改密码
{
	system("cls");
	int  password = 0, password3 = 0, tmp1 = 0, tmp2 = 0, k = 0;
	int sum1 = 0;
	while (managers[sum1].account1 != 0) {
		sum1++;
	}
	for (int i = 0; i < sum1; i++) {
		if (n == managers[i].account1) {
			password = managers[i].password1;
			k = i;
		}
	}
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
	managers[k].password1 = tmp2;
	printf("密码修改成功\n");
	int op = 0;
	printf("若要退出系统请点击×关闭窗口，若要返回初始菜单选择其他功能请按任意数字键\n");
	scanf("%d", &op);

}
//管理员修改姓名
void reviseName1(int n) {
	system("cls");
	char s[10];
	int sum1 = 0, k = 0;
	while (managers[sum1].account1 != 0) {
		sum1++;
	}
	for (int i = 0; i < sum1; i++) {
		if (n == managers[i].account1) {
			k = i;
		}
	}
	printf("请输入您要改的名字\n");
	scanf("%s", &s);
	strcpy(managers[k].name1, s);
	printf("您的姓名修改成功\n");
	int op = 0;
	printf("若要退出系统请点击×关闭窗口，若要返回初始菜单选择其他功能请按任意数字键\n");
	scanf("%d", &op);
}
//管理员修改个人信息
void MmodInfo(int n) {
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
	case 1: revisePassword1(n);   break;
	case 2: reviseName1(n);       break;
	}
}