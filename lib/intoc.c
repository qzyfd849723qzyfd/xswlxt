#include"../include/fun.h"

void intoc()//�洢�γ���Ϣ
{
    FILE * fp;
    struct couse * p;
    char filepath[30];
    printf("����γ���ϢҪ������ļ�·��:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"w"))==NULL)
    {
        printf("\n����ʧ��!");
		fprintf(FPLOG,"\n\t\t\tsave faile!");
        fprintf(FPLOG,"\n");
        exit(0);
    }
    p=head1;
    while(p!=NULL)
    {
        fprintf(fp,"%d %s %s %d %d %d %d\n",p->num1,p->name1,p->nature,p->hours,p->score,p->nelepeo,p->Melepeo);
        p=p->next;
    }
    fclose(fp);
    printf("�γ���Ϣ�ѱ�����%s��!\n",filepath);
	fprintf(FPLOG,"\n\t\tsave course infor success!");
    fprintf(FPLOG,"\n");
}
