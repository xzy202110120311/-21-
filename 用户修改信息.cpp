//�û��޸�����
void revisePassword2(int n) {
	system("cls");
	int  password = 0, password3 = 0, tmp1 = 0, tmp2 = 0;
	int sum1 = 0;
	while (users[sum1].account2 != 0) {
		sum1++;
	}
	int k = Bsearch(users, n, sum1);
	password = users[k].password2;
	printf("������ԭ����\n");
	scanf("%d", &password3);
	while (password3 != password) {
		printf("�����������������\n");
		scanf("%d", &password3);
	}
	printf("�������µ�����\n");
	scanf("%d", &tmp1);
	printf("���ٴ�����\n");
	scanf("%d", &tmp2);
	while (tmp1 != tmp2) {
		printf("�����������벻һ�£�����������\n");
		scanf("%d", &tmp2);
	}
	users[k].password2 = tmp2;
	printf("�����޸ĳɹ�\n");
	int op = 0;
	printf("��Ҫ�˳�ϵͳ�������رմ��ڣ���Ҫ���س�ʼ�˵�ѡ�����������밴�������ּ�\n");
	scanf("%d", &op);
}
//�û��޸�����
void reviseName2(int n) {
	system("cls");
	char s[10];
	int sum1 = 0;
	while (managers[sum1].account1 != 0) {
		sum1++;
	}
	int k = Bsearch(users, n, sum1);
	printf("��������Ҫ�ĵ�����\n");
	scanf("%s", &s);
	strcpy(users[k].name2, s);
	printf("���������޸ĳɹ�\n");
	int op = 0;
	printf("��Ҫ�˳�ϵͳ�������رմ��ڣ���Ҫ���س�ʼ�˵�ѡ�����������밴�������ּ�\n");
	scanf("%d", &op);
}
//�û��޸ĸ�����Ϣ
void UmodInfo(int n) {
	system("cls");
	int i;
	printf("��ѡ��Ҫ�޸ĵ���Ϣ,1:�޸�����,2:�޸�����\n");
	scanf("%d", &i);
	while (i != 1 && i != 2) {
		printf("�������ֲ���������������\n");
		scanf("%d", &i);
	}
	switch (i)
	{
	case 1: revisePassword2(n);   break;
	case 2: reviseName2(n);       break;
	}
}