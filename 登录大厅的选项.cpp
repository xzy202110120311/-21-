#include <stdio.h>
void choice(n)
{
    int m;
    scanf("%d",&m);//�����е�����
    if()
    {
    printf("��ӭ�û�����ͼ�������Ϣϵͳ\n");
    printf("\n");
    printf("0.�˳�             1.��ѯ�鼮��Ϣ\n");
    printf("2.��Ҫ����          3.��Ҫ����\n");
    printf("4.�鿴�ҵ�ԤԼ      5.�鿴�ҵĸ�����Ϣ\n");
    printf("\n");
    printf("��ѡ����Ĳ���\n");
    if(m>=0 && m<=5)
    {
        return m;
    }
    else
    {
        printf("�����������Ӧ���֡�\n");
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
         printf("��ӭ����Ա����ͼ�������Ϣϵͳ\n");
    printf("\n");
    printf("0.�˳�             1.��ѯ�鼮��Ϣ\n");
    printf("2.��Ҫ����          3.��Ҫ����\n");
    printf("4.�鿴�ҵ�ԤԼ      5.�鿴�ҵĸ�����Ϣ\n");
    printf("6.��ѯ������Ϣ      7.�޸�ͼ����Ϣ\n");
    printf("\n");
    printf("��ѡ����Ĳ���\n");
     if(m>=0 && m<=7)
    {
        return m;
    }
    else
    {
        printf("�����������Ӧ���֡�\n");
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
