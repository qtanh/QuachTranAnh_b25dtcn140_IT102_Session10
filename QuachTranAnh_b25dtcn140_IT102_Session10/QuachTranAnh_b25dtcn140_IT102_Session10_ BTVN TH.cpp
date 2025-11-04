#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,i,j,k,temp;
	int arr[100];
	int swap = 0;
	printf("Nhap so phan tu: ");
	scanf("%d",&j);
	do{
		printf("------Quan ly danh sach so nguyen------\n");
		printf("1.Them phan tu vao vi tri bat ky\n");
		printf("2.Xoa phan tu o vi tri bat ky\n");
		printf("3.Cap nhat gia tri tai vi tri bat ky\n");
		printf("4.Tim kiem phan tu trong mang\n");
		printf("5.Hien thi mang\n");
		printf("6.Sap xep mang\n");
		printf("7.Thoat chuong trinh\n");
		printf("Nhap vao lua chon cua ban: ");
		scanf("%d",&a);
		switch(a){
			case 1:
				printf("Chon vi tri phan tu muon them: ");
				scanf("%d",&i);
				printf("Vua chon arr[%d] hay nhap gia tri: ",i);
				scanf("%d",&arr[i]);
				break;
			case 2:
				printf("Chon vi tri muon xoa(0 de xoa): ");
				scanf("%d",&i);
				printf("Vua chon arr[%d] hay nhap gia tri: ",i);
				scanf("%d",&arr[i]);
				break;
			case 3:
				printf("Chon vi tri muon cap nhat: ");
				scanf("%d",&i);
				printf("Vua chon arr[%d] hay nhap gia tri: ",i);
				scanf("%d",&arr[i]);
				break;
			case 4:
				printf("Chon vi tri tim kiem: ");
				scanf("%d",&i);
				printf("Vua chon arr[%d] gia tri cua no la: %d",i,arr[i]);
				break;
			case 5:
				printf("Cac mang: \n");
				for(i = 0;i<j;i++){
				printf("arr[%d] = %d",i,arr[i]);
				break;
			case 6:
				for(i=0;i<j-1;i++){
					for(k=i+1;k<j-1-i;k++){
						if(arr[k]>arr[k+1]){
							temp = arr[k];
							arr[k]=arr[k+1];
							arr[k+1]=temp;
							swap = 1;
						}
					}
					if(!swap){
						break;
					}
				}
				printf("Mang da sap xep: \n");
				for(i=0;i<j;i++){
					printf("%d",arr[i]);
				}
				break;
			case 7:
				printf("Thanks for using");
				exit(0);
				break;
		}
	}
	}while(1);
	}

