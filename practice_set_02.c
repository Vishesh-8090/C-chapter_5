# include <stdio.h>
float far(float c);

int main(){
    int c;
    printf("Enter the temperature (in celcius)\n");
    scanf("%d", &c);
    printf("The value of the temperature in farenheit is %f\n", far(c));
    return 0;
}

float far(float c){
    float result;
    result = (c * 9/5) + 32;
    return result;
}