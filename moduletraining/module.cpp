#include <iostream>
void hello(std::string x) {
    std::cout << "Привет, " << x << std::endl;
}
float power(float number, int stpow) {
    float mult, res;
    int pow;
    mult = number;
    if (stpow > 0 || (stpow) < 0) {
        if (stpow < 0) {
            pow = stpow * -1;
        }
        else
        {
            pow = stpow;
        }
        for (int i = 1; i < pow; i++)
        {
            number *= mult;
        }
        if (stpow > 0)
        {
            res = number;
        }
        else
        {
            res = 1 / number;
        }
    }
    else
    {
        res = 1;
    }
    return res;
}