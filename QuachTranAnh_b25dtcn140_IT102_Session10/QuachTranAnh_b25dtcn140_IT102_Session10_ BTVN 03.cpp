#include<stdio.h>
int main(){
	int i,j,search;
	int arr[j];
	int isExit=0; 
	int count = 0;
	printf("Gioi han mang: ");
	scanf("%d",&j);
	for(i=0;i<j;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap vao so: ");
	scanf("%d",&search);
	for(i=0;i<j;i++){
		if(search==arr[i]){
		isExit = 1;
		count++;
	}
	if(!isExit){
		printf("So khong ton tai");
		break;
	}
	}
	printf("So lan lap lai : %d",count);
}
