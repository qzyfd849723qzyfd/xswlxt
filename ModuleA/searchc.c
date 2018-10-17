#include"func.h"

void searchc(int n)
{
    struct couse *p;
    p=head1;
    while(p!=NULL)
    {
        if(p->num1==n)
		{
            printf("课程编号:%d\t课程名称:%s\t课程性质:%s\t授课学时:%d\t学分:%d\t课程已选人数:%d\t课程人数上限:%d\n",p->num1,p->name1,p->nature,p->hours,p->score,p->nelepeo,p->Melepeo);
		fprintf(FPLOG,"\n\t\tsuccess to search course!");
        fprintf(FPLOG,"\n");
        break;
		}
        p=p->next;
		if(p==NULL)
        {
            printf("查找课程失败,没有该编号的课程!\n");
            fprintf(FPLOG,"\n\t\tfaile to search course,don't have num of course!");
            fprintf(FPLOG,"\n");
        }
    }
}
