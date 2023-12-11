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
    CandyBar * candy = new CandyBar [3];
    candy->pinpai = "Mocha Munch";
    candy->weight = 3.42;
    candy->Caluli = 233;
    candy[1].pinpai = "afj adn";
    candy[1].weight = 23.4;
    candy[1].Caluli = 234;
    candy[2].pinpai = "Mocha Munch";
    candy[2].weight = 43.1;
    candy[2].Caluli = 542;
    
    
    delete [] candy;
    return 0;
}
