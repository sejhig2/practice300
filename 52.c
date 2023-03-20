#include <stdio.h>
#include <conio.h>

int print(char *string);


int main(void)
{
    print("This is a putch fuction!"_);

    return 0;
}

int print(char * string)
{
    int len = 0;

    while(*string !=(char)NULL)
    {
        putch(*string);
        string++;
        len++;
    }

    putch('\\r');
    putch('\n');

    return len;
}