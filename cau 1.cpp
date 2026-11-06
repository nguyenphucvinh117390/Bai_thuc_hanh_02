#include <stdio.h>
#include <stdlib.h>
void nhap(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
} 
void in(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
} 
int main() {
    int *a;
    int n; 
    printf("Nhap so phan tu: "); 
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    nhap(a, n);
    printf("Mang vua nhap: ");
    in(a, n);
    free(a);
    a = NULL; 
    return 0;
}
