#include<stdio.h>
int main(){
	int i,j,k;
	int arr[j];
	int isSwap=0; 
	int temp;
	printf("Gioi han mang: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<j-1;i++){
		for(k=i+1;k<j-1-i;k++){
			if(arr[k]>arr[k+1]){
			temp=arr[k];
			arr[k] = arr[k+1];
			arr[k+1] = temp;
			isSwap = 1;
		}
		}
		if (!isSwap){
			break;
		}
	}
	printf("So phan tu sau sap xep: \n");
	for(i=0;i<j;i++){
		printf("%d\t",arr[i]);
	}
}
