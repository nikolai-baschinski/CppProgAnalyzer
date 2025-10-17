#include <numeric>

https://en.cppreference.com/w/cpp/numeric/gcd.html

int main()
{
    constexpr int p{2 * 2 * 3};
    constexpr int q{2 * 3 * 3};
    static_assert(2 * 3 == std::gcd(p, q));
 
    static_assert(std::gcd( 6,  10) == 2);
    static_assert(std::gcd( 6, -10) == 2);
    static_assert(std::gcd(-6, -10) == 2);
 
    static_assert(std::gcd( 24, 0) == 24);
    static_assert(std::gcd(-24, 0) == 24);



    // https://en.cppreference.com/w/cpp/numeric/lcm.html
    constexpr int p{2 * 2 * 3};
    constexpr int q{2 * 3 * 3};
    static_assert(2 * 2 * 3 * 3 == std::lcm(p, q));
    static_assert(225 == std::lcm(45, 75));
 
    static_assert(std::lcm( 6,  10) == 30);
    static_assert(std::lcm( 6, -10) == 30);
    static_assert(std::lcm(-6, -10) == 30);
 
    static_assert(std::lcm( 24, 0) == 0);
    static_assert(std::lcm(-24, 0) == 0);
 
    OUT(lcm(2 * 3, 3 * 4, 4 * 5));
    OUT(lcm(2 * 3 * 4, 3 * 4 * 5, 4 * 5 * 6));
    OUT(lcm(2 * 3 * 4, 3 * 4 * 5, 4 * 5 * 6, 5 * 6 * 7));
}