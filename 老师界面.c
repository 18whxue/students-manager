
#include "manager.h"

void jie2 () {
	while(1) {
	system("cls") ;
	char c;
	int b = 1, x = 38 , y = 4;
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |                                           ѧ����Ϣ����ϵͳ                                                 |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                     ============================                                           |\n");
	printf("     |                                     |        1.ѧ��Ŀ¼        |                                           |\n");
	printf("     |                                     ============================                                           |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                              2.���ѧ��                                                    |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                              3.ɾ��ѧ��                                                    |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                              4.¼��/�޸ĳɼ�                                               |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                              5.��ѯ�ɼ�                                                    |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                              6.�޸�����                                                    |\n");
	printf("     |                                                                                                            |\n");
	printf("     |                                                                                                            |\n");
    printf("     |                                              7.����                                                        |\n");
	printf("     |                                                                   ��������       ENTER  ȷ��               |\n");
	printf("     --------------------------------------------------------------------------------------------------------------\n");
		c = getch();
	while( c != 13) {
		if (c == 80 && b <= 7) {
			if(b == 7)
				b = 0;
			gotoxy(43, y);
    		puts("                             ");
    		gotoxy(43, y+1);
    		puts(" ");
    		gotoxy(70, y+1);
    		puts(" ");
    		gotoxy(43, y+2);
    		puts("                             ");
    		if(b == 0)
				y = 1;
    		gotoxy(43, y+3);
    		puts("============================");
    		gotoxy(43, y+4);
    		puts("|");
    		gotoxy(70, y+4);
    		puts("|");
    		gotoxy(43, y+5);
    		puts("============================");
			b++;
			y += 3;
			gotoxy(0,20);
		}
		if (c == 72 && b >= 1){
			if(b == 1)
				b = 8;
			gotoxy(43, y);
    		puts("                             ");
    		gotoxy(43, y+1);
    		puts(" ");
    		gotoxy(70, y+1);
    		puts(" ");
    		gotoxy(43, y+2);
    		puts("                             ");
    		if(b == 8)
				y = 25;
    		gotoxy(43, y-1);
    		puts("============================");
    		gotoxy(43, y-2);
    		puts("|");
    		gotoxy(70, y-2);
    		puts("|");
    		gotoxy(43, y-3);
    		puts("============================");
			b--;
			y -= 3;
			gotoxy(0,20);
		}
		c = getch();
	}
	if (b == 1) {
		struct lian  * current =  head->next;
		struct lian t;
		int ch = 1 , y=7;
		if ( current == NULL )
		{
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

		while (ch) {
			ch = 0;
			while (current->next != NULL) {
				if ( strcmp (current->item.number , current->next->item.number) > 0)
				{
					t.item = current->item;
					current->item = current->next->item;
					current->next->item = t.item ;
					ch = 1;
				}
				current = current->next ;

			}
			current = head->next ;
		}
		bianli (head);
		cun();
	}
	if (b == 2) {
		system("cls") ;
		addstu (head);
	}
	if (b == 3) cut (head) ;
	if (b == 4) addgra(head);
	if (b == 5) chaxun();
	if (b == 6 && laop == NULL && ban == 0) xiu(NULL) ;
	else if (b == 6)  xiu2();
	if (b == 7) { 
	laop = NULL ; 
	ban = 0;
	return ;
	} 
}
}




