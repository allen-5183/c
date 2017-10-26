#include <stdio.h>
#include <stdlib.h>
#include "c.h"

//﹚竡よ猭 
void function_1a();
void function_2a();
void function_3a();
void ex1();

void main(void)
{
	int input;
	printf("1.  ㄏノ﹚ㄧ计\n");
	printf("2.  刚耎絛ㄒ function_1a, 砞璸dash ㄧ计, 块 output ㄧ计ず甧玡,   50  ˉ-ˇ\n");
	printf("3.  级糶祘Α, 祘Αい﹚竡ㄧ计 calculate(), 璶―ㄏノ块俱计戈, 耞戈琌┪单 60, \n    獽 ¨pass〃 ┪ ¨down〃\n");
	printf("4.  ㄧ计肚\n");
	printf("5.  return痹瓃\n");
	printf("6.  ﹚竡ㄧ计璶―ㄏノ块よ㎝糴, 璸衡ㄤ縩肚倒祘Α\n");
	printf("7.  ﹚竡ㄧ计璶―ㄏノ块, 盢ㄤ荡癸肚块\n");
	printf("8.  ㄧ计肚患把计()\n");
	printf("9.  ㄧ计肚患把计()\n");
	printf("10. ㄧ计肚患把计()\n");
	printf("11. 把酚絛ㄒ function_3c 块 double 疊翴计, 璸衡ㄤミよ㎝块\n");
	printf("12. 办跑计籔跋办跑计()\n");
	printf("13. 办跑计籔跋办跑计()\n");
	printf("14. 办跑计籔跋办跑计()\n");
	printf("15. 刚﹚竡办跑计 num, main ㄧ计い块 num , ㊣ cube ㄧ计璸衡ㄤΩよ肚\n");
	printf("16. 刚﹚竡办跑计, ﹚竡 input ㄧ计, ㄧ计い块赣跑计,  main ㄧ计块\n");
	printf("17. 患癹ㄧ计()\n");
	printf("18. 患癹ㄧ计()\n");
	printf("19. ノ患癹ㄧ计―ㄢ计   gcd(程そ计)\n");
	printf("20. ノ獶患癹ㄧ计―ㄢ计 gcd(程そ计)\n");
	printf("21. 纗摸()\n");
	printf("22. 纗摸()\n");
	printf("23. 纗摸()\n");
	printf("24. ㄏノ场郎跑计: function_6d_1\n");
	printf("----------------------------------\n\n");
	printf("叫块璶磅︽絛ㄒ? ");
	scanf("%d", &input);
	while (getchar() != '\n')
		;
	switch (input)
	{
	case 1:
		function_1a();
		break;
	case 2:
		ex1();
		break;
	case 3:
		ex2();
		break;
	case 4:
		function_2a();
		break;
	case 5:
		function_2b();
		break;
	case 6:
		ex2_1();
		break;
	case 7:
		ex2_2();
		break;
	case 8:
		function_3a();
		break;
	case 9:
		function_3b();
		break;
	case 10:
		function_3c();
		break;
	case 11:
		ex3_1();
		break;
	case 12:
		function_4a();
		break;
	case 13:
		function_4b();
		break;
	case 14:
		function_4c();
		break;
	case 15:
		ex4_1();
		break;
	case 16:
		ex4_2();
		break;
	case 17:
		function_5a();
		break;
	case 18:
		function_5b();
		break;
	case 19:
		ex5_1();
		break;
	case 20:
		ex5_2();
		break;
	case 21:
		function_6a();
		break;
	case 22:
		function_6b();
		break;
	case 23:
		function_6c();
		break;
	case 24:
		function_6d_1();
		break;
	default:
		printf("块计ぃ絛瞅ず!\n");
		break;
	}

	system("pause");

}