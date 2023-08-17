# include <stdio.h>
int fib(int);

int main(){
    int n, result;
    printf("Enter the nth number\n");
    scanf("%d", &n);
    result = fib(n);
    printf("The %dth number in the Fibonacci series is %d\n", n, result);
    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (fib(n - 1) + fib(n - 2));
    }
}