#include"func.h"

void changec(int n)
{
    int m;
    int s;
    char t[NL];
    struct couse *p;
    p=head1;
    while(p!=NULL)
    {
        if(p->num1==n)
        {
            printf("��������Ҫ�޸ĵ��ֶ�:1.(���),2.(����)3.(����),4.(ѧʱ)5.(ѧ��),6.(����)\n");
            scanf("%d",&m);
            switch(m)
            {
            case(1):
                {
                    printf("�������޸ĺ�ı��:\n");
                    scanf("%d",&s);
		fprintf(FPLOG,"\n\t\t\tchange course num success!");
                    fprintf(FPLOG,"\n");
                    p->num1=s;
                    break;
                }
            case(2):
                {
                    printf("�������޸ĺ������:\n");
                    scanf("%s",t);
                    strcpy(p->name1,t);
		fprintf(FPLOG,"\n\t\t\tchange course name success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(3):
                {
                    printf("�������޸ĺ������:\n");
                    scanf("%s",t);
                    strcpy(p->nature,t);
		fprintf(FPLOG,"\n\t\t\tchange course nature success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(4):
                {
                    printf("�������޸ĺ��ѧʱ:\n");
                    scanf("%d",t);
		fprintf(FPLOG,"\n\t\t\tchange course hours success!");
                    fprintf(FPLOG,"\n");
					p->hours=t;
                    break;
                }
            case(5):
                {
                    printf("�빦�����޸ĺ��ѧ��:\n");
                    scanf("%d",&s);
                    p->score=s;
		fprintf(FPLOG,"\n\t\t\tchange course score success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(6):
                {
                    printf("�������޸ĺ������:\n");
                    scanf("%d",&s);
                    p->Melepeo=s;
		fprintf(FPLOG,"\n\t\t\tchange course Melepeo success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            }

        }
        p=p->next;
    }
	fprintf(FPLOG,"\n\t\tchange course string success!");
    fprintf(FPLOG,"\n");
}
