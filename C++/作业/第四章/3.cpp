#include <iostream>
#include <cstring>

int main( )
{
    using namespace std;
    const int Arsize = 20;
    char fname[Arsize];
    char lname[Arsize];
    char name[2*Arsize];
    
    cout << "Enter your first name: ";
    cin.getline(fname, Arsize);
    cout << "Enter your last name: ";
    cin.getline(lname, Arsize);
    strcpy(name, lname);
    strcat(name, ", ");
    strcat(name, fname);
    cout << "Here's the information in a single string: "
    << name << endl;
    
    return 0;
}
