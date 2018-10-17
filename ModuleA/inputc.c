#include"func.h"

void inputc()//录入课程主函数
{
    int i;
    printf("\t\t\t录入课程信息\n");
    printf("\n1.从键盘录入\n");
    printf("2.从文件录入\n");
    printf("3.返回主菜单\n");
    printf("请选择(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
        {
            fprintf(FPLOG,"\n\t1.kc　input from keyboard");
            keyboardc();
            fprintf(FPLOG,"\n");
            break;
        }
    case(2):
        {
            fprintf(FPLOG,"\n\t2.fc input from file");
            filec();
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
