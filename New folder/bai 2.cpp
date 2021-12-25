#include<iostream>
using namespace std;
void reverseArray(int ary[]){
	int sizeOfArray = sizeof(ary);
	for (int i=0;i<sizeOfArray;i){
		if(i<sizeOfArray-(i+1)){
			int temp = ary[i];
			ary[i]= ary[sizeOfArray-(i+1)];
			ary[sizeOfArray - (i+1)] = temp;
			
		}else
		{
			break;
		}
	}

	
	
}

int main(){
	int arr [] = {10,20,30,40,50,60};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	cout << " The size of the array is :" << arrSize;
	return 0;
	
}
