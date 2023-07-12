// a boy enters a stationary shop. there are n number of pencils and m number of erasers in the shop. but, the boy's mother insists that he can buy only p number of pencils and e number of erasers. the task is here to find the number of ways the boy can choose p pencils and e erasers from the available n and m pencil and erasers.

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int ab = fact(a)/fact(a-b)*fact(b);
    printf("%d",ab);
}
int fact(n) {
    if(n==0) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}