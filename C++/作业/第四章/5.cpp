#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string pinpai;
    double weight;
    int Caluli;
};

int main( )
{
    
    CandyBar snack = 
    {
        "Mocha Munch",
        2.3,
        350,
        
    };
    
    cout << "snack's pinpai is " << snack.pinpai << endl;
    cout << "snack's weight is " << snack.weight << endl;
    cout << "snack's Caluli is " << snack.Caluli << endl;
    
    return 0;
}
