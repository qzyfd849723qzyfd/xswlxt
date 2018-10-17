#include"../include/fun.h"

void intoc()//存储课程信息
{
    FILE * fp;
    struct couse * p;
    char filepath[30];
    printf("输入课程信息要保存的文件路径:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"w"))==NULL)
    {
        printf("\n保存失败!");
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
    printf("课程信息已保存在%s中!\n",filepath);
	fprintf(FPLOG,"\n\t\tsave course infor success!");
    fprintf(FPLOG,"\n");
}
