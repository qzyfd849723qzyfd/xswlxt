#include"funs.h"


void files()//¼��ѧ����Ϣ�Ӻ��������ļ�¼�룩
{
    int i=0;
    FILE * fp;
    char filepath[20];
    struct student *p1,*p2;
    N2=0;
    printf("����Ҫ������ļ�·��:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"r"))==NULL)
    {
        printf("�Ҳ���%s�ļ�!\n",filepath);
		fprintf(FPLOG,"can't find %s file!\n",filepath);
		fprintf(FPLOG,"\n");
        exit(0);
    }
    p1=p2=(struct student*)malloc(sizeof(struct student));

    fread(p1,sizeof(struct student),1,fp);
    head2=NULL;
    while(!feof(fp))
    {
        i=0;
        N2=N2+1;
        if(N2==1)head2=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student * )malloc(sizeof(struct student));

        fread(p1,sizeof(struct student),1,fp);
	if(feof(fp))
    {
		fprintf(FPLOG,"\n\t\tinput from file success.");
		fprintf(FPLOG,"\n");
	}
    }
    p2->next=NULL;
}
