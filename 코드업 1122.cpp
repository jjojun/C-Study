#include<stdio.h>
 int main(void){
    int a, b ;
    scanf("%d",&a);
    b = a/60;
    a = a%60;
    printf("%d %d",b,a);
 	return 0;
}

