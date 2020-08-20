//1905622 - NITISH KUMAR SONTHALIA
//INSERTION
#include <stdio.h>

int main()
{
    int i,n,n1;  
 
    printf("Enter the no of value u want to enter: ");
    scanf("%d",&n);
    int a[100];
 
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nElements in array are: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", a[i]);
    }
    
    int s,d;
    printf("Enter position of array you want to insert at: ");
    scanf("%d",&s);
    printf("Enter value to insert: ");
    scanf("%d",&d);
        for ( i = n; i > s; i--)
        {
            a[i]=a[i-1];
        }
        a[s]=d;
        n=n+1; 
     for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}