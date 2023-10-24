#include <stdio.h>

int func1(int x){
	x=7;
    return (x+2);
}

int main(void){
	int x = 5;
    int output = 3;

    output = func1(x);
    printf("%d", x);

}
