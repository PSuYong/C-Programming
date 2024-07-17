#include <stdio.h>
#include <math.h>

int main() {

	const double PI = 3.141592653589793238462643383279502884;
	double guess = 0.0;

	printf("Input PI : ");
	scanf_s("%lf",&guess);

	//while (guess != PI) {
	while(fabs(PI - guess) > 0.01){
		printf("Try Again! : ");
		scanf_s("%lf", &guess);
	}

	printf("Good!");

	return 0;
}

//int main() {
//	int d1 = 0;
//	char ch=0;
//
//	printf("Enter the Number : ");
//	scanf_s("%d", &d1);
//	printf("Number is %d", d1);
//	//scanf_s("%c", &ch,sizeof(ch));
//	//printf("Number is %c", ch);
//
//	return 0;
//
//}
//// 여기서 우리는 %d를 입력받을때 숫자 이외의 것을 넣으면 0으로 인식한다.

//int main() {
//
//	int d1,d2=0;
//	char ch=0;
//	
//
//	printf("Enter an Integer(q to quit) : ");
//
//	while (scanf_s("%d",&d1) == 1) {
//
//	/*	if (d1 == 'q') {
//			break;
//		}*/
//
//
//			d2 = d2 + d1;
//			printf("Enter Next Integer(q to quit) : ");
//		
//	}
//	printf("Sum = %d", d2);
//	
//
//	return 0;
//}







//int main() {
//
//	int num1 = 7;
//	double num2 = 0.1;
//
//	int* ptr1;
//	double* ptr2;
//
//	ptr1 = &num1;
//	ptr2 = &num2;
//
//	*(ptr1) += 1000;
//	*(ptr2) += 1000;
//
//	printf("%p\n",ptr1);
//	printf("%p\n", ptr2);
//
//	printf("%p\n", &num1);
//	printf("%p\n", &num2);
//
//	printf("%d\n", num1);
//	printf("%f\n", num2);
//
//	//int * p1;
//	//double * p2;
//
//	//printf("쓰레기 값 1 : %#x\n", p1);
//	//printf("쓰레기 값 2 : %#x\n", p2);
//
//	//printf("정수 값 1 : %d\n", *p1);
//	//printf("실수 값 2 : %f\n", *p2);
//
//	//*p1 = 25;
//	//*p2 = 3.14;
//
//	//printf("정수 값 1 : %d\n", *p1);
//	//printf("실수 값 2 : %f\n", *p2);
//	//return 0;
//}