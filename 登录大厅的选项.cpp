#include <stdio.h>
void choice(n)
{
    int m;
    scanf("%d",&m);//大厅中的输入
    if()
    {
    printf("欢迎用户来到图书管理信息系统\n");
    printf("\n");
    printf("0.退出             1.查询书籍信息\n");
    printf("2.我要借书          3.我要还书\n");
    printf("4.查看我的预约      5.查看我的个人信息\n");
    printf("\n");
    printf("请选择你的操作\n");
    if(m>=0 && m<=5)
    {
        return m;
    }
    else
    {
        printf("错误，请输入对应数字。\n");
    }
    switch(m)
    {
        case 0: return 0;
        case 1: inquire();   break;
        case 2: borrow();    break;
        case 3: Return();    break;
        case 4: reservation()break;
        case 5: display();   break;

    }

    }








    else
    {
         printf("欢迎管理员来到图书管理信息系统\n");
    printf("\n");
    printf("0.退出             1.查询书籍信息\n");
    printf("2.我要借书          3.我要还书\n");
    printf("4.查看我的预约      5.查看我的个人信息\n");
    printf("6.查询他人信息      7.修改图书信息\n");
    printf("\n");
    printf("请选择你的操作\n");
     if(m>=0 && m<=7)
    {
        return m;
    }
    else
    {
        printf("错误，请输入对应数字。\n");
    }
     switch(m)
    {
        case 0: exit(0);     break;
        case 1: inquire();   break;
        case 2: borrow();    break;
        case 3: Return();    break;
        case 4: reservation()break;
        case 5: display();   break;
        case 6: manage()     break;
        case 7: storage()    break;

    }

    }
    return 0;

}
