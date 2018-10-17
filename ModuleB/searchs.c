#include"funs.h"

void searchs(int n)
{
    struct student *p;
    p=head2;
    int i=0;
    while(p!=NULL)
    {
        if(p->num2==n)
        {
            printf("学号:%d\t姓名:%s\t选课数量:%d\t总计学分:%d\n",p->num2,p->name2,p->nelen,p->scoresum);
            printf("所选课程编号：");
            while(i<p->nelen)
            {
                if(p->nelenum[i]!=0)
                    printf("%d\t",p->nelenum[i]);
                i++;
            }
            printf("\n");
		fprintf(FPLOG,"\n\t\tsearch student success!");
        fprintf(FPLOG,"\n");
		break;
        }
        p=p->next;
		if(p==NULL)
        {
            printf("查找学生失败,没有该学号的学生!\n");
            fprintf(FPLOG,"\n\t\tsearch student faile,don't have student of num!");
            fprintf(FPLOG,"\n");
        }
    }
}
