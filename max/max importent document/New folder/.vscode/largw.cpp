#include<stdio.h>

int main()
{
   
    int a[50], size, i, big, small;

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\nEnter the %d elements of the array: \n\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    big = a[0]; 

   
    for(i = 1; i < size; i++)
    {
        if(big < a[i])   
        {
            big = a[i]; 
        }
    }
    printf("\n\nThe largest element is: %d", big);

    small = a[0];   
   
    
    for(i = 1; i < size; i++)
    {
        if(small>a[i])   
        {
            small = a[i];   
        }
    }
    printf("\n\nThe smallest element is: %d", small);
    
    return 0;
}