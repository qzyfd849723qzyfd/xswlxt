#include"../include/fun.h"

void listc()//输出课程信息
{
    struct couse * p;
    p=head1;

    while(p!=NULL)
    {
        printf("课程编号:%d\t课程名称:%s\t课程性质:%s\t授课学时:%d\t学分:%d\t课程已选人数:%d\t课程人数上限:%d\n",p->num1,p->name1,p->nature,p->hours,p->score,p->nelepeo,p->Melepeo);
        p=p->next;
    }
	fprintf(FPLOG,"\n\t\tcat course infor success.");
    fprintf(FPLOG,"\n");
}
