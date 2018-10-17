#include"../include/fun.h"

void intos()//存储学生信息
{
    FILE * fp;
    struct student * p;
    char filepath[30];
    printf("输入学生信息要保存的文件路径:");
    getchar();
    gets(filepath);
    if((fp=fopen(filepath,"w"))==NULL)
    {
        printf("\n保存失败!");
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
    printf("学生信息已保存在%s中!\n",filepath);
    fprintf(FPLOG,"\n\t\tsave stuent infor success!");
    fprintf(FPLOG,"\n");
}
