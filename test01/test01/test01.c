#include <stdio.h>
#include <conio.h>

 int main()
 {
	 printf("수자 키를 입력하세요. 해당하는 영단어를 알려드리겠습니다.\n");
	 printf("프로그램을 끝내시려면 'q'키를 입력하세요.\n\n");
	 int n = 1;
	 while (n)
	 {
 printf(">");
	 char c = getch(); // no echo : 키값을 출력하지 않고 반환
	 // char c1 = getchar(); // enter 필요

	 switch (c)
	 {
	 case '1': printf("%c : One\n", c); break;

	 case '2': printf("%c : One\n", c); break;

	 case '3': printf("%c : One\n", c); break;
		 case 'q' break;
		 case 'Q': n = 0;  break;

	 }
	 
	 } // 0x20 16진수 표기법 대문자는 소문자든 다 소문자로 변환
	
 }