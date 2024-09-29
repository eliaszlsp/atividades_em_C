#include <stdio.h>
#include <windows.h>

void setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main(void)
{
    int c;
    for (c = 0; c < 15; c++)
    {
        setColor(c);
        printf("Cor %d\n", c);
    }
    return 0;
}
