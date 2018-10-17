#include"func.h"

void managementc()//课程管理主函数
{
    struct couse * incouse;
    int i,num1;
    printf("\t\t\t课程管理\n");
    printf("1.新增课程\n");
    printf("2.删除课程\n");
    printf("3.修改课程\n");
    printf("4.查找课程\n");
    printf("5.返回主菜单\n");
    printf("请选择(1~5):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            incouse=(struct couse *)malloc(sizeof(struct couse));
            printf("课程编号\t课程名称\t课程性质\t授课学时\t学分\t课程已选人数\t课程人数上限\n");
            scanf("%d%s%s%d%d%d%d\n",&incouse->num1,incouse->name1,incouse->nature,&incouse->hours,&incouse->score,&incouse->nelepeo,&incouse->Melepeo);
            incouse->nelepeo=0;
			fprintf(FPLOG,"\n\t1.nc　add new course");
            insertc(incouse);
			fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            printf("请输入要删除的课程的编号:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t2.dc del num of %d course",num1);
            delc(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            printf("请输入要修改的课程的编号:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t3.cc change num of %d course",num1);
            changec(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            printf("请输入要查找的课程的编号:\n");
            scanf("%d",&num1);
			fprintf(FPLOG,"\n\t4.sc search num of %d course",num1);
            searchc(num1);
			fprintf(FPLOG,"\n");
            break;
        }
    case(5):
		{
			fprintf(FPLOG,"\n\t5.return menu");
            fprintf(FPLOG,"\n");
			break;
		}
    }
}
