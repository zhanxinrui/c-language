#include<stdio.h>
#include<math.h>
int main()
{
    double  y,x,pi = 3.1415926 ;
    scanf("%lf",&x);
    if(x<10&&x>0)
    y = 2*cos(x+pi/6);
    else if(x>10&&x<30)
    y = sqrt(4.1+5*pow(x,2));
    else if((x<50&&x>30))
    y = 1.75*(x-3.0)+45;
    else if(x>50||x<0)
    {
    printf("error");
    return 0;
    }
    printf("%lf",y);
    system("pause");  
}
