#include"funs.h"


void files()//录入学生信息子函数（从文件录入）
{
    int i=0;
    FILE * fp;
    char filepath[20];
    struct student *p1,*p2;
    N2=0;
    printf("输入要读入的文件路径:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"r"))==NULL)
    {
        printf("找不到%s文件!\n",filepath);
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
