#include <stdio.h>
void swap(int*m,int*n){
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}
int main(){
	int a;
	int b;
	printf("Value of a: \n");
	scanf("%d",&a);
	printf("Value of b:\n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	
}
