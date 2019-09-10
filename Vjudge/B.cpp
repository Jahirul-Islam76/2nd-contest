#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=1 && x<=3)    printf("Initial\n");
    if(x>=4 && x<=6)    printf("Average\n");
    if(x>=7 && x<=9)    printf("Sufficient\n");
    if(x>=10 && x<=12)  printf("High\n");
    return 0;
}
