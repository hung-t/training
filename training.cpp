#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char xau[100][100];
char strA[100], strB[100], res[100];

void backtracking(int pos, int size)
{
    if (strA[pos] != strB[pos])
    {
        res[pos] = ((strA[pos] < strB[pos]) ? strA[pos] : strB[pos]);
        if (pos == size)
        {
            bool check = 1;
            int t = 0;
            for (int i = 0; i < size; i++)
            {
                if (res[i] == 'A')
                    t = 0;
                else
                    t++;
                if (t == 3)
                    check = 0;
            }
            if (check)
                printf("%s\n", res);
        }
        else
            backtracking(pos + 1, size);
        res[pos] = ((strA[pos] < strB[pos]) ? strB[pos] : strA[pos]);
        if (pos == size)
        {
            bool check = 1;
            int t = 0;
            for (int i = 0; i < size; i++)
            {
                if (res[i] == 'A')
                    t = 0;
                else
                    t++;
                if (t == 3)
                    check = 0;
            }
            if (check)
                printf("%s\n", res);
        }
        else
            backtracking(pos + 1, size);
    }
    else
    {
        res[pos] = strB[pos];
        if (pos == size)
        {
            bool check = 1;
            int t = 0;
            for (int i = 0; i < size; i++)
            {
                if (res[i] == 'A')
                    t = 0;
                else
                    t++;
                if (t == 3)
                    check = 0;
            }
            if (check)
                printf("%s\n", res);
        }
        else
            backtracking(pos + 1, size);
    }
}

main()
{
    int so;
    scanf("%s %s", strA, strB);
    backtracking(0, strlen(strA));
}