#include"../include/fun.h"

void elective()//ѧ��ѡ��������
{
    int i;
    printf("\t\t\tѧ��ѡ��\n");
    printf("1.��ѯ��ѡ�γ�\n");
    printf("2.��ѯ��ѡ�γ�\n");
    printf("3.�������˵�\n");
    printf("������(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.scc��search course could choose");
            cheak();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.src search course already choose");
            hcheak();
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
