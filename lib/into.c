#include"../include/fun.h"

void into()//�洢��Ϣ
{
    int i;
    printf("1.�洢�γ���Ϣ\n");
    printf("2.�洢ѧ����Ϣ\n");
    printf("3.�������˵�\n");
    printf("������(1~3)\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t\t1.save course infor");
            intoc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t\t2.save student infor");
            intos();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t\t3.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
