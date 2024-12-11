#include <stdio.h>
void matran(int hang, int cot, int arr[hang][cot]){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            printf("nhap phan tu: ");
            scanf("%d", &arr[i][j]);
        }
    }
}
void hienthi(int hang, int cot, int arr[hang][cot]){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            printf("%d ", arr[i][j]);
        }
    }
}
int main() {
    int hang, cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int arr[hang][cot];
    matran(hang, cot, arr);
    printf("Ma tran da tao:\n");
    hienthi(hang, cot, arr);




    return 0;
}

