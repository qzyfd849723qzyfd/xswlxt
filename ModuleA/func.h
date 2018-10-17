#ifndef FUNC_H_
#define FUNC_H_

#include<string.h>
#include"../include/fun.h"


void managementc();//课程管理主函数;
void delc(int num1);//课程管理子函数(删除课程);
void insertc(struct couse *incouse);//课程管理子函数 (增加课程);
void changec(int num1);//课程管理子函数(修改课程);
void searchc(int num1);//课程管理子函数(查找课程);



void inputc();//录入课程主函数;
void filec();//录入课程子函数(从文件录入);
void keyboardc();//录入课程子函数(从键盘录入);


#endif // FUNC_H_
