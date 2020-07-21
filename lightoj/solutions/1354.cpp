#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ff(int a)
{
    int sum = 0, i = 1, x;
    while (a)
    {
        x = a % 2;
        sum = sum + x * i;
        i = i * 10;
        a = a / 2;
    }

    return sum;
}

int main()
{
    int cs, csn = 0;
    scanf("%d", &cs);
    while (cs--)
    {
        char str[80];
        scanf("%s", str);
        char str2[80];
        scanf("%s", str2);

        const char s[2] = ".";
        char *token;
        char *token2;

        char pp[4][100];
        char pp2[4][100];

        /* get the first token */
        token = strtok(str, s);

        int i = 0;
        /* walk through other tokens */
        while (token != NULL)
        {
            sscanf(token, "%s", pp[i]);
            i++;

            token = strtok(NULL, s);
        }

        token2 = strtok(str2, s);

        i = 0;

        while (token2 != NULL)
        {
            sscanf(token2, "%s", pp2[i]);
            i++;

            token2 = strtok(NULL, s);
        }

        int c = 0;
        int a1[5], a2[5];
        for (i = 0; i < 4; i++)
        {
            a1[i] = atoi(pp[i]);
            a2[i] = atoi(pp2[i]);

            //itoa(a1[i] , pp[i], 2);
            a1[i] = ff(a1[i]);

            if (a1[i] == a2[i])
                c++;
        }

        if (c == 4)
            printf("Case %d: Yes\n", ++csn);
        else
            printf("Case %d: No\n", ++csn);
    }

    return (0);
}
