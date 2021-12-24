#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
    int s = 1,i=1;
	
	while(i<=n){
		s=s+1/i;
		i++;
		
	}
	printf("s= %d",s);
}
