#include"../include/fun.h"

void store()//信息主函数
{
    int i;
    printf("\t\t系统信息查看及存储\n");
    printf("1.查看课程信息\n");
    printf("2.查看学生信息\n");
    printf("3.存储信息\n");
    printf("4.返回主菜单\n");
    printf("请输入(1~4):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.cci　cat course infor");
            listc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.csi cat student infor");
            lists();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t3.si save infor");
            into();
            fprintf(FPLOG,"\n");
            break;
        }
    case(4):
        {
            fprintf(FPLOG,"\n\t4.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
