/* a robot wants to move in a cave grid of size m*n. the robot can move only right side or downwards. find how many number of possible ways are gave to reach the destination. 
sample1, sample2
1 - if two rows and two columns -> ans: 2
2 - if 5 rows and 5 columns -> ans: 70*/

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

/* OR 
#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int am = RM(0,0,n-1,m-1);
    printf("%d",am);
}
int RM(int cr, int cc, int dr, int dc) {
    if(cr > dr || cc > dc) {
        return 0;
    }
    else if(cr==dr && cc==dc) {
        return 1;
    }
    else {
        return RM(cr,cc+1,dr,dc) + RM(cr+1,cc,dr,dc);
    }
}*/