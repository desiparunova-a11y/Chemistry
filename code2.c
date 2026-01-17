#include <stdio.h>

int main()
{
    int m, n, digit;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n<=0){
        return 0;
    }
    
    m = 0;
    
    while (n>0){
        digit = n%10;
        
        if (digit%2==0){
            m = m*10 + digit;
        }
        
        n = n/10;
    }
    
    if (m==0){
        printf("No prime digits were found in your number");
    }else{
        printf("The number m is: %d", m);
    }
    
    return 0;
}
