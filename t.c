// //Problem 1:

// #include<stdio.h>
// int main()
// {
//     printf("I Love Practice\n");
//     return 0;
// }

// //Problem 2:

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a+b;
//     printf("%d\n",sum);
//     return 0;
// }

// //Problem 3:

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     printf("I Love Practice\n");
//     return 0;
// }



// //Problem 4:

#include<stdio.h>
int main()
{
    int a;
    long long int b;
    double d;
    char ch;

    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%lf",&d);
    getchar();
    scanf("%c",&ch);

    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.2lf\n",d);
    printf("%c\n",ch);
    return 0;
}


