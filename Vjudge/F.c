#include <stdio.h>
int main()
{
    int n=12, i;
    float num[100], sum = 0.0, average;
    for(i = 1; i <= n; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    average = sum / n;
    printf("$%.2f\n", average);
    return 0;
}
