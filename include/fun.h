#ifndef FUN_H_
#define FUN_H_

#include<stdio.h>
#include<stdlib.h>

#define NL 20
#define NM 50

int N1,N2,kk1,kk2,kk3;
FILE * FPLOG;
struct couse * head1;
struct student * head2;
struct couse//课程信息结构体
{
    int num1;
    char name1[NL];
    char nature[NM];
    int hours;
    int score;
    int nelepeo;//课程已选人数
    int Melepeo;//课程人数上限
    struct couse * next;
};
struct student//学生信息结构体
{
    int num2;
    char name2[NL];
    int nelenum[NM];//已选课程编号
    int nelen;//已选课程数量
    int scoresum;
    struct student * next;
};

void store();//信息主函数;
void into();//存储信息;
void intos();//存储学生信息;
void intoc();//存储课程信息;
void lists(); //输出学生信息;
void listc(); //输出课程信息;
void elective();//学生选课主函数;
void hcheck(); //学生选课子函数(查询已选函数);
void back();  //退课;
void check();//学生选课子函数(查询可选课程);
void elect();//选课;



void Ms();

#endif // FUN_H_
