#include <stdio.h>
#include <conio.h>
void test02(int a); // �Ѽ��� prototype
int test01();

 int test01()
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
	 //int m = 0x30+@ - 0x30;


	 printf("%c : %s\n", c, str[c - '0']);
	 }
	 

	 }

 main()
 {
	 //test01();
	 test02(1);
 }

 void test02(int a) //���ڿ��� ���ڹ迭
 {
	 char ca[] = "Hello"; // ca[0] : 'H'...ca[4] : 'o' ca[5]:\0
	 int i;
	 for (int i = 0; i < 10; i++) // 0 ~ 5 
	 {
		 printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]);
	 }

	 ca[2] -= 1;
	 ca[3] -= 1;	
	 for (int i = 0; i < 10; i++) // 0 ~ 5 
	 {
		 printf("ca[%d] : %c (%02x)\n", i, ca[i], ca[i]);
	 }

 }

