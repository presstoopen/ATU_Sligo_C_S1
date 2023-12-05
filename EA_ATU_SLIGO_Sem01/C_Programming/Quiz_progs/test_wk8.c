#include <stdio.h>

int main (void){
	int num1;
	int num2;
	int mask;
	int result;


	num1 = 0x12345678;
	mask = 0x0000ff00;
	
	result = (num1&mask);
	printf("%x\n", result);

	system ("pause");
	return 0; 

}
