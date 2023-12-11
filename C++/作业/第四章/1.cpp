#include <iostream>

struct report
{
    char fname[20];
    char lname[20];
    char grade;
    int age;
};

int main()
{
    using namespace std;
    report * ps = new report;
    cout << "What is your first name ? ";
    cin.getline(ps->fname, 20);
    cout << "What is your last name ? ";
    cin.getline(ps->lname, 20);
    cout << "What letter grade do you deserve? ";
    cin >> ps->grade;
    cout << "What is your age? ";
    cin >> ps->age;
    cout << "Name: " << (*ps).lname << "," << ps->fname << endl;
    cout << "Grade: " << char(ps->grade + 1) << endl;
    cout << "Age: " << ps->age << endl;
}
