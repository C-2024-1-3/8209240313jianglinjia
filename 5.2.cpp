#include <iostream>
#include"student.h"
using namespace std;
void Student::display()
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout <<"sex:" << sex << endl;
}
void Student:: set_value()
{
    num = 0; sex = 'm';
    for (int i = 0; i < 20; i++)
    {
        name[i] = '/n';
    }
}
int main()
{
    Student stud;
    Student stud1(007, "tcg", 'm');
    stud.set_value();
    stud1.set_value();
    stud.display();
    stud.display();
    stud1.display();
    return 0;
}