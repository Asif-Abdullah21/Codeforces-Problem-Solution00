#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {

        int index;
        scanf("%d", &index);
        int arr[index];
        for (int i = 0; i < index; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < index; i++)
        {
            // int max = arr[i];
            for (int j = i; j < index; j++)

            {
                for (int k = i; k <= j; k++)
                {

                printf("%d ", arr[k]);
                }

            }
        }
        printf("\n");
    }
    return 0;
}
