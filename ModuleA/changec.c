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
            printf("请输入需要修改的字段:1.(编号),2.(名称)3.(性质),4.(学时)5.(学分),6.(上限)\n");
            scanf("%d",&m);
            switch(m)
            {
            case(1):
                {
                    printf("请输入修改后的编号:\n");
                    scanf("%d",&s);
		fprintf(FPLOG,"\n\t\t\tchange course num success!");
                    fprintf(FPLOG,"\n");
                    p->num1=s;
                    break;
                }
            case(2):
                {
                    printf("请输入修改后的名称:\n");
                    scanf("%s",t);
                    strcpy(p->name1,t);
		fprintf(FPLOG,"\n\t\t\tchange course name success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(3):
                {
                    printf("请输入修改后的性质:\n");
                    scanf("%s",t);
                    strcpy(p->nature,t);
		fprintf(FPLOG,"\n\t\t\tchange course nature success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(4):
                {
                    printf("请输入修改后的学时:\n");
                    scanf("%d",t);
		fprintf(FPLOG,"\n\t\t\tchange course hours success!");
                    fprintf(FPLOG,"\n");
					p->hours=t;
                    break;
                }
            case(5):
                {
                    printf("请功输入修改后的学分:\n");
                    scanf("%d",&s);
                    p->score=s;
		fprintf(FPLOG,"\n\t\t\tchange course score success!");
                    fprintf(FPLOG,"\n");
                    break;
                }
            case(6):
                {
                    printf("请输入修改后的上限:\n");
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
