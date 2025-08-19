#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z,m;
	int a,b,c;
	x=2;
	z=1;
	a=3;
	b=4;
	c=5;
	
	y = a*x*x + b*x + c; // C언어에서는 x^2가 제곱이 아니라 XOR 비트 연산자로 읽힘. 오류 발생 주의. 
	m = (x+y+z)/3;
	
	printf("y=%d, m=%d", y, m);
	
	return 0;
}
