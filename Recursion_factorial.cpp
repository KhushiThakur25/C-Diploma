#include<stdio.h>
int fact(int n){
    if ((n == 0) || (n == 1)){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n = 4;
    int result = fact(n);
    printf("%d is the factorial of %d",result,n);
    return 0;
}