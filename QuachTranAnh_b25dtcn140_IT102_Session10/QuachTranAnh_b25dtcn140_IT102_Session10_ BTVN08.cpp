#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i, k, temp;
    int search_value;
    int arr[100]; 
    int found = 0;
    int left, right, mid = -1; 
    printf("Nhap gioi han mang : ");
   	scanf("%d", &n); 
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vao so can tim: ");
    scanf("%d", &search_value);
    for (i = 0; i < n - 1; i++) {
        for (k = 0; k < n - 1 - i; k++) {
            if (arr[k] > arr[k + 1]) {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    printf("Mang da sap xep la: [");
    for(i=0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("]\n");
    left = 0;
    right = n - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == search_value) {
            found = 1;
            break;
        } else if (arr[mid] < search_value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found) {
        printf("Tim thay phan tu %d tai : %d\n", search_value, mid);
    } else {
        printf("Khong tim thay %d trong mang.\n", search_value);
    }
    return 0;
}

