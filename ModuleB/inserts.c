#include"funs.h"

void inserts(struct student * incouse)//学生信息管理子函数(填加学生信息)
{
    struct student *p0,*p1,*p2;
    p1=head2;
    p0=incouse;
    if(head2==NULL)
    {
        head2=p0;
        p0->next=NULL;
    }
    else
    {
        while((p0->num2 > p1->num2) && (p1->next!=NULL))
        {
            p2=p1;
            p1=p1->next;
        }
        if(p0->num2 <= p1->num2)
        {
            if(head2==p1) head2=p0;
            else p2->next=p0;
            p0->next=p1;
        }
        else
        {
            p1->next=p0;
            p0->next=NULL;
        }
    }
    N2=N2+1;
	fprintf(FPLOG,"\n\t\tadd new student success!");
    fprintf(FPLOG,"\n");
}
