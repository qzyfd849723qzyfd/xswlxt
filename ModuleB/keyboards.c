#include"funs.h"

void keyboards()//¼��ѧ����Ϣ�Ӻ������Ӽ���¼�룩
{
    int i;
    struct student *p1,*p2;
    N2=0;
    p1=p2=(struct student *)malloc(sizeof(struct student));
    printf("ѧ��\t����\tѡ������\t�ܼ�ѧ��\n");
    scanf("%d%s%d%d",&p1->num2,p1->name2,&p1->nelen,&p1->scoresum);
    p1->nelen=0;
    for(i=0;i<20;i++) p1->nelenum[i]=0;
    head2=NULL;
    while(p1->num2!=0)
    {
        N2=N2+1;
        if(N2==1)head2=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct student * )malloc(sizeof(struct student));
        scanf("%d%s%d%d",&p1->num2,p1->name2,&p1->nelen,&p1->scoresum);
        p1->nelen=0;
        for(i=0;i<20;i++) p1->nelenum[i]=0;
	if(p1->num2==0)
        {
            fprintf(FPLOG,"\n\t\tinput student from keyboard success.");
            fprintf(FPLOG,"\n");
        }
    }
    p2->next=NULL;
}
