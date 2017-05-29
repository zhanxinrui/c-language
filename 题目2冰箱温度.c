#include<stdio.h>
int main()
{
    float t,T,hour,minutes;
    scanf("%f %f",&hour,&minutes);
    t = hour+minutes/60;
    
    T = 4*t*t/(t+2)-20;
    printf("%f",T);
    system("pause"); 

}
