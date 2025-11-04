#include<stdio.h>
int main(){
	int i,j,search;
	int arr[j];
	int isExit=0; 
	printf("Gioi han mang: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap so can tim: ");
	scanf("%d",&search);
	for(i=0;i<j;i++){
		if(search==arr[i]){
			isExit = 1;
			printf("So %d tim thay o vi tri arr[%d]",arr[i],i);
			break;
		}	
		}
		if(!isExit){
			printf("Khong tim thay %d",search);
		}
	}
	


