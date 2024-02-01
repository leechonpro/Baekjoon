#include <iostream>
#include <vector>
int Calculate( std::vector<std::vector<int>> &aTechVec, std::vector<int> &aTimeVec, int aTarget )
{
    int max = 0;
    size_t size = aTechVec[aTarget].size();
    

    for( size_t i = 0; i < size; i++ )
    {
        int result = Calculate( aTechVec, aTimeVec, aTechVec[aTarget][i] );
        max = ( max > result ) ? max : result;
    }

    int result = max + aTimeVec[aTarget];
    aTimeVec[aTarget] = result;
    aTechVec[aTarget].clear();
    return result;

}
int main()
{
    int T = 0;
    std::cin >> T;

    for( int i = 0; i < T; i++ )
    {
        int N = 0;
        int K = 0;
        std::cin >> N >> K;
        std::vector<int> time( N );
        std::vector<std::vector<int>> tech( N );
        std::vector<int> result( N );


        for( int j = 0; j < N; j++ )
        {
            std::cin >> time[j];
        }

        for( int j = 0; j < K; j++ )
        {
            int src = 0;
            int dest = 0;
            std::cin >> src >> dest;
            tech[dest-1].push_back( src - 1 );
        }

        int W = 0;
        std::cin >> W;

        printf( "%d\n", Calculate( tech, time, W - 1 ) );
    }
    return 0;    
}
