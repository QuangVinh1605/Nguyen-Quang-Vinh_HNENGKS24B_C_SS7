#include<stdio.h>
int main(){
	int arr[5]={5,7,11,9,13};
	int count=0;
	printf("cac phan tu chan trong mang la\n"); 
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d\n",arr[i]);
			count++; 
		}
		}if(count==0){
			printf("mang khong co so chan"); 
		} 
	}
	  
	 
