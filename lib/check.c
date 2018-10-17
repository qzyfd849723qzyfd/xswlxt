#include"../include/fun.h"

void cheak()//学生选课子函数(查询可选课程)
{
    char e;
    struct couse * c;
    struct student * s;
    int num2,i,j=0,t=0;
    printf("请输入你的学号:");
    scanf("%d",&num2);
    s=head2;
    while(s->num2!=num2 && s->next!=NULL) s=s->next;
    if(s->num2!=num2)
    {
        printf("不存在你的信息,请进入主菜单录入你的信息!\n");
	fprintf(FPLOG,"\n\t\t不存在你的信息,请进入主菜单录入你的信息!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    c=head1;
    printf("你的可选课程编号:\n");
    while(c!=NULL)
    {
        for(t=0,i=0;i<s->nelen;i++)
        {
            if(c->num1==s->nelenum[i]) t=1;
        }
        if(t==0 && (c->nelepeo!=c->Melepeo))
        {
            printf("%d\n",c->num1);
            j++;
        }
        c=c->next;
    }
    if(j==0)
    {
        printf("你已选完所有课程，无法再多选!\n");
        fprintf(FPLOG,"\n\t\tyour are choose all course，can't choose more!");
        fprintf(FPLOG,"\n");
        goto end;
    }
    printf("选课(y/n)?:\n");
    getchar();
    e=getchar();
    i=0;
    while(e=='y')
    {
        elect(s);
        printf("继续选课(y/n)?:\n");
        getchar();
        e=getchar();
    }
    end:;
}
