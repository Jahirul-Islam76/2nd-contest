#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,first,last;
    cin>>x;
    a=x/10;            // a     = 328/10 = 32
    last=x%10;         // last  = 328/10 =  8
    first=a/10;        // first = 32/10  =  3
    if(first>last)      cout<<first<<endl;
    else if(last>first) cout<<last<<endl;
    else                cout<<"="<<endl;
    return 0;
}
