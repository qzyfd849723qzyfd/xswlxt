#include"func.h"

void managementc()//�γ̹���������
{
    struct couse * incouse;
    int i,num1;
    printf("\t\t\t�γ̹���\n");
    printf("1.�����γ�\n");
    printf("2.ɾ���γ�\n");
    printf("3.�޸Ŀγ�\n");
    printf("4.���ҿγ�\n");
    printf("5.�������˵�\n");
    printf("��ѡ��(1~5):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            incouse=(struct couse *)malloc(sizeof(struct couse));
            printf("�γ̱��\t�γ�����\t�γ�����\t�ڿ�ѧʱ\tѧ��\t�γ���ѡ����\t�γ���������\n");
            scanf("%d%s%s%d%d%d%d\n",&incouse->num1,incouse->name1,incouse->nature,&incouse->hours,&incouse->score,&incouse->nelepeo,&incouse->Melepeo);
            incouse->nelepeo=0;
			fprintf(FPLOG,"\n\t1.nc��add new course");
            insertc(incouse);
			fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            printf("������Ҫɾ���Ŀγ̵ı��:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t2.dc del num of %d course",num1);
            delc(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            printf("������Ҫ�޸ĵĿγ̵ı��:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t3.cc change num of %d course",num1);
            changec(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            printf("������Ҫ���ҵĿγ̵ı��:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t4.sc search num of %d course",num1);
            searchc(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(5):
		{
			fprintf(FPLOG,"\n\t5.return menu");
            fprintf(FPLOG,"\n");
			break;
		}
    }
}
