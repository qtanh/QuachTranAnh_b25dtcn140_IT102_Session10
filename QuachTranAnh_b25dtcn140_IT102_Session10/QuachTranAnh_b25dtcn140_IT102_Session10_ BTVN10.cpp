#include<stdio.h>
int main(){
	int i,j,k;
	int temp;
	int found = 0;
	int find = 0;
	int swap = 0;
	int arr[100];
	int lsearch,bsearch;
	int left,right, mid;
	printf("Nhap gioi han: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap vao gia tri can tim: ");
	scanf("%d",&lsearch);
	for(i=0;i<j;i++){
			if(lsearch == arr[i]){
				find = 1;
				printf("Gia tri %d tim thay tai arr{%d}\n",lsearch,i);
				break;
			}
		}
		if(!find){
			printf("Gia tri khong ton tai\n");
	}
	for(i=0;i<j-1;i++){
		for(k=0;k<j-1-i;k++){
			if(arr[k]>arr[k+1]){
			temp=arr[k];
			arr[k]=arr[k+1];
			arr[k+1]=temp;
			swap = 1;
		}
		}
		if(!swap){
			break;
		}
	}
	printf("Mang sau khi da sap xep la: \n");
	for(i=0;i<j;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Nhap phan tu  de tim chi so: ");
	scanf("%d",&bsearch);
	left = 0;
	right = j-1;
	while(left<=right){
		mid=left+(right-left)/2;
		if(arr[mid]==bsearch){
			found = 1;
			break;
		}else if(arr[mid]<bsearch){
			left = mid-1;
		}else{
			right = mid + 1;
		}
	}
	if(found){
		printf("Phan tu %d co chi so %d trong mang",bsearch,mid);
	}else{
		printf("Gia tri khong ton tai");
	}
}
