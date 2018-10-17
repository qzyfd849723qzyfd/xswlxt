#include"func.h"


void delc(int num1)//课程管理子函数(删除课程)
{
    struct couse *p1,*p2;
    struct student *p=head2;
    int i;
    if(head1==NULL)
    {
        printf("\n没有课程,无法删除!\n");
        fprintf(FPLOG,"\n\t\tno course,can not del!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    p1=head1;
    while(num1!=p1->num1 && p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(num1==p1->num1)
    {
        if(p1==head1)
            head1=p1->next;
        else
            p2->next=p1->next;


        while(p!=NULL)
        {
            for(i=0;i<p->nelen;i++)
                if(p->nelenum[i]==num1)
                {
                    p->nelenum[i]=0;
                    p->nelen--;
                }
            p=p->next;
        }

        printf("已删除该编号课程!\n");
        fprintf(FPLOG,"\n\t\tdel this num course!!");
        fprintf(FPLOG,"\n");
        N1=N1-1;
    }
    else
        {
            printf("无该编号的课程!\n");
            fprintf(FPLOG,"\n\t\tdon't have this num course!");
            fprintf(FPLOG,"\n");
        }
    end:;
}
