#include <stdio.h>
#include <conio.h>
void test02(int a); // 한수의 prototype
int test01();

 int test01()
 {
	 char* str[] = {"zero""One","two","three","four","five","six","seven","eight","nine",}; // 문자열 포인터 배열
	 printf("수자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
	 printf("프로그램을 끝내시려면 'q'키를 입력하세요.\n\n");
	 int n = 1;
	 while (n)
	 {
 printf(">");
	 char c = getch(); // no echo : 키값을 출력하지 않고 반환
	 /* char c1 = getchar(); // enter 필요

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

 void test02(int a) //문자열과 문자배열
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

