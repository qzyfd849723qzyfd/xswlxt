#include"../include/fun.h"

void store()//��Ϣ������
{
    int i;
    printf("\t\tϵͳ��Ϣ�鿴���洢\n");
    printf("1.�鿴�γ���Ϣ\n");
    printf("2.�鿴ѧ����Ϣ\n");
    printf("3.�洢��Ϣ\n");
    printf("4.�������˵�\n");
    printf("������(1~4):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.cci��cat course infor");
            listc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.csi cat student infor");
            lists();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t3.si save infor");
            into();
            fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            fprintf(FPLOG,"\n\t4.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
