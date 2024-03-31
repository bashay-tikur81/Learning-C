#include<stdio.h>
#define DELAY 128000000

struct mytime{
    int seconds;
    int minutes;
    int hours;
};

void display(struct mytime *s);
void update(struct mytime *m);
void delay(void);

int main(int argc, char **argv){
    struct mytime day;
    day.hours = 0;
    day.minutes = 0;
    day.seconds = 0;

    for (;;){
	update(&day);
	display(&day);
    }
}

void update(struct mytime *t){
    t -> seconds++;
    if(t->seconds == 60){
	t->seconds = 0;
	t->minutes++;
    }
    if(t->minutes == 60){
	t->minutes = 0;
	t->hours++;
    }
    if(t->hours == 24){
	t->hours = 0;
	delay();
    }
}
void display(struct mytime *t){
    printf("%02d:",t->hours);
    printf("%02d:",t->minutes);
    printf("%02d\n",t->seconds);
    delay();
}
void delay(void){
    long int t;
    for(t = 1; t < DELAY;++t);
}
