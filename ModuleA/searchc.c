#include"func.h"

void searchc(int n)
{
    struct couse *p;
    p=head1;
    while(p!=NULL)
    {
        if(p->num1==n)
		{
            printf("�γ̱��:%d\t�γ�����:%s\t�γ�����:%s\t�ڿ�ѧʱ:%d\tѧ��:%d\t�γ���ѡ����:%d\t�γ���������:%d\n",p->num1,p->name1,p->nature,p->hours,p->score,p->nelepeo,p->Melepeo);
		fprintf(FPLOG,"\n\t\tsuccess to search course!");
        fprintf(FPLOG,"\n");
        break;
		}
        p=p->next;
		if(p==NULL)
        {
            printf("���ҿγ�ʧ��,û�иñ�ŵĿγ�!\n");
            fprintf(FPLOG,"\n\t\tfaile to search course,don't have num of course!");
            fprintf(FPLOG,"\n");
        }
    }
}
