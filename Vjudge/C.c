#include <stdio.h>
int main()
{
    int x,a,first,last;
    scanf("%d",&x);
    a=x/10;            // a     = 328/10 = 32
    last=x%10;         // last  = 328/10 =  8
    first=a/10;        // first = 32/10  =  3
    if(first>last){
        printf("%d\n",first);
    }
    else if(last>first){
        printf("%d\n",last);
    }
    else{
        printf("=\n");
    }
    return 0;
}
