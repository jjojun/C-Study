#include<stdio.h>
int main() {
	char a;
	int b;
	char c;
	double d;
	scanf_s("%s %d %c %f", &a, &b, &c, &d);
	printf("%s\n", a);
	printf("%d\n", b);
	printf("%c\n", c);
	printf("%f\n", d);
}