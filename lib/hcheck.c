#include"../include/fun.h"

void hcheak()//ѧ��ѡ���Ӻ���(��ѯ��ѡ�γ�)
{
    char c;
    struct couse * p0;
    struct student * p;
    int num2,i,f=0;
    printf("������ѧ��:\n");
    scanf("%d",&num2);
    p=head2;
    while(p->num2!=num2 && p!=NULL) p=p->next;
    if(p==NULL)
    {
        printf("�����������Ϣ,������˵�¼����Ϣ:\n");
	fprintf(FPLOG,"\n\t\tdon't have infor,pls return menu to inout.");
        fprintf(FPLOG,"\n");
        goto end;
    }
    printf("��ѡ�γ̱��:\n");

    if(p->nelen==0)
    {
        printf("�㻹ûѡ��!\n");
	fprintf(FPLOG,"\n\t\thave't choose course!");
        fprintf(FPLOG,"\n");
        p->scoresum=f;
        goto end;
    }
    for(i=0;i<p->nelen;i++)
    {
        if(p->nelenum[i]!=0)
        {
            printf("%d\t",p->nelenum[i]);
            p0=head1;
            while(p0->num1!=p->nelenum[i])
                p0=p0->next;
            f=f+p0->score;
        }
    }
    p->scoresum=f;
    printf("��ѧ��:%d\n",p->scoresum);
    printf("�Ƿ�����˿�?(y/n)?");
    getchar();
    c=getchar();
    while(c=='y'&&p->nelen>0)
    {
        back(p);
        printf("�����˿�(y/n)?");
        getchar();
        c=getchar();
        (p->nelen)--;
    }
    fprintf(FPLOG,"\n\t\tsearch already select course success!");
    fprintf(FPLOG,"\n");
    end:;
}
