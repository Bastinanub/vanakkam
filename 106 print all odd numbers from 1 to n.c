#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i, n;
    
    /* Input upper limit from user */
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
