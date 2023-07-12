#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the rows:");
    scanf("%d",&a);
    printf("Enter the columns:");
    scanf("%d",&b);
    int ab = numberOfPaths(a,b);
    printf("The Ans is: %d",ab);
}
int numberOfPaths(int m, int n) {
    if (m == 1 || n == 1)
        return 1;
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
}