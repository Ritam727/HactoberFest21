#include <stdio.h>
int main() {
    int T,i,n;
    long long x,y,t,Fib[61];
    scanf("%d",&T);
    x = 0;
    y = 1;
    for(i=0; i<=61; i++)
    {
        if(i==0)
        {
            Fib[i] = 0;
        }
        else if(i==1)
        {
            Fib[i] = 1;
        }
        else
        {
            t = x + y;
            Fib[i] = t;
            x = y;
            y = t;
        }
    }
    while(T--)
    {
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,Fib[n]);
    }
    return 0;
}