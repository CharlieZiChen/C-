#include <iostream>
#include <string>

int main( )
{
    using namespace std;
    string first_name , last_name , full_name;
    
    cout << "Enter your first name: " << endl;
    getline(cin,last_name);
    cout << "Enter your last name: " << endl;
    getline(cin, first_name);
    full_name = last_name + "," + first_name;
    cout << "Here's the information in a single string: " << full_name << endl;
    
    return 0;
}
