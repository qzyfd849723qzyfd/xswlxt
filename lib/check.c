#include"../include/fun.h"

void cheak()//ѧ��ѡ���Ӻ���(��ѯ��ѡ�γ�)
{
    char e;
    struct couse * c;
    struct student * s;
    int num2,i,j=0,t=0;
    printf("���������ѧ��:");
    scanf("%d",&num2);
    s=head2;
    while(s->num2!=num2 && s->next!=NULL) s=s->next;
    if(s->num2!=num2)
    {
        printf("�����������Ϣ,��������˵�¼�������Ϣ!\n");
	fprintf(FPLOG,"\n\t\t�����������Ϣ,��������˵�¼�������Ϣ!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    c=head1;
    printf("��Ŀ�ѡ�γ̱��:\n");
    while(c!=NULL)
    {
        for(t=0,i=0;i<s->nelen;i++)
        {
            if(c->num1==s->nelenum[i]) t=1;
        }
        if(t==0 && (c->nelepeo!=c->Melepeo))
        {
            printf("%d\n",c->num1);
            j++;
        }
        c=c->next;
    }
    if(j==0)
    {
        printf("����ѡ�����пγ̣��޷��ٶ�ѡ!\n");
        fprintf(FPLOG,"\n\t\tyour are choose all course��can't choose more!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    printf("ѡ��(y/n)?:\n");
    getchar();
    e=getchar();
    i=0;
    while(e=='y')
    {
        elect(s);
        printf("����ѡ��(y/n)?:\n");
        getchar();
        e=getchar();
    }
    end:;
}
