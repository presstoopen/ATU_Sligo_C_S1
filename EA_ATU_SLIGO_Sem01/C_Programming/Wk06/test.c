#include <stdio.h>

int main(void){
	int i;
	int num = 5;
	int store = 1;
	
	for(i=num;i>=1;i--){
		store = (store*i);
	}
	printf("%d", store);
}
