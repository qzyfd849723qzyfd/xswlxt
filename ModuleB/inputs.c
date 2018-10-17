#include"funs.h"

void inputs()//录入学生信息主函数
{
    int i;
    printf("\t\t\t录入学生信息\n");
    printf("\n1.从键盘录入\n");
    printf("2.从文件录入\n");
    printf("3.返回主菜单\n");
    printf("请选择(1~3):\n");
    scanf("%d",&i);
    switch(i)
    {
    case(1):
		{
			fprintf(FPLOG,"\n\t1.ks input from keyboard");
			keyboards();
			fprintf(FPLOG,"\n");
			break;
		}
    case(2):
		{
			fprintf(FPLOG,"\n\t2.fs input from file");
			files();
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
