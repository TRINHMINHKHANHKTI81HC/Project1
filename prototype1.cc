#include <iostream>
#include <string>
#include <fstream>
using namespace std;



ifstream in("file.txt");
const int SIZE = 15;
void debugPrint();
void loadData();

struct Records {
    string firstname;
    string secondname;
    float test1mark;
    float midtestmark;
    float annualmark;   
}record[SIZE];

int main()
    {
    loadData();
    debugPrint();
    }

void debugPrint()
{
    for (int i = 0; i < SIZE; i++) 
    {
        cout << record[i].firstname << "  ";
        cout << record[i].secondname << " ";
        cout << record[i].test1mark << "  ";
        cout << record[i].midtestmark << "  ";
        cout << record[i].annualmark << "  " <<endl;        
    }
    system("PAUSE");
}

void loadData()
{   
    for (int i = 0; i < SIZE; i++)
    {
        if (!in)
        {                                               
            cerr << "File can't be opened! " << endl;
            system("PAUSE");
        }

        in >> record[i].firstname >> record[i].secondname
        >> record[i].test1mark >> record[i].midtestmark >> record[i].annualmark;
    }
}