/* strlen: возвращает длину строки s */
int strlen(char s[])
{
    int i;
    //Изменения ветки Мэйн_2
    //добавочное
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
