
#include"./include/fun.h"
#include"./ModuleB/funs.h"
#include"./ModuleA/func.h"
int main()//主函数
{
	char fpath[100];
    printf("输入要读入的日志文件路径:");
    getchar();
    gets(fpath);
    if((FPLOG=fopen(fpath,"w"))==NULL)
    {
        printf("找不到%s文件!\n",fpath);
        exit(0);
    }
    int i;
    start:
    printf("\n\t\t\t欢迎使用学生选课系统!\n");
    printf("菜单:\n");
    printf("1.录入课程信息\n");
    printf("2.课程信息管理\n");
    printf("3.录入学生信息\n");
    printf("4.学生信息管理\n");
    printf("5.学生选课\n");
    printf("6.系统信息查看及存储\n");
    printf("7.退出系统\n");
    printf("\n请输入菜单选项(1~7):\n");
    scanf("%d",&i);
    if(i<1 || i>7)
    {
        printf("输入错误,请重输:\n");
	fprintf(FPLOG,"input error,pls ready input:");
        fprintf(FPLOG,"\n");
        goto start;
    }
    switch(i)
    {
    case(1):
        {
            system("clean");
		fprintf(FPLOG,"\n1.input course infor");
            inputc();
		fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(2):
        {
            system("clean");
			fprintf(FPLOG,"\n2.course infor manager");
            managementc();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(3):
        {
            system("clean");
			fprintf(FPLOG,"\n3.input student infor");
            inputs();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(4):
        {
            system("clean");
			fprintf(FPLOG,"\n4.student infor manager");
            managements();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(5):
        {
            system("clean");
			fprintf(FPLOG,"5.student choose course");
            elective();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(6):
        {
            system("clean");
			fprintf(FPLOG,"6.sysgem infor cat or save");
            store();
			fprintf(FPLOG,"\n");
            goto start;
            break;
        }
    case(7):
        {
            system("clean");
            printf("感谢使用本系统!\n\n再见!\n");
	fprintf(FPLOG,"thanks to use this system!\t\tbye!\n");
	fclose(FPLOG);
        }
    }
    return(0);
}
