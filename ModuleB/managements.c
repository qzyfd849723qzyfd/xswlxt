#include"funs.h"

void managements()//ѧ����Ϣ����������
{
    struct student * incouse;
    int i,num2;
    printf("\t\t\tѧ����Ϣ����\n");
    printf("1.����ѧ����Ϣ\n");
    printf("2.ɾ��ѧ����Ϣ\n");
    printf("3.����ѡ�γ̱������\n");
    printf("4.�޸�ѧ����Ϣ\n");
    printf("5.����ѧ����Ϣ\n");
    printf("6.�������˵�\n");
    printf("��ѡ��(1~6):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            incouse=(struct student *)malloc(sizeof(struct student));
            incouse->nelen=0;
            incouse->nelenum[0]=0;
            printf("ѧ��\t����\tѡ������\t�ܼ�ѧ��\n");
            scanf("%d%s%d%d",&incouse->num2,incouse->name2,&incouse->nelen,&incouse->scoresum);
	fprintf(FPLOG,"\n\t1.n add new student");            
	inserts(incouse);
	fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            printf("������Ҫɾ��ѧ����ѧ��:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t2.ds del num of %d student",num2);
            dels(num2);
			fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
			fprintf(FPLOG,"\n\t3.sts sort for num of course");
            sort();
			fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            printf("������Ҫ�޸ĵ�ѧ����ѧ��:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t4.cs��change num of %d  student",num2);
            changes(num2);
			fprintf(FPLOG,"\n");
            break;
        }
    case(5):
        {
            printf("������Ҫ���ҵ�ѧ����ѧ��:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t5.ss search num of %d student",num2);
            searchs(num2);
			fprintf(FPLOG,"\n");
            break;
        }

    case(6):
        {
            fprintf(FPLOG,"\n\t6.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
