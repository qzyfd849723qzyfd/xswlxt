#include"func.h"

void inputc()//¼��γ�������
{
    int i;
    printf("\t\t\t¼��γ���Ϣ\n");
    printf("\n1.�Ӽ���¼��\n");
    printf("2.���ļ�¼��\n");
    printf("3.�������˵�\n");
    printf("��ѡ��(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.kc��input from keyboard");
            keyboardc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.fc input from file");
            filec();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t3.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
