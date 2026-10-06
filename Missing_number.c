#include <stdio.h>

int main()
{
    int n, i, sum = 0, missing;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    missing = n * (n + 1) / 2 - sum;

    printf("Missing number = %d", missing);

    return 0;
}
