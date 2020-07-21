#include <stdio.h>

int strlength(char *stg)
{
    int l = 0;
    while (*(stg + l))
        l++;

    return l;
}

int stringcmp(char *str1, char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0' || *str2 == '\0')
            break;
        str1++;
        str2++;
    }

    if (*str1 == *str2)
        return 0;

    else if (*str2 == '\0' || *str1 > *str2)
        return 1;

    else if (*str2 == '\0' || *str1 < *str2)
        return -1;
}

int strcopy(char *str1, char *str2)
{
    int l = 0;

    while (*(str2 + l))
    {
        *str1 = *(str2 + l);
        str1++;
        l++;
    }

    *str1 = '\0';
    return l;
}

int strrev(char *str1)
{
    int len = strlen(str1);
    char *end = str1 + len - 1;
    char *start = str1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return len;
}

main()
{
    int n, caseno = 0, cases, a;
    char st[100], st2[100];
    scanf("%d", &cases);
    while (cases--)
    {
        getchar();
        scanf("%s", st);
        strcopy(st2, st);
        strrev(st);
        if (stringcmp(st2, st) == 0)
            printf("Case %d: Yes\n", ++caseno);
        else
            printf("Case %d: No\n", ++caseno);
    }
}
