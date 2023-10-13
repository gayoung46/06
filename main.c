#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if(num ==0 || num == 1)
    { 
           return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
           
int combination(int n, int r)
{
    int div1, div2;
    div1 = factorial(n); //n!
    div2 = factorial(n-r) * factorial(r);
    
    return (div1/div2);
    
}


int main(int argc, char*argv[])
{
    int n,r;
    
    printf("input n : ");
    scanf("%d", &n);
    
    printf("input r : ");
    scanf("%d", &r);
    
    int result = combination(n,r);
    printf("result is %d\n", result);
    
     
  system("PAUSE");	
  return 0;
}
