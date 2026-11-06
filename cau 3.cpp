#include <stdio.h>
#include <string.h>
typedef struct {
    char hoten[50];
    int masv;
    float d1, d2, d3; 
}data;

void nhapmang(data *a, int n) {
    for(int i = 0; i < n; i++) {
       printf("Sinh vien thu %d\n", i+1);
       printf("Ho ten: ");
       scanf(" %[^\n]", a[i].hoten);
       printf("Ma sv: ");
       scanf("%d",&a[i].masv);
       printf("Diem 1: ");
       scanf("%f",&a[i].d1);
       printf("Diem 2: ");
       scanf("%f",&a[i].d2);
       printf("Diem 3: ");
       scanf("%f",&a[i].d3);
    } 
} 

void inmang(data *p, int n) {
    int i;
    printf("Danh sach sv= \n");
    for(i=0;i<n;i++){
        printf("Ho ten: %s", a[i].hoten);
        printf("Ma sv: %d", a[i].masv); 
        printf("Diem 1: %f", a[i].d1); 
        printf("Diem 2: %f", a[i].d2); 
        printf("Diem 3: %f", a[i].d3); 
    } 
} 

int main() {
    data *a; 
    int n;
        printf("Danh sach sinh vien\n");
        scanf("%d\n", n);
        a = (data *)malloc(n*sizeof(data));
        if(a==NULL){
            printf("khong du bo nho");
            return 1; 
        } 
        nhap(a,n); 
        inmang(a, n);
        free(a);
        a=NULL; 
    } 
}
