#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	//1. 4로 나누어 떨어져야함
	// 2. 100으로 나누어 떨어지지않아야함 
	//3. 위를 만족 안해도 400으로 나누어 떨어짐 
	
	int a;
	printf("input a year : ");
	scanf("%i",&a);
	 
	 
	if((a%4==0  && a%100 != 0) || (a&400 ==0 )) {
		printf("%i is leap year.\n",a);
		
	}
	else{
		printf("%i is not leap year.\n",a);
	}
	
	return 0;
}
