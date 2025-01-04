void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int tmp;
    while ((size - 1) > i)
    {
        if (tab[i] > tab [i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
// #include <stdio.h>

// int main(void)
// {
//     int tab[] = {1, 8, 77, 68, 42, 16, 2, 6};
//     sort_int_tab(tab, 8);
//     int i = 0;
//     while (i < 8)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }
