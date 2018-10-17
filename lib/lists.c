#include"../include/fun.h"


void lists()//Exporting student information
{
    struct student * p;
    p=head2;
    int i;
    while(p!=NULL)
    {
        i=0;
        printf("学号:%d\t姓名:%s\t选课数量:%d\t总计学分:%d\n",p->num2,p->name2,p->nelen,p->scoresum);
        printf("所选课程编号:");
        while(i<p->nelen)
        {
            if(p->nelenum[i]!=0)
                printf("%d\t",p->nelenum[i]);
            i++;
        }
        printf("\n");
        p=p->next;
    }
	fprintf(FPLOG,"\n\t\tcat student infor success.");
    fprintf(FPLOG,"\n");

}
