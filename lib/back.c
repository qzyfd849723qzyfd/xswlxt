#include"../include/fun.h"

void back(struct student * p)//�˿�
{
    struct couse * p1;
    int num1,i,j;
    printf("��������Ҫ�˵��Ŀγ̱��:\n");
    scanf("%d",&num1);
    p1=head1;
    while(p1->num1!=num1) p1=p1->next;
    for(i=0;p->nelenum[i]!=num1;i++);
    for(j=i;j<p->nelen;j++)
        p->nelenum[j]=p->nelenum[j+1];
    p->nelenum[--j]=0;
    (p1->nelepeo)--;
    printf("�˿γɹ�!\n");
    fprintf(FPLOG,"\n\t\t\tback course success!");
    fprintf(FPLOG,"\n");
}
