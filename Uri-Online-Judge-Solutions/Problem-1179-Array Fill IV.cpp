#include <stdio.h>
int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,l=0,m=0,x=0,n,p,Even[5],Odd[5],List[15];
    for(b=0; b<15; b++)
        scanf("%d", &List[b]);
    for(a=0; a<15; a++)
    {
        if(l==5)
        {
            for(n=0; n<5; n++)
                printf("impar[%d] = %d\n", n, Odd[n]);
            l=0;
        }
        if(m==5)
        {
            for(p=0; p<5; p++)
                printf("par[%d] = %d\n", p, Even[p]);
            m=0;
        }
        if(List[a]%2!=0)
        {
            Odd[c]=List[a];
            ++c;
            l++;
            if(c==5) c=0;
        }
        if(List[a]%2==0)
        {
            Even[x]=List[a];
            ++x;
            m++;
            if(x==5) x=0;
        }
    }
    for(i=0; i<l; i++)
            printf("impar[%d] = %d\n", i, Odd[i]);
    for(j=0; j<m; j++)
            printf("par[%d] = %d\n", j, Even[j]);
    return 0;
}