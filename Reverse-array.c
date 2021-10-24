#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=0, d=0, n, *a, *b;
    a=malloc(c*sizeof(int));
    b=malloc(d*sizeof(int));
    printf("\n\nEnter number of elements in array :");
    scanf("%d", &n);
    printf("\n\nEnter %d elements\n", n);

    for(c = 0; c < n; c++)
        scanf("%d", &a[c]);

    for(c = n-1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];

    for(c = 0; c < n; c++)
        a[c] = b[c];

    printf("\n\n Resultant array is: ");
    for(c = 0; c < n; c++)
        printf("\t%d", a[c]);

    return 0;
}
