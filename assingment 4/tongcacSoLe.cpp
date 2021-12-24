#include <stdio.h>
int main() {

  int n, sum = 0;
 
  printf("\nNhap vào so nguyên duong n: ");
  scanf("%d", &n);
  
  for(int i = 1; i < n; i +=2){
    
    sum = sum + i;
  }
  
  printf("\nTong cac so le tu 1 den %d là: %d", n, sum);
 
  printf("\n--------------------------------------\n");
  printf("Chuong trình này du?c dang t?i Freetuts.net");
}
