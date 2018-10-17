#ifndef FUNS_H_
#define FUNS_H_

#include<string.h>
#include"../include/fun.h"

void managements(); //student information management main function;
void dels(int num2); //student information management sub function (delete student information);
void inserts(struct student *incouse); //student information management sub function (add student information);
void changes(int num2); //student information management sub function (modify student information);
void searchs(int num2); //student information management sub function (find student information);

void inputs(); //enter the main function of student information;
void files(); //enter student information sub function (from file entry);
void keyboards();//enter student information sub function (from keyboard entry);

void sort();

#endif // FUNS_H_
