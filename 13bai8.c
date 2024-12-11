#include<stdio.h>

int ucln(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a =temp;
	}
	return a;
}

int main(){
	int n1, n2;
	printf("nhap so nguyen thu nhat: ");
	scanf("%d", &n1);
	printf("nhap so nguyen thu hai: ");
	scanf("%d", &n2);
	int ketqua = ucln(n1,n2);
	printf("%d", ketqua);
	return 0;
}
