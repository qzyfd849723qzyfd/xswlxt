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
struct couse//�γ���Ϣ�ṹ��
{
    int num1;
    char name1[NL];
    char nature[NM];
    int hours;
    int score;
    int nelepeo;//�γ���ѡ����
    int Melepeo;//�γ���������
    struct couse * next;
};
struct student//ѧ����Ϣ�ṹ��
{
    int num2;
    char name2[NL];
    int nelenum[NM];//��ѡ�γ̱��
    int nelen;//��ѡ�γ�����
    int scoresum;
    struct student * next;
};

void store();//��Ϣ������;
void into();//�洢��Ϣ;
void intos();//�洢ѧ����Ϣ;
void intoc();//�洢�γ���Ϣ;
void lists(); //���ѧ����Ϣ;
void listc(); //����γ���Ϣ;
void elective();//ѧ��ѡ��������;
void hcheck(); //ѧ��ѡ���Ӻ���(��ѯ��ѡ����);
void back();  //�˿�;
void check();//ѧ��ѡ���Ӻ���(��ѯ��ѡ�γ�);
void elect();//ѡ��;



void Ms();

#endif // FUN_H_
