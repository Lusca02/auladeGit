#include <stdio.h>

int fatorial (int n){
    if (n == 0 ){
        return 1;
    }else{
        return n*fatorial(n - 1);
    }
}
int main(){
    printf("Hello Git\n");
    printf("fatorial (5) + %i/n", fatorial(5));
}