#include <iostream>
#include <array>

using namespace std;

int main( )
{
    array <float,3> chengji;
    
    cout << "Enter your paobu chengji (1): " << endl;
    cin >> chengji[0];
    cout << "Enter your paobu chengji (2): " << endl;
    cin >> chengji[1];
    cout << "Enter your paobu chengji (3): " << endl;
    cin >> chengji[2];
    
    float aver_chengji = (chengji[0]+chengji[1]+chengji[2])/3;
    cout << "your average chengji is : " << aver_chengji << endl;
    
    return 0;
    
}
