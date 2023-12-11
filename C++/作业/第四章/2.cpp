#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char * name = new char [20];
    char * dessert = new char [20];
    
    cout << "Enter your name:\n";
    cin.getline(name, 20);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, 20);
    cout << "I have some delicious " <<  dessert << " for you, " <<  name << ".\n";

    delete [] name;
    delete [] dessert;
    return 0;
}
