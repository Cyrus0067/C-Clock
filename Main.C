/* C Program to design a digital clock */
#include <stdio.h>
#include <time.h> //for sleep () finction
#include <unistd.h>
#include <stdlib.h>

int main()
{
int hour ,minute,second;
hour=minute=second=0;
while(1)
{
    //clear output screen
    system("clear");
    //print time in hour:minute:second format
    printf(%02d:%02d:%02d",hour,minute,second);
}
    
}