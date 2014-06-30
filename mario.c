#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Please enter a positive number no greater than 23:  \n");
        height = GetInt();
    }  
    while (height >23 || height < 0); 
    
    int hash = 2;
    int spaces = height -1;  
     
    while (hash <= height + 1)
    {
        for (int i = spaces-1; i >=0; i--)
        {
            printf(" ");
        }
        
        for (int n = 1; n <= hash; n++)
        {
            printf("#");
        }
        
        printf("\n");
        
        spaces = spaces -1;
        hash = hash + 1;
        
    }
}
