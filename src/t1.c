#include <stdio.h>
int main()
{
    double l, s, v; //змінні для перевірки
    int r = 6; //змінна радіусу
    char f[] = "v"; //Змінна для перевірки
    l = s = v = 0; 
    if (f[0] == 'l') //Якщо значення l
    {
        l = 3.14 * r * 2;  
    }
    if (f[0] == 's') //Якщо значення s
    {
        s = r * r * 3.14;
    }
    if (f[0] == 'v') //Якщо значення v
    {
        v = (r * r * r * 4 * 3.14) / 3;
    }
}
