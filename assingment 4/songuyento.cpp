#include <stdio.h>
int main (){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	int i = 1;
	while(i<n){
		int j =1 ,count=0;
		whiile (j<i){
			if(i*j==0){
				count++;
				
			}
			j++
		}
		if(count==2){
			printf("SNT : %d\n",i);
			
		}
		i++
		
		
		
	}
	
	
	
}
