#include <stdio.h>
int main() {

  int n, sum = 0;
 
  printf("\nNhap v�o so nguy�n duong n: ");
  scanf("%d", &n);
  
  for(int i = 1; i < n; i +=2){
    
    sum = sum + i;
  }
  
  printf("\nTong cac so le tu 1 den %d l�: %d", n, sum);
 
  printf("\n--------------------------------------\n");
  printf("Chuong tr�nh n�y du?c dang t?i Freetuts.net");
}
