#include <stdio.h>
#include <conio.h>

 int main()
 {
	 printf("���� Ű�� �Է��ϼ���. �ش��ϴ� ���ܾ �˷��帮�ڽ��ϴ�.\n");
	 printf("���α׷��� �����÷��� 'q'Ű�� �Է��ϼ���.\n\n");
	 int n = 1;
	 while (n)
	 {
 printf(">");
	 char c = getch(); // no echo : Ű���� ������� �ʰ� ��ȯ
	 // char c1 = getchar(); // enter �ʿ�

	 switch (c)
	 {
	 case '1': printf("%c : One\n", c); break;

	 case '2': printf("%c : One\n", c); break;

	 case '3': printf("%c : One\n", c); break;
		 case 'q' break;
		 case 'Q': n = 0;  break;

	 }
	 
	 } // 0x20 16���� ǥ��� �빮�ڴ� �ҹ��ڵ� �� �ҹ��ڷ� ��ȯ
	
 }