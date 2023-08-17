# include <stdio.h>
int nat(int n);

int main(){
    int num;
    printf("Enter the natural number: ");
    scanf("%d", &num);
    printf("Sum = %d", nat(num));
    return 0;
}

int nat(int n){
    if(n != 0)
        return n + nat(n - 1);
    else
        return n;
    
}