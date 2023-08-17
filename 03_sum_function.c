# include <stdio.h>
// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration 

int main(){
    int C;
    C = sum(2, 5); // function call
    printf("The value of C is %d\n", C);
    return 0;
}

int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}