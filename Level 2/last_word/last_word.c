#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
            i++;
        i--; // you are at the end of the last word here, after skipping the null terminator
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--; // skip spaces and tabs 
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i--;
        i++; // you are at the beginning of the last word here 
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t')) // now you can print the last word 
        {
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
