#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    int a,mid,last,first;
    a=x/10;
    last=x%10;
    first=a/10;
    mid=a%10;
    printf("%d\n",first*mid*last);
    return 0;
}
