#include <stdio.h>
int main ()
{
    int first,second,sum,sub,multi,mod;
    float div;
    printf("Enter an integer : ");
    scanf("%d %d",&first,&second);
    sum = first+second;
    sub = first-second;
    multi = first*second;
    div = (float) first/second;
    mod = first%second;
    
    printf("Addition : %d\n",sum);
    printf("Subtraction : %d\n",sub);
    printf("Multiplication : %d\n",multi);
    printf("Division : %.2f\n",div);
    printf("Modulus : %d\n",mod);
    return 0;

}