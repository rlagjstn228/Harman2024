#include <stdio.h>
#include <conio.h>

 int main()
 {
	 char* str[] = {"zero""One","two","three","four","five","six","seven","eight","nine",}; // ���ڿ� ������ �迭
	 printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
	 printf("���α׷��� �����÷��� 'q'Ű�� �Է��ϼ���.\n\n");
	 int n = 1;
	 while (n)
	 {
 printf(">");
	 char c = getch(); // no echo : Ű���� ������� �ʰ� ��ȯ
	 /* char c1 = getchar(); // enter �ʿ�

	 switch (c)
	 {
	 case '1': printf("%c : One\n", c); break;

	 case '2': printf("%c : One\n", c); break;

	 case '3': printf("%c : One\n", c); break;
		 case 'q' break;
		 case 'Q': n = 0;  break; 
*/
	 //int m = c - 0x30;


	 printf("%c : %s\n", c, str[c - 0x30])
	 }
	 

	 }
	
 }
 