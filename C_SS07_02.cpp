#include<stdio.h>
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		printf("moi ban nhap vao so thu %d:",i+1);
		scanf("%d",&arr[i]); 
	} 
	for(int i=0;i<5;i++){
		printf("phan tu thu %d la: %d\n",i+1,arr[i] ); 
	} 
} 
