#include<stdio.h>
int main(){
	int i,j,k;
	int arr[k];
	int swap=0;
	int temp;
	int left,right,mid = -1;
	int search;
	int found = 0;
	printf("Gioi han mang: ");
	scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap vao ma san pham can tim: ");
	scanf("%d",&search);
	for(i = 0;i<k-1;i++){
		for(j=0;j
		<k-1-i;j++){
			if(arr[j]>arr[j+1]){
			temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1] = temp;
			swap = 1;
		}
		}
		if(!swap){
			break;
		}
	}
	left = 0;
	right = k-1;
	while(left<=right){
		mid = left+(right-left)/2;
		if(arr[mid]==search){
			found = 1;
			break;
		}else if(arr[mid]<search){
			left = mid +1;
		}else{
			right = mid - 1;
		}
	}
	if(found){
		printf("Gia san pham ma id %d la: %d",search,arr[i]);
	}else{
		printf("San pham khong ton tai");
	}
	printf("\n");
	printf("Danh sach san pham sau sap xep: \n");
	for(i=0;i<k;i++){
		printf("%d\t",arr[i]);
	}
}
