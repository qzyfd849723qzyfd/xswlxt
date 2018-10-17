#include"funs.h"

void managements()//学生信息管理主函数
{
    struct student * incouse;
    int i,num2;
    printf("\t\t\t学生信息管理\n");
    printf("1.新增学生信息\n");
    printf("2.删除学生信息\n");
    printf("3.对所选课程编号排序\n");
    printf("4.修改学生信息\n");
    printf("5.查找学生信息\n");
    printf("6.返回主菜单\n");
    printf("请选择(1~6):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            incouse=(struct student *)malloc(sizeof(struct student));
            incouse->nelen=0;
            incouse->nelenum[0]=0;
            printf("学号\t姓名\t选课数量\t总计学分\n");
            scanf("%d%s%d%d",&incouse->num2,incouse->name2,&incouse->nelen,&incouse->scoresum);
	fprintf(FPLOG,"\n\t1.n add new student");            
	inserts(incouse);
	fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            printf("请输入要删除学生的学号:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t2.ds del num of %d student",num2);
            dels(num2);
			fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
			fprintf(FPLOG,"\n\t3.sts sort for num of course");
            sort();
			fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            printf("请输入要修改的学生的学号:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t4.cs　change num of %d  student",num2);
            changes(num2);
			fprintf(FPLOG,"\n");
            break;
        }
    case(5):
        {
            printf("请输入要查找的学生的学号:\n");
            scanf("%d",&num2);
			fprintf(FPLOG,"\n\t5.ss search num of %d student",num2);
            searchs(num2);
			fprintf(FPLOG,"\n");
            break;
        }

    case(6):
        {
            fprintf(FPLOG,"\n\t6.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
