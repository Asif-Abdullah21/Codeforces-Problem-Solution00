#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        long long a,b,f=0;
        scanf("%lld %lld",&a,&b);
        long long ans = a*b;

        for(long long i=2; i*i<=ans; i++)
        {
            if(ans%i==0)
            {
                f=1;
                break;
            }
        }

       if(ans<=1) printf("0\n");
       else if(f==1) printf("0\n");
        else printf("1\n");
    }


    return 0;
}


