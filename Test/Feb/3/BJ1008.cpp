#include <iostream>

double solution( const short &a, const short &b )
{
    return static_cast<double>( a ) / static_cast<double>( b );
}

int main()
{
    short a = 0;
    short b = 0;
    std::cin >> a >> b;
    printf("%.10lf\n", solution( a, b ) );
    return 0;
}