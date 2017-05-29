#include<stdio.h>
int main()
{
    int side1,side2,hypotense;
    int m,n;
    scanf("%d %d",&m,&n );
     
    side1 = m*m-n*n;
    side2 = 2*m*n;
    hypotense = m*m+n*n;
    printf("%d %d %d",side1,side2,hypotense);   
    system("pause");  
    
}

