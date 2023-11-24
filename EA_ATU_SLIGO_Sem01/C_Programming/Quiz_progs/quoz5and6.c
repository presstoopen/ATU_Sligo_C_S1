#include <stdio.h>

int main (void) {
	int i;
    int num =5;
    int store = 1;

    for (i = num; i>=0; i--){
	store = (store*i);
}


	printf("factor %d is %d\n", num, store);

system("pause");
return 0;
}
