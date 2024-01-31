#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<std::pair<int,int>> pairVec;
    pairVec.push_back( std::make_pair(1,0) );
    pairVec.push_back( std::make_pair(0,1) );
    int testCase = 0;
    int size = 1;

    std::cin >> testCase;
    for( int i = 0; i < testCase; i++ )
    {
        int num = 0;
        std::cin >> num;

        for( int j = size + 1; j <= num; j++ )
        {
            pairVec.push_back( std::make_pair( ( pairVec[j-2].first + pairVec[j-1].first ) , ( pairVec[j-2].second + pairVec[j-1].second ) ) );
        }
        
        size = num > size ? num : size;
        printf("%d %d\n", pairVec[num].first, pairVec[num].second );
    }
    return 0;
}


