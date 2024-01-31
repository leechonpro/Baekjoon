
#include <iostream>
#include <cmath>

int main()
{
    int testCase = 0;
    std::cin >> testCase;
    for( int i = 0; i < testCase; i++ )
    {
        int x1 = 0;
        int y1 = 0;
        int x2 = 0;
        int y2 = 0;
        int r1 = 0;
        int r2 = 0;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        double xLen = static_cast<double>( ( x1 > x2 ) ? ( x1 - x2 ) : ( x2 - x1 ) );
        double yLen = static_cast<double>( ( y1 > y2 ) ? ( y1 - y2 ) : ( y2 - y1 ) );
        double dist = sqrt( ( xLen * xLen ) + ( yLen * yLen ) );
        double dr1 = static_cast<double>( ( r1 > r2 ) ? r1 : r2);
        double dr2 = static_cast<double>( ( r1 < r2 ) ? r1 : r2 );
        int result = 0;

        // -1 case
        if( ( 0 == xLen ) && ( 0 == yLen ) && ( r1 == r2 ) )
        {
            printf("-1\n" );
        }
        
        // In circle case
        else if( dist > dr1 )
        {
            if( ( dr1 + dr2 ) == dist )
            {
                printf("1\n" );
            }
            else if( ( dr1 + dr2 ) > dist )
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            if( ( dist + dr2 ) == dr1 )
            {
                printf("1\n");
            }
            else if ( ( dist + dr2 ) > dr1 )
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }
}