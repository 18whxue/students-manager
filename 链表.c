
#include "manager.h"
struct lian * head = NULL ;                                        				  //ѧ��ͷָ�� �� ��̬
struct telian * head2 = NULL , * laop = NULL;									  //��ʦͷָ�� 
int ban = 0 ; 
lian * creat () {                                                    			  //����ѧ�� 
	struct lian   * current =  NULL;
	current = (struct lian *)malloc(sizeof(struct lian));
	current->next = NULL;
	return current;
}

telian * creat2 () {                                                   			 //������ʦ 
	struct telian   * current =  NULL;
	current = (struct telian *)malloc(sizeof(struct telian));
	current->next = NULL;
	return current;
}
//////////////////////////////////////////////////////////////////////////////////////
void addstu (struct lian * head) {                                   			 //���ѧ����Ϣ

	char name[31];
	int n = 0 , shu = 0;
	FILE * fp; 
    struct lian  * prev = head, * current =  NULL , * new2 = head->next;
    while(prev->next != NULL) prev = prev->next;
    while(1) {
    new2 = head->next;
    system("cls") ;
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |                                           ѧ����Ϣ����ϵͳ                                                 |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |     ������ѧ����Ϣ��                                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ������                                                                       |\n");
	printf("     |                                     ������س�ֹͣ,���30����ĸ,15�����֣�                                 |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               �Ա�                                                                       |\n");
	printf("     |                                     ����/Ů��                                                              |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ѧ�ţ�                                                                       |\n");
	printf("     |                                     ������8λѧ�ţ�                                                        |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               �༶��                                                                       |\n");
	printf("     |                                     �������������������û�а༶��                                         |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                            �Ѿ��ɹ�¼�� 0  ��ͬѧ    ENTER  ȷ��           |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	gotoxy(79, 22);
	printf("%d", n) ;

	if (ban != 0) 
	{
			gotoxy(44, 16);
			printf("%d", ban);

	}
		gotoxy(44, 7);
	s_gets(name, 30);
	if ( name[0] == '\0' ) break ;
	while(new2 != NULL && strcmp(new2->item.name,name) != 0) {
		new2 = new2->next;
    	}
    	if (new2 != NULL)   {
		gotoxy(44, 7);
    	printf("��ͬѧ�Ѵ��ڣ��޷�¼��");
        getch();
			continue ;

		}
	current = (struct lian *)malloc(sizeof(struct lian));
	prev->next = current;
	current->next = NULL;
	strcpy(current->item.name, name);
	gotoxy(44, 10);
	s_gets(current->item.sex, 3);
	gotoxy(44, 13);
	s_gets(current->item.number, 9);
	gotoxy(44, 16);
	if (ban == 0) 
	{
	scanf("%d", &current->item.ban);
	while(getchar() != '\n') ;
	}
	if (ban != 0)
	{
		current->item.ban = ban;
	}
	current->item.math = 0;
	current->item.english = 0;
	current->item.avrg = 0;
	current->item.c = 0;
	current->item.lisan = 0;
	current->item.sum = 0;
	strcpy(current->item.m,"0") ;
	prev = current;
	n++;
	}
	system("cls") ;
	gotoxy(44, 10);
	printf("�ɹ�¼��%d��ͬѧ",n); 
	fp = fopen("shu.txt","r+");
	fscanf(fp,"%d",&shu);
	gotoxy(44, 11);
	printf(" �ֹ���%d��ͬѧ",shu+n) ;
	rewind(fp);
	fprintf(fp,"%d",n+shu);
	cun(); 
	fclose(fp);
	cun2();
	getch();
	return ;
}

//////////////////////////////////////////////////////////////////////////////////////
void addte (struct telian * head2) {                                    //�����ʦ��Ϣ

	char name[31];
	int n = 0 , shu = 0;
	FILE * fp; 
    struct telian  * prev = head2, * current =  NULL , * new2 = head2->next;
    while(prev->next != NULL) prev = prev->next;
    while(1) {
    new2 = head2->next;
    system("cls") ;
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |                                           ѧ����Ϣ����ϵͳ                                                 |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |     ��������ʦ��Ϣ��                                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ������                                                                       |\n");
	printf("     |                                     ������س�ֹͣ,���30����ĸ,15�����֣�                                 |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               �˺ţ�                                                                       |\n");
	printf("     |                                     ���20λ��                                                           |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ���룺                                                                       |\n");
	printf("     |                                     ���20λ��                                                           |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                           ����༶��                                                                       |\n");
	printf("     |                                     ��������������0��������а༶��                                        |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                            �Ѿ��ɹ�¼�� 0  ����ʦ    ENTER  ȷ��           |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	gotoxy(79, 22);
	printf("%d", n) ;
	gotoxy(44, 7);
	s_gets(name, 30);
	if ( name[0] == '\0' ) break ;
	while(new2 != NULL && strcmp(new2->teitem.name,name) != 0) {
		new2 = new2->next;
    	}
    	if (new2 != NULL)   {
		gotoxy(44, 7);
    	printf("����ʦ�Ѵ��ڣ��޷�¼��");
        getch();
			continue ;

		}
	current = (struct telian *)malloc(sizeof(struct telian));
	prev->next = current;
	current->next = NULL;
	strcpy(current->teitem.name, name);
	gotoxy(44, 10);
	s_gets(current->teitem.z, 20);
	gotoxy(44, 13);
	s_gets(current->teitem.m, 20);
	gotoxy(44, 16);
	scanf("%d",&current->teitem.ban) ;
	while(getchar() != '\n') ; 
	prev = current;
	n++;
	}
	system("cls") ;
	gotoxy(44, 10);
	printf("�ɹ�¼��%d����ʦ",n); 
	fp = fopen("laoshu.txt","r+");
	fscanf(fp,"%d",&shu);
	gotoxy(44, 11);
	printf(" �ֹ���%d����ʦ",shu+n) ;
	rewind(fp);
	fprintf(fp,"%d",n+shu);
	cun2(); 
	if(fp == NULL){
		
	} 
	fclose(fp);
	
	getch();
	return ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void addgra (struct lian * head) {                                                                             //���ѧ���ɼ�
	char name[31];
	int n = 0 ,key = 0;
    struct lian  * prev = head, * current = head->next;

    while(1) {
    	current = head->next ;
    system("cls") ;
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |                                           ѧ����Ϣ����ϵͳ                                                 |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |     ������ѧ���ɼ���                                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ������                                                                       |\n");
	printf("     |                                     ������¼��ɼ�ѧ�����������س�ֹͣ��                                   |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ������                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               ��ɢ��                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                               Ӣ�                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                              C���ԣ�                                                                       |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                            �Ѿ��ɹ�¼�� 0  ��ͬѧ    ENTER  ȷ��           |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");

		gotoxy(79, 22);
	    printf("%d", n) ;
		gotoxy(44, 7);
		s_gets(name, 30);
		if ( name[0] == '\0' ) break ;
		while(current != NULL && strcmp(current->item.name,name) != 0) {
			current = current->next;
    	}
		if (current == NULL)   {
		gotoxy(44, 7);
    	printf(" �޸�ͬѧ�����������������");
        getch();
			continue ;

		}
		gotoxy(44, 10);
		if (scanf("%3d" ,&current->item.math) == 0)  {
			current->item.math = 0;
			while (getchar() != '\n') ;
		}
		else
			while (getchar() != '\n') ;
		gotoxy(44, 13);
		if (scanf("%3d" ,&current->item.lisan) == 0)  {
			current->item.lisan = 0;
			while (getchar() != '\n') ;
		}
		else
			while (getchar() != '\n') ;
		gotoxy(44, 16);
		if (scanf("%3d" ,&current->item.english) == 0)  {
			current->item.english = 0;
			while (getchar() != '\n') ;
		}
		else
			while (getchar() != '\n') ;
		gotoxy(44, 19);
		if (scanf("%3d" ,&current->item.c) == 0)  {
			current->item.c = 0;
			while (getchar() != '\n') ;
		}
		else
			while (getchar() != '\n') ;
		current->item.sum = current->item.lisan + current->item.math + current->item.english +current->item.c ;
		current->item.avrg = (current->item.lisan + current->item.math + current->item.english +current->item.c) / 4.0;
	    n++;
	}
	system("cls") ;
	gotoxy(44, 10);
	printf("�ɹ�¼��%d��ͬѧ",n);
	cun(); 
	getch();
	return ;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char * s_gets(char * st, int n) {
	char * ret_val;
	char * find ;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue ;
	}
	return ret_val ;
}
////////////////////////////////////////////////////////////////////////////////////////////////
void bianli (struct lian * head)  {
	system("cls") ;
	int y = 7;                                                                //����ѧ�����
	struct lian  * prev = head, * current =  head->next;
	if (current == NULL) {
			system("cls") ;
			gotoxy(38, y+3);
			puts("======================================");
    		gotoxy(38, y+4);
    		puts("|                                    |");
    		gotoxy(38, y+5);
    		puts("|                                    |");
    		gotoxy(51, y+5);
    		puts("û �� �� ��");
    		gotoxy(38, y+6);
    		puts("|                                    |");
    		gotoxy(50, y+6);
    		puts("(�����������)") ;
    		gotoxy(38, y+7);
    		puts("======================================");
		getchar();
		return ;
	}
	if (current != NULL && ban == 0) {
		printf("\t\t\t\t\t\tȫ��ѧ����Ϣ\n"); 
		printf("����                          �Ա�           ѧ��     �༶  ����   ��ɢ   Ӣ��   C����   ƽ��    �ܷ�\n");
		while(current != NULL && ban == 0) {
			printf("%-30s %-2s         %8s     %2d   %3d    %3d    %3d    %3d     %.2f   %3d\n", current->item.name, current->item.sex, current->item.number,
				current->item.ban, current->item.math,current->item.lisan,current->item.english,current->item.c,current->item.avrg, current->item.sum);
			current = current->next;
		}
		getch();
		return ;
	}
	printf("\t\t\t\t\t%d �� ѧ �� �� Ϣ\n\n", ban); 
	printf("����                          �Ա�           ѧ��      ����   ��ɢ   Ӣ��   C����   ƽ��    �ܷ�\n");
	while(current != NULL && ban != 0) {
		if (ban == current->item.ban) {
			printf("%-30s %-2s          %8s    %3d    %3d    %3d    %3d     %.2f   %3d\n", current->item.name, current->item.sex, current->item.number,
				current->item.math,current->item.lisan,current->item.english,current->item.c,current->item.avrg, current->item.sum);
		}
		current = current->next;
	}
	getch();
	system("cls");
	return;
}

////////////////////////////////////////////////////////////////////////////////////////////////
void bianli1 (struct telian * head2)  {
	system("cls") ;
	int y = 7;                                                                //������ʦ���
	struct telian  * prev = head2, * current =  head2->next;
	if (current == NULL) {
					system("cls") ;
			gotoxy(38, y+3);
			puts("======================================");
    		gotoxy(38, y+4);
    		puts("|                                    |");
    		gotoxy(38, y+5);
    		puts("|                                    |");
    		gotoxy(51, y+5);
    		puts("û �� �� ��");
    		gotoxy(38, y+6);
    		puts("|                                    |");
    		gotoxy(50, y+6);
    		puts("(�����������)") ;
    		gotoxy(38, y+7);
    		puts("======================================");
		getch();
		return ;
	}
	if (current != NULL) {
		printf("\t\t\t                ����                �˺�                ����   ����༶ \n");
	} 
	while(current != NULL) {
	printf("\t\t\t%20s%20s%20s      %3d\n",current->teitem.name,current->teitem.z,current->teitem.m,current->teitem.ban);
	current = current->next;
	}
	getch();
	system("cls") ;
	return ;
}
//////////////////////////////////////////////////////////////////////////////////////
void cut (struct lian * head) {   
	FILE * fp;                                        							//ɾ��ѧ��
	struct lian  * prev = head, * current =  head;
	int shu = 0; 
	system("cls") ;
	char c[100];
	printf("������ɾ��ѧ�������ƣ�(����س�ֹͣ)\n");
	while (s_gets(c, 30) != NULL && c[0] != '\0' )
	{
		while(current->next!= NULL && strcmp(current->next->item.name,c) != 0) {
			current = current->next;
    	}
    	if (current->next == NULL) {
    		printf ("û���ҵ���ͬѧ����������룺������س�ֹͣ��\n");
    		current =  head ;
    		continue ;
		}
		if (ban == 0 || ban == current->next->item.ban)
    	{
		prev = current->next;
    	current->next = current->next->next;
    	current = head;
    	free(prev);
    	fp = fopen("shu.txt","r+");
		fscanf(fp,"%d",&shu);
		rewind(fp);
		fprintf(fp,"%d",shu-1);
    	printf("ɾ���ɹ�����ʣ%dλͬѧ����������һλ��(����س�ֹͣ)\n",shu-1);
    	fclose(fp); 
  		  }
  		else 
  		 {
  		 	printf("%d %d",ban, current->item.ban);
  		 	printf("û���ҵ���ͬѧ����������룺\n") ;
  		 	getchar();
		} 
  		
    
	}
	cun();
}
//////////////////////////////////////////////////////////////////////////////////////
void cut1 (struct telian * head2) {   
	FILE * fp;                                        							//ɾ����ʦ 
	struct telian  * prev = head2, * current =  head2;
	int shu = 0; 
	system("cls") ;
	char c[100];
	printf("������ɾ����ʦ�����ƣ�(����س�ֹͣ)\n");
	while (s_gets(c, 30) != NULL && c[0] != '\0' )
	{
		while(current->next != NULL && strcmp(current->next->teitem.name,c) != 0) {
			current = current->next;
    	}
    	if (current->next == NULL) {
    		printf ("û���ҵ�����ʦ����������룺������س�ֹͣ��\n");
    		current =  head2 ;
    		continue ;
		}
    	prev = current->next;
    	current->next = current->next->next;
    	current = head2 ;
    	free(prev);
    	fp = fopen("laoshu.txt","r+");
		fscanf(fp,"%d",&shu);
		rewind(fp);
		fprintf(fp,"%d",shu-1);
    	printf("ɾ���ɹ�����ʣ%dλ��ʦ����������һλ��(����س�ֹͣ)\n",shu-1);
    	fclose(fp); 
	}
	    	cun2(); 
}
	//////////////////////////////////////////////////////////////////////////////////////
