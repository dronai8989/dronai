//c program to read and print elements in an array
#include<stdio.h>
int main()
{
    int arr[5];
    int i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements in the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n elements in array : ");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}
