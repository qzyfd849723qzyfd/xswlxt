#include"../include/fun.h"

void intos()//�洢ѧ����Ϣ
{
    FILE * fp;
    struct student * p;
    char filepath[30];
    printf("����ѧ����ϢҪ������ļ�·��:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"w"))==NULL)
    {
        printf("\n����ʧ��!");
		fprintf(FPLOG,"\n\t\t\tsave faile!");
        fprintf(FPLOG,"\n");
        exit(0);
    }
    p=head2;
    while(p!=NULL)
    {
        fwrite(p,sizeof(struct student),1,fp);
        p=p->next;
    }
    fclose(fp);
    printf("ѧ����Ϣ�ѱ�����%s��!\n",filepath);
    fprintf(FPLOG,"\n\t\tsave stuent infor success!");
    fprintf(FPLOG,"\n");
}
