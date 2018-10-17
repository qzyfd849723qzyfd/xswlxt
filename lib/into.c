#include"../include/fun.h"

void into()//存储信息
{
    int i;
    printf("1.存储课程信息\n");
    printf("2.存储学生信息\n");
    printf("3.返回主菜单\n");
    printf("请输入(1~3)\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t\t1.save course infor");
            intoc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t\t2.save student infor");
            intos();
            fprintf(FPLOG,"\n");
            break;
        }
    case(3):
        {
            fprintf(FPLOG,"\n\t\t3.return menu");
            fprintf(FPLOG,"\n");
            break;
        }
    }
}
