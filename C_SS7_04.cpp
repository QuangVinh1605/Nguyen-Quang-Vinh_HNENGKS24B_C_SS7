#include<stdio.h>
int main(){
	int num_arr; 
	printf("moi ban nhap vao so luong phan tu trong mang");
	scanf("%d",&num_arr);
	int arr[num_arr]; 
	printf("mang co %d phan tu\n",num_arr);
	for(int i=0;i<num_arr;i++){
		printf("moi ban nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	} 
	 
} 
