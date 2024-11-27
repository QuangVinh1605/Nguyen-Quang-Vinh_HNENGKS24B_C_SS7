#include<stdio.h>
int main(){
	int arr[5]={12,16,45,79,84};
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max=arr[i]; 
		}
	} 
	for(int i=1;i<5;i++){
		if(arr[i]<min){
			min=arr[i]; 
		} 
	}
	printf("phan tu lon nhat trong mang la: %d\n",max);
	printf("phan tu nho nhat trongmag la: %d\n",min); 
} 
