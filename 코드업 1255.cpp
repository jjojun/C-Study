#include<stdio.h>
int main(){
	double a, b;
	scanf("%ld %ld", &a, &b);
	for(int i = a; i < b; i+=0.01){
		printf("%ld", i);
	}
}
