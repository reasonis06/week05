#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	int a,b,c,d,e;
	
	printf("Input two integers: ");
	scanf("%i %i", &x, &y);
	
	a = x&y; // ������ ��Ʈ�� AND�� �ؼ�. 0=False 
	b = x|y; // ������ ��Ʈ�� OR�� �ؼ� . 1=True
	c = x^y; // XOR�� ��Ÿ�� ����. �� �ٸ��� ��(1), ������ ����(0). 
	d = x<<1; // �������� 1��Ʈ�� �̵��ϸ� 2��. 
	e = x>>1; // ���������� 1��Ʈ�� �̵��ϸ� 1/2��. 
	
	printf("& result is %d\n", a);
	printf("| result is %d\n", b);
	printf("^ result is %d\n", c);
	printf("<< result is %d\n", d);
	printf(">> result is %d\n", e); 
	
	return 0;
}
