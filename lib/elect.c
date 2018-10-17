#include"../include/fun.h"


void elect(struct student * s)//选课
{
    struct couse * p;
    int num1,i;
    printf("请输入要选课的编号:\n");
    scanf("%d",&num1);

    for(i=0;i<s->nelen;i++)
        if(s->nelenum[i]==num1)
            {
                printf("所选课程重复,请重新选择!\n");
			fprintf(FPLOG,"\n\t\t\tcourse already choose,pls choose ready!");
                fprintf(FPLOG,"\n");
                goto end;
            }
    s->nelenum[i]=num1;
    (s->nelen)++;
    p=head1;
    while(p->num1!=num1) p=p->next;
    (p->nelepeo)++;
	fprintf(FPLOG,"\n\t\t\tchoose course success!");
    fprintf(FPLOG,"\n");
    end:;
}
