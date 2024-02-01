#include<iostream>
#include<cmath>
double getDist2D( int aX1, int aY1, int aX2, int aY2 )
{
    int xLen = ( aX1 > aX2 ) ? ( aX1 - aX2 ) : ( aX2 - aX1 );
    int yLen = ( aY1 > aY2 ) ? ( aY1 - aY2 ) : ( aY2 - aY1 );

    double result = sqrt( ( xLen * xLen ) + ( yLen * yLen ) );

    return result;
}

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
        std::cin >> x1 >> y1 >> x2 >> y2;
        
        int circleCount = 0;
        std::cin >> circleCount;
        int result = 0;
        for( int c = 0; c < circleCount; c++ )
        {
            int cx = 0;
            int cy = 0;
            int cr = 0;
            std::cin >> cx >> cy >> cr;
            
            bool bResult = false;
            double dcr = static_cast<double>( cr );
            
            if( dcr > getDist2D( x1, y1, cx, cy ) )
            {
                bResult = !bResult;
            }
            if( dcr > getDist2D( x2, y2, cx, cy ) ) 
            {
                bResult = !bResult;
            }

            if( bResult )
            {
                result++;
            }            
        }
        std::cout << result<<std::endl;

    }
    return 0;
}