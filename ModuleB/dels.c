#include"funs.h"

void dels(int num2)//ѧ����Ϣ�����Ӻ�����ɾ��ѧ����Ϣ)
{
    struct student *p1,*p2;
    struct couse *p;
    int i;
    if(head2==NULL)
    {
        printf("\nû�и�ѧ����Ϣ,�޷�ɾ��!\n");
        fprintf(FPLOG,"\n\t\tdon't have this student,can't del!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    p1=head2;
    while(num2!=p1->num2 && p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    if(num2==p1->num2)
    {
        for(i=0;i<p1->nelen;i++)
        {
            p=head1;
            while(p!=NULL)
            {
                if(p->num1==p1->nelenum[i])
                    (p->nelepeo)--;
                p=p->next;
            }
        }

        if(p1==head2) head2=p1->next;
        else p2->next=p1->next;

        printf("��ɾ����ѧ����Ϣ!\n");
        fprintf(FPLOG,"\n\t\thave del this student!");
        fprintf(FPLOG,"\n");
        N2=N2-1;
    }
    else printf("�޸�ѧ�ŵ�ѧ��!\n");
    fprintf(FPLOG,"\n\t\tdon't have this student!");
    fprintf(FPLOG,"\n");
    end:;
}
