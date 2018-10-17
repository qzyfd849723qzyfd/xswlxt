#include"../include/fun.h"

void elective()//学生选课主函数
{
    int i;
    printf("\t\t\t学生选课\n");
    printf("1.查询可选课程\n");
    printf("2.查询已选课程\n");
    printf("3.返回主菜单\n");
    printf("请输入(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.scc　search course could choose");
            cheak();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.src search course already choose");
            hcheak();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t3.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
