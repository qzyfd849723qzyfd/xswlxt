#include"../include/fun.h"

void listc()//����γ���Ϣ
{
    struct couse * p;
    p=head1;

    while(p!=NULL)
    {
        printf("�γ̱��:%d\t�γ�����:%s\t�γ�����:%s\t�ڿ�ѧʱ:%d\tѧ��:%d\t�γ���ѡ����:%d\t�γ���������:%d\n",p->num1,p->name1,p->nature,p->hours,p->score,p->nelepeo,p->Melepeo);
        p=p->next;
    }
	fprintf(FPLOG,"\n\t\tcat course infor success.");
    fprintf(FPLOG,"\n");
}
