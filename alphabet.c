#include <stdio.h>
int main()
{
    char ch,num;
    printf("Enter values : ");
    scanf("%c %c",&ch,&num);
    if((ch>=97&&num<=122)||(ch>=65&&num<=90))
    {
        printf("ALPHABET");
    }
    else 
    {
        printf("NUMERIC");
    }
    return 0;
}
