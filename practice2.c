#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int year;
	int answer;
	
	printf("Input the year: ");
	scanf("%d", &year);
	
	answer = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0); // ������ �������°�? => ������ ������ % ���. 
	
	printf("Is the year %d the leap year? %d", year, answer); // True = 1, False = 0
	
	return 0;
}
