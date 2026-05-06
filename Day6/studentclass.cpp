#include <iostream>
using namespace std;
class students
{
   
public:
   
    string name;
    int roll_no;

    
    void show()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No" << roll_no << endl;
    }
};
int main()
{
    students s1;
    s1.name = "yashvi";
    s1.roll_no = 27 ;
    s1.show();
    return 0;
}