//����Ա�޸�����
void revisePassword1(int n)//�޸�����
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
	managers[k].password1 = tmp2;
	printf("�����޸ĳɹ�\n");
	int op = 0;
	printf("��Ҫ�˳�ϵͳ�������رմ��ڣ���Ҫ���س�ʼ�˵�ѡ�����������밴�������ּ�\n");
	scanf("%d", &op);

}
//����Ա�޸�����
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
	printf("��������Ҫ�ĵ�����\n");
	scanf("%s", &s);
	strcpy(managers[k].name1, s);
	printf("���������޸ĳɹ�\n");
	int op = 0;
	printf("��Ҫ�˳�ϵͳ�������رմ��ڣ���Ҫ���س�ʼ�˵�ѡ�����������밴�������ּ�\n");
	scanf("%d", &op);
}
//����Ա�޸ĸ�����Ϣ
void MmodInfo(int n) {
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
	case 1: revisePassword1(n);   break;
	case 2: reviseName1(n);       break;
	}
}