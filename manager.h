#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
extern struct telian * laop ; 				// ��ʦ״̬��¼ 
extern struct lian * head ;                 // ͷָ�� ѧ�� �ⲿ����
extern struct telian * head2; 				// ͷָ�� ��ʦ 
extern int ban;					            // �༶��¼ 
struct tems {                               // ��ʦ��Ϣ
	char name[100];							
	char z[21];
	char m[21];
	int ban;
};

typedef struct telian {						// ��ʦ���� 
	struct tems teitem;
	struct telian * next;
}telian;

struct ms {                                 // ѧ����Ϣ�ͳɼ�
	char name[100];
	char sex[10];
	char number[10];
	int lisan;
	int math;
	int english;
	int c;
	int sum;
	int ban;
	char m[10]; 
	float avrg;
};
typedef struct lian {                       // ����
	struct ms item ;
	struct lian * next ;
} lian;

void zhujie(); 								// ������
void denglu1(); 							// ������ 	 �����¼ 
void denglu2(); 							// ������ 	 ��ʦ��½ 
void denglu3(); 							// ������ 	 ѧ����½ 
void denglu3_1(struct lian * current) ; 	// ������ 	 ѧ����¼���� 
void denglu1_1(); 							// ������ 	 �����¼���� 
void denglu1_1_1(); 						// ������	 �����¼������ʦ���� 
void gotoxy(int x, int y);					// ������	 �ƶ���꺯��
void xiu(struct lian * current)	;			// ������	 �޸�ѧ������ 
void xiu2() ;								// ������	 �޸���ʦ���� 

void jie2();								// ��ʦ����

char * s_gets(char * st, int n);			// ����  	 ���봦����
lian * creat ();                            // ����  	 ѧ�� ������ͷ��� ����ͷָ��
void cut (struct lian *);                   // ����  	 ɾ��ͬѧ ����������
void addstu (struct lian * head); 			// ���� 	 ���ѧ����Ϣ
void addgra (struct lian * head); 			// ���� 	 ¼��ѧ���ɼ�
void bianli (struct lian * head);			// ���� 	 ���������Ϣ 


telian * creat2 ();							// ����  	 ��ʦ ������ͷ��� ����ͷָ��
void addte (struct telian * head2);         // ����  	 �����ʦ��Ϣ
void bianli1 (struct telian * head2);		// ����  	 ���������ʦ��Ϣ
void cut1 (struct telian * head2) ;			// ����  	 ɾ����ʦ 



void chaxun(); 						        // ��ѯ 	 ��ɼ�������
void cha1();								// ��ѯ 	 ���˳ɼ�
void cha2(struct lian * current); 			// ��ѯ		 ѧ�����˳ɼ� 
void sortsum();								// ��ѯ 	 ð�����������ܳɼ� /ƽ���� 
void chage();								// ��ѯ 	 ���Ƴɼ� 

void cun();                                 // �ļ�  	 ����ͬѧ 
void du();									// �ļ�  	 ��ȡͬѧ 
void cun2();								// �ļ�  	 ����ʦ��Ϣ 
void du2();									// �ļ� 	 ��ȡ��ʦ��Ϣ 

void jiami(char x[]);						// ������ 	 ���� 
void jiemi(char x[]);						// ������  	 ���� 

