#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

extern struct lian * head ;                 // ͷָ�룬�ⲿ����


struct ms {                                 // ѧ����Ϣ�ͳɼ�
	char name[100];
	char sex[10];
	char number[10];
	int lisan;
	int math;
	int english;
	int c;
	int sum;
	float avrg;
};
typedef struct lian {                       // ����
	struct ms item ;
	struct lian * next ;
} lian;
void zhujie(); 								// �����溯��
char * s_gets(char * st, int n);			// ���봦����
void jie2();								// ��ʦ����
void gotoxy(int x, int y);					// �ƶ���꺯��

lian * creat ();                            // ����   ���� ��ͷ��� ����ͷָ��
void cut (struct lian *);                   // ����   ɾ��ͬѧ ����������
void addstu (struct lian * head); 			// ����   ���ѧ����Ϣ
void addgra (struct lian * head); 			// ����   ¼��ѧ���ɼ�
void bianli (struct lian * head);			// ����   ���������Ϣ
void pai() ;								// ����   ð��������

void chaxun(); 						    // ��ѯ   ��ɼ�������
void cha1();								// ��ѯ   ���˳ɼ�

void cun();                               // �ļ�   ����
void du();
