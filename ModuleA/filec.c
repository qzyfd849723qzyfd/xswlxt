#include"func.h"

void filec()//¼������Ӻ���(���ļ�¼��)
{
    FILE * fp;
    char filepath[20];
    struct couse *p1,*p2;
    N1=0;
    printf("����Ҫ������ļ�·��:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"r"))==NULL)
    {
		fprintf(FPLOG,"\n\t\tfaile to open from file.");
        printf("�Ҳ���%s�ļ�!\n",filepath);
		fprintf(FPLOG,"\n");
        exit(0);
    }
	fprintf(FPLOG,"\n\t\topen form %s success.",filepath);
    p1=p2=(struct couse*)malloc(sizeof(struct couse));
    fscanf(fp,"%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->nature,&p1->hours,&p1->score,&p1->nelepeo,&p1->Melepeo);
    head1=NULL;
    while(!feof(fp))
    {
        N1=N1+1;
        if(N1==1)head1=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct couse * )malloc(sizeof(struct couse));
        fscanf(fp,"%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->nature,&p1->hours,&p1->score,&p1->nelepeo,&p1->Melepeo);
		if(feof(fp))
        	fprintf(FPLOG,"\n\t\tinput from file success.");
    }
    p2->next=NULL;
}
