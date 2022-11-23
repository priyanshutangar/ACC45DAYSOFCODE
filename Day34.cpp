#include<stdio.h>
int main()
{
    int n, remainder, reverse=0;
    printf("Enter a number to be reversed: ");
    scanf("%d", &n); //123

    while(n!=0) //123 ,,,, 12 ,,,, 1
    {
        remainder= n%10; //123%10=3<--remainder ,,,, 12%10=2 ,,,1%10=1
        reverse = reverse*10 + remainder; //3 ,,,, 3*10+ 2 =32 ,,,, 32*10 + 1 =321
        n=n/10; //123/10=12<--quotient ,,,,12/10=1 ,,,, 1/10=0
    }
    printf("The reversed number is: %d", reverse);   //321
    return 0;
}
