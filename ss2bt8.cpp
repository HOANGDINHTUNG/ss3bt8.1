#include<stdio.h>
int main(){
	int n,a,b,c,d, rev;
	printf("moi nhap vao n : ");
	scanf("%d",&n);
	d=n/1000;
	c=(n%1000)/100;
	b=(n%100)/10;
	a=n%10;
	rev=a*1000+b*100+c*10+d;
	printf("vay so nghich dao cua %d la %d",n, rev);
	return 0;
}
