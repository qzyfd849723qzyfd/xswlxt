#include"funs.h"

void changes(int n)
{
    int m;
    int s;
    char t[NL];
    struct student *p;
    p=head2;
    while(p!=NULL)
    {
        if(p->num2==n)
        {
            printf("��������Ҫ�޸ĵ��ֶ�:1.(ѧ��),2.(����):\n");
            scanf("%d",&m);
            switch(m)
            {
            case(1):
                {
                    printf("�������޸ĺ��ѧ��:\n");
                    scanf("%d",&s);
                    p->num2=s;
			fprintf(FPLOG,"\n\t\t\tchange student num success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(2):
                {
                    printf("�������޸ĺ������:\n");
                    scanf("%s",t);
                    strcpy(p->name2,t);
			fprintf(FPLOG,"\n\t\t\tchange student name success!");
                    fprintf(FPLOG,"\n");
                    break;
                }

            }

        }
        p=p->next;
    }
}
