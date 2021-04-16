/*
Упражнение 2.10. Напишите функцию lower, которая переводит большие буквы в малые, 
используя условное выражение (а не конструкцию if-else). 
*/
#include <stdio.h>

/* lower: преобразование c в строчную, только для ASCII */
int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? 
        (c + 'a' - 'A') : c;    
}

int main()
{
    int c; 
    while ((c = getchar()) != EOF)
        putchar(lower(c));
}
