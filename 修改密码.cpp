#include<stdio.h>
void x_passage()
{	
	char n;
	char passage;
	char tmp;
	printf("请输入原密码\n");
	scanf("%s", &passage);
	if (passage == n)
	{
		printf("请输入新的密码");

		scanf("%s", &passage);
		tmp = passage;
		printf("请再次输入");
		scanf("%s", &passage);
		if (tmp == passage)
		{
			printf("修改成功");
		}

	}
	else
	{
		printf("密码错误请重新输入");
	}
		
}