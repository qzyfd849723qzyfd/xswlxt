
#include"./include/fun.h"
#include"./ModuleB/funs.h"
#include"./ModuleA/func.h"
int main()//������
{
	char fpath[100];
    printf("����Ҫ�������־�ļ�·��:");
    getchar();
    gets(fpath);
    if((FPLOG=fopen(fpath,"w"))==NULL)
    {
        printf("�Ҳ���%s�ļ�!\n",fpath);
        exit(0);
    }
    int i;
    start:
    printf("\n\t\t\t��ӭʹ��ѧ��ѡ��ϵͳ!\n");
    printf("�˵�:\n");
    printf("1.¼��γ���Ϣ\n");
    printf("2.�γ���Ϣ����\n");
    printf("3.¼��ѧ����Ϣ\n");
    printf("4.ѧ����Ϣ����\n");
    printf("5.ѧ��ѡ��\n");
    printf("6.ϵͳ��Ϣ�鿴���洢\n");
    printf("7.�˳�ϵͳ\n");
    printf("\n������˵�ѡ��(1~7):\n");
    scanf("%d",&i);
    if(i<1 || i>7)
    {
        printf("�������,������:\n");
	fprintf(FPLOG,"input error,pls ready input:");
        fprintf(FPLOG,"\n");
        goto start;
    }
    switch(i)
    {
    case(1):
        {
            system("clean");
		fprintf(FPLOG,"\n1.input course infor");
            inputc();
		fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(2):
        {
            system("clean");
			fprintf(FPLOG,"\n2.course infor manager");
            managementc();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(3):
        {
            system("clean");
			fprintf(FPLOG,"\n3.input student infor");
            inputs();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(4):
        {
            system("clean");
			fprintf(FPLOG,"\n4.student infor manager");
            managements();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(5):
        {
            system("clean");
			fprintf(FPLOG,"5.student choose course");
            elective();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(6):
        {
            system("clean");
			fprintf(FPLOG,"6.sysgem infor cat or save");
            store();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(7):
        {
            system("clean");
            printf("��лʹ�ñ�ϵͳ!\n\n�ټ�!\n");
	fprintf(FPLOG,"thanks to use this system!\t\tbye!\n");
	fclose(FPLOG);
        }
    }
    return(0);
}
