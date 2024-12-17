int is_power_of_2(unsigned int n) //you can either use this way 
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

//or

int is_power_of_2(unsigned int n) //this way
{
    return (n && !(n & (n - 1)));
}

// example
// if n = 16
// n - 1 = 15
// use bitwise operator & 
// 10000
// 01111
// ------
// 00000

// it means that 16 is power of 2

// if n = 0
// just return 0
