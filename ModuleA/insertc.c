#include"func.h"


void insertc(struct couse *incouse)//课程管理子函数(增加课程)
{
    struct couse *p0,*p1,*p2;
    p1=head1;
    p0=incouse;
    if(head1==NULL)
    {
        head1=p0;
        p0->next=NULL;
    }
    else
    {
        while((p0->num1 > p1->num1) && (p1->next!=NULL))
        {
            p2=p1;
            p1=p1->next;
        }
        if(p0->num1 <= p1->num1)
        {
            if(head1==p1) head1=p0;
            else p2->next=p0;
            p0->next=p1;
        }
        else
        {
            p1->next=p0;
            p0->next=NULL;
        }
    }
    N1=N1+1;
	fprintf(FPLOG,"\n\t\t add new course success!");
    fprintf(FPLOG,"\n");
}
