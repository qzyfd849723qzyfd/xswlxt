#include"func.h"

void filec()//录入键盘子函数(从文件录入)
{
    FILE * fp;
    char filepath[20];
    struct couse *p1,*p2;
    N1=0;
    printf("输入要读入的文件路径:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"r"))==NULL)
    {
		fprintf(FPLOG,"\n\t\tfaile to open from file.");
        printf("找不到%s文件!\n",filepath);
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
