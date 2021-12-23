#include<stdio.h>
int main (){
	int input,nghichdao,sodu;
	printf("\nNhap vao so nguyen co 4 chu so:");
	scanf("%d",&input);
	
	while(input >0 && input <10000){
		sodu = input % 10;
		nghichdao = nghichdao * 10 + sodu;
		input = input/10;
		
		
		
	}
	printf("\nSo nghich dao cua ban la: %d",nghichdao);
	return 0;
	
	
}
