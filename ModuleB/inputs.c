#include"funs.h"

void inputs()//¼��ѧ����Ϣ������
{
    int i;
    printf("\t\t\t¼��ѧ����Ϣ\n");
    printf("\n1.�Ӽ���¼��\n");
    printf("2.���ļ�¼��\n");
    printf("3.�������˵�\n");
    printf("��ѡ��(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
		{
			fprintf(FPLOG,"\n\t1.ks input from keyboard");
			keyboards();
			fprintf(FPLOG,"\n");
			break;
		}
    case(2):
		{
			fprintf(FPLOG,"\n\t2.fs input from file");
			files();
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
