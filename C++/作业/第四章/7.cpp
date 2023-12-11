#include <iostream>

using namespace std;

struct pizza
{
    char company[20];
    double zhijing;
    double weight;
};

int main( )
{
    pizza usr_pizza;
    
    cout << "Enter the name of your pizza's company : " << endl;
    cin.getline(usr_pizza.company,20);
    cout << "Enter the name of your pizza's 直径 : " << endl;
    cin >> usr_pizza.zhijing;
    cout << "Enter the name of your pizza's 重量 : " << endl;
    cin >> usr_pizza.weight;
    
    cout << "Your pizza's company : " << usr_pizza.company <<endl;
    cout << "Your pizza's zhijing : " << usr_pizza.zhijing <<endl;
    cout << "Your pizza's weight : " << usr_pizza.weight <<endl;
    
    return 0;
}
