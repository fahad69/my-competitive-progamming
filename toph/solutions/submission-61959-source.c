#include<stdio.h>
#include<string.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

main()
{
    int x, y, r, j;
    scanf("%d %d", &x, &y);
    r = .5*(y-x);
    printf("%d", r+x);

}

