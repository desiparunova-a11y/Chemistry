#include <stdio.h>

int main()
{
    int n, max, digit;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n<=0){
        return 0;
    }
    
    digit = n%10;
    max = digit;
    
    while(n>0){
        digit = n%10;
        n = n/10;
        
        if (digit > max){
            max = digit;
        }
        
    }
    

    printf("The max of the digits in your number is: %d", max); //test 5 6 7 8 9

    
    return 2;
}
