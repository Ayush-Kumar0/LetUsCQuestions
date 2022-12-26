/*
    You can modify x0 and y0.
*/
const int x0 = 70, y0 = 5;

/*
    Do not modify from here
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int arr[][4] = {{1, 4, 15, 7},
                {8, 10, 2, 11},
                {14, 3, 6, 13},
                {12, 9, 5, 0}};
void gotoxy(short, short);
int getkey(void);

void clrscr(void);
void defPrint(void);
void count(int, int);

// Scan-Codes
#define U 72
#define L 75
#define R 77
#define D 80

int main(void)
{
    defPrint();

    int x = 17 + x0, y = 14 + y0;
    int m = x - x0 - 2, n = y - y0 - 2; // 15 , 12
    count(x + 2, y);
    int key = getkey(), num = 0;

    int i, j;
    while (1)
    {
        // key = getkey();

        // Getting valid KEY
        if ((m > 0 && m < 15) && (n > 0 && n < 12))
        {
            while (key != L && key != R && key != U && key != D)
                key = getkey();
        }
        else
        {
            if (m == 0 && n == 0) // top-left
            {
                while (key != R && key != D)
                    key = getkey();
            }
            else if (m == 0 && n == 12) // bottom-left
            {
                while (key != R && key != U)
                    key = getkey();
            }
            else if (m == 15 && n == 0) // top-right
            {
                while (key != D && key != L)
                    key = getkey();
            }
            else if (m == 15 && n == 12) // bottom-right
            {
                while (key != L && key != U)
                    key = getkey();
            }
            else if (m == 0) // left column
            {
                while (key != R && key != D && key != U)
                    key = getkey();
            }
            else if (n == 0) // top row
            {
                while (key != L && key != R && key != D)
                    key = getkey();
            }
            else if (m == 15) // right column
            {
                while (key != L && key != U && key != D)
                    key = getkey();
            }
            else if (n == 12) // bottom row
            {
                while (key != L && key != R && key != U)
                    key = getkey();
            }
        }

        count(x, y);
        gotoxy(x, y);

        // Down
        if (key == U)
        {
            n = n - 4;
            num = arr[n / 4][m / 5];
            arr[n / 4 + 1][m / 5] = num;
            printf("%d ", num);
            y = y - 4;
        }

        // Right
        if (key == L)
        {
            m = m - 5;
            num = arr[n / 4][m / 5];
            arr[n / 4][m / 5 + 1] = num;
            printf("%d ", num);
            x = x - 5;
        }

        // Up
        if (key == D)
        {
            n = n + 4;
            num = arr[n / 4][m / 5];
            arr[n / 4 - 1][m / 5] = num;
            printf("%d ", num);
            y = y + 4;
        }

        // Left
        if (key == R)
        {
            m = m + 5;
            num = arr[n / 4][m / 5];
            arr[n / 4][m / 5 - 1] = num;
            printf("%d ", num);
            x = x + 5;
        }

        gotoxy(x, y);
        printf("  ");
        arr[n / 4][m / 5] = 0;
        key = 0;
    }

    gotoxy(0 + 2, 17 + y0);
    return 0;
}

void gotoxy(short col, short row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(h, position);
}

int getkey(void)
{
    int ch;
    ch = getch();
    // if (ch == 0)
    // {
    //     ch = getch();
    //     return ch;
    // }
    return ch;
}

void clrscr(void)
{
    int i, j;
    for (i = 0; i < 180; i++)
        for (j = 0; j < 10; j++)
        {
            gotoxy(i, j);
            printf(" ");
        }
    gotoxy(x0 + 4, 0);
    printf("!!! Puzzle !!!");
    gotoxy(x0 - 8, 1);
    printf("Arrange numbers from 1 to 15 to WIN.....");
    gotoxy(0, 2);
    printf("Use arrow keys...");
    gotoxy(0, 3);
    printf("Use minimum chances.");
}

void defPrint(void)
{
    clrscr();

    int i, j;
    for (i = x0; i <= 20 + x0; i++)
        for (j = y0; j <= 16 + y0; j++)
        {
            gotoxy(i, j);
            if ((i - x0) % 5 == 0)
            {
                printf("|");
                continue;
            }
            if ((j - y0) % 4 == 0)
            {
                printf("-");
                continue;
            }
        }

    for (i = x0; i <= 20 + x0; i++)
        for (j = y0; j <= 16 + y0; j++)
        {
            gotoxy(i, j);
            int m = (i - 2 - x0);
            int n = (j - 2 - y0);
            if (m % 5 == 0 && n % 4 == 0)
            {
                int num = arr[n / 4][m / 5];
                // if (num / 10 == 0)
                // gotoxy(i + 1, j);
                printf("%d", num);
            }
        }

    gotoxy(17 + x0, 14 + y0);
    printf("  ");
    // gotoxy(0 + 2, 17 + y0);
}

void count(int x, int y)
{
    static int cnt = 0;
    gotoxy(0, 4);
    printf("Times: %d           ", cnt++);
    gotoxy(x, y);
}