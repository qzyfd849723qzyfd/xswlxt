#include"funs.h"

void sort()
{

    struct student *p=head2;
    int i,j;
    int t;
    while(p!=NULL)
    {
        for(i=0;i<NM-1;i++)
        {
            for(j=0;j<NM-1-i;j++)
            {
                if(p->nelenum[j]<p->nelenum[j+1])
                {
                    t=p->nelenum[j];
                    p->nelenum[j]=p->nelenum[j+1];
                    p->nelenum[j+1]=t;
                }
            }
        }
        for(i=0;i<p->nelen;i++)
            printf("%d\t",p->nelenum[i]);
        printf("\n");
        p=p->next;
    }
	fprintf(FPLOG,"\n\t\t sort for num of search course num!");
    fprintf(FPLOG,"\n");
}
