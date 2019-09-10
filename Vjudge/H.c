#include <stdio.h>
int main()
{
    int x,a,first,last,mid,num;
    scanf("%d",&x);
    if(x<0){
        num=x*-1;
        a=num/10;
        last=num%10;
        first=a/10;
        mid=a%10;
        printf("%d\n%d\n%d\n",first,mid,last);
    }
    else{
        a=x/10;
        last=x%10;
        first=a/10;
        mid=a%10;
        printf("%d\n%d\n%d\n",first,mid,last);
    }
    return 0;
}
