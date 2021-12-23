#include<stdio.h>
int main(){
	int tk = 4000;
	int ls = 8;
	int i;
	for(i=1;i<=4;i++){
		
		tk = tk + tk*ls/100;
		
	}
	printf("So tien sau 4 nam : %d",tk);
}



