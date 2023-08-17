# include <stdio.h>
int factorial(int x);

int main(){
    int a = 4;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){ // by defination factorial 0 is also 1
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}