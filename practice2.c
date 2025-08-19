#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	int a,b,c,d,e;
	
	printf("Input two integers: ");
	scanf("%i %i", &x, &y);
	
	a = x&y; // 양쪽의 비트를 AND로 해석. 0=False 
	b = x|y; // 양쪽의 비트를 OR로 해석 . 1=True
	c = x^y; // XOR은 배타적 논리합. 즉 다르면 참(1), 같으면 거짓(0). 
	d = x<<1; // 왼쪽으로 1비트씩 이동하면 2배. 
	e = x>>1; // 오른쪽으로 1비트씩 이동하면 1/2배. 
	
	printf("& result is %d\n", a);
	printf("| result is %d\n", b);
	printf("^ result is %d\n", c);
	printf("<< result is %d\n", d);
	printf(">> result is %d\n", e); 
	
	return 0;
}
