#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,first,last,mid,num;
    cin>>x;
    if(x<1){
        num=x*-1;
        a=num/10;
        last=num%10;
        first=a/10;
        mid=a%10;
        cout<<first<<"\n"<<mid<<"\n"<<last<<endl;
    }
    else{
        a=x/10;
        last=x%10;
        first=a/10;
        mid=a%10;
        cout<<first<<"\n"<<mid<<"\n"<<last<<endl;
    }
    return 0;
}
