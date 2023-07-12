#include <stdio.h>
int main() {
    int n=4,a=1;
    int b=n*n-1;
    for(int i=n;i>=1;i--) {
        for(int j=0;j<n-i;j++) {
            printf("--");
        }
        for(int k=0;k<i;k++) {
            printf("%d*",a++);
        }
        for(int l=0;l<i-1;l++) {
            printf("%d*",b++);
        }
        printf("%d",b);
        b = b-2*(i-1);
        printf("\n");
    }
}