#include"funs.h"

void searchs(int n)
{
    struct student *p;
    p=head2;
    int i=0;
    while(p!=NULL)
    {
        if(p->num2==n)
        {
            printf("ѧ��:%d\t����:%s\tѡ������:%d\t�ܼ�ѧ��:%d\n",p->num2,p->name2,p->nelen,p->scoresum);
            printf("��ѡ�γ̱�ţ�");
            while(i<p->nelen)
            {
                if(p->nelenum[i]!=0)
                    printf("%d\t",p->nelenum[i]);
                i++;
            }
            printf("\n");
		fprintf(FPLOG,"\n\t\tsearch student success!");
        fprintf(FPLOG,"\n");
		break;
        }
        p=p->next;
		if(p==NULL)
        {
            printf("����ѧ��ʧ��,û�и�ѧ�ŵ�ѧ��!\n");
            fprintf(FPLOG,"\n\t\tsearch student faile,don't have student of num!");
            fprintf(FPLOG,"\n");
        }
    }
}
