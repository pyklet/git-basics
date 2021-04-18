/* strlen: возвращает длину строки s */
int strlen(char s[])
{
    int i;
    //Изменения ветки Мэйн
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
