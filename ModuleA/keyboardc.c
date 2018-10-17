#include"func.h"


void keyboardc()//录入课程子函数(从键盘录入)
{
    struct couse *p1,*p2;
    N1=0;
    p1=p2=(struct couse*)malloc(sizeof(struct couse));
    printf("课程编号\t课程名称\t课程性质\t授课学时\t学分\t课程已选人数\t课程人数上限\n");
    scanf("%d%s%s%d%d%d%d\n",&p1->num1,p1->name1,p1->nature,&p1->hours,&p1->score,&p1->nelepeo,&p1->Melepeo);

    p1->nelepeo=0;
    head1=NULL;
    while(p1->num1!=0)
    {
        N1=N1+1;
        if(N1==1)
            head1=p1;
        else
            p2->next=p1;
        p2=p1;
        p1=(struct couse * )malloc(sizeof(struct couse));
        scanf("%d%s%s%d%d%d%d\n",&p1->num1,&p1->name1,p1->nature,&p1->hours,&p1->score,&p1->nelepeo,&p1->Melepeo);

        p1->nelepeo=0;
	if(p1->num1==0)
        {
            fprintf(FPLOG,"\n\t\tinput from keyboard success.");
            fprintf(FPLOG,"\n");
        }
    }
    p2->next=NULL;
}
