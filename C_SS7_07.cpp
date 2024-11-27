#include <stdio.h>

int main() {
    int n;

    printf("nhap phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        int temp;
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &temp);
        while (temp % 2 == 0) {
            printf("phan tu phai la so le: ");
            scanf("%d", &temp);
        }
        arr[i] = temp;
    }

    printf("mang cac so le: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

