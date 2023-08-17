# include <stdio.h>
void display(); // Function prototype

int main(){
    display();
    int a;
    printf("Initializing display function\n");
    display(); // Function call
    printf("display function finised its work\n");
    return 0;
}

// Function definition

void display(){
    printf("This is display\n");
}