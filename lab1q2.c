#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array");
    scanf("%d", &n);
    int arr[n],prefix[n];
    // input array
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // calculate prefix
    prefix[0] = arr[0];
    for(int i=1;i<=n;i++){
    prefix[i] = prefix[i - 1] + arr[i];
    }
    // outpur array
    for (int i = 0; i <= n; i++)
    {
        printf("the output will be %d", prefix[i]);
    }
    return 0;
}