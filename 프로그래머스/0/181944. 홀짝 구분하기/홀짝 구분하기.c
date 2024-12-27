#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    //n이 짝수 -> n is even
    //n이 홀수 -> n is odd
    if(a%2 == 0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
    
    return 0;
}