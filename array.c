// c program to find sum of all elements
#include<stdio.h>
int main()
{
    int arr[2];
    int i,n,sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter %d elements in the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {

        sum = sum + arr[i];
    }
    printf("Sum of all elements of array : %d\n ", sum);
    return 0;
}
