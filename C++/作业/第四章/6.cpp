#include <iostream>

using namespace std;

struct CandyBar
{
    char pinpai[20];
    double weight;
    int Caluli;
};

int main( )
{
    
    CandyBar snack[3] =
    {
        {
            "Mocha Munch",
            2.3,
            350,
            
        },
        {
            "cnajkn cnkd",
            4.5,
            290,
        },
        {
            "cnjka ancj",
            3.2,
            932,
        },
    };
    
    cout << "snack's pinpai is " << snack[0].pinpai << "." << endl;
    cout << "snack's weight is " << snack[0].weight << "." << endl;
    cout << "snack's Caluli is " << snack[0].Caluli << "." << endl;
    
    cout << "snack's pinpai is " << snack[1].pinpai << "." << endl;
    cout << "snack's weight is " << snack[1].weight << "." << endl;
    cout << "snack's Caluli is " << snack[1].Caluli << "." << endl;
    
    cout << "snack's pinpai is " << snack[2].pinpai << "." << endl;
    cout << "snack's weight is " << snack[2].weight << "." << endl;
    cout << "snack's Caluli is " << snack[2].Caluli << "." << endl;
    
    return 0;
}
