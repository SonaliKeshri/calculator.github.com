#include<stdio.h> 
#include<conio.h> 
int main()
{ 
    char a;  
    int n1, n2;   
    float b;  
    printf (" Select an operator (+, -, *, /) to perform an operation in C calculator \n ");  
    scanf ("%c", &a); 
    printf (" Enter the first number: ");  
    scanf(" %d", &n1);
    printf (" Enter the second number: ");  
    scanf (" %d", &n2); 
      
    if (a == '+')  
    {  
        b = n1 + n2; 
        printf (" Addition of %d and %d is: %f", n1, n2, b);  
    }  
      
    else if (a == '-')  
    {  
        b = n1 - n2; 
        printf (" Subtraction of %d and %d is: %f", n1, n2, b);  
    }  
      
    else if (a == '*')  
    {  
        b = n1 * n2; 
        printf (" Multiplication of %d and %d is: %f", n1, n2, b);  
    }  
    else if(a =='/')
    {
        if(n2==0)
        {
            printf("\n Divisor cannot be zero. Please enter another value");
            scanf("%d",&n2);
        }
        b = n1 / n2;
        printf("Division of %d and %d is: %.2f", n1, n2, b);
    }
    else  
    {  
        printf(" \n You have entered wrong inputs ");  
    }  
    return 0;  
}  