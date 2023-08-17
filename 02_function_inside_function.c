# include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();
    
    return 0;
}

void goodMorning(){
    printf("Good Morning Vishesh\n");
    goodAfternoon();
    
}

void goodAfternoon(){
    printf("Good Afternoon Vishesh\n");
     goodNight();
}

void goodNight(){
    printf("Good Night Vishesh\n");
}