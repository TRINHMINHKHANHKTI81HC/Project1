#include <iostream>
#include <string>
#include <fstream>
using namespace std;



ifstream in("CAN_config1.txt");
static int number_of_lines;
const int size = 100;
void debugPrint();
void loadData();
int numberoflines();

struct Canconfigure {
    string canId;
    string canLength;
    string name;
    string  startBit;
    string length;
    double scale;
    double offset; 
}canconfigure[number_of_lines];

int main()
    {
    numberoflines();
    cout << canconfigure[0].canId << endl;
    cout << canconfigure[1].canId << endl;
    cout << canconfigure[5].name << endl;
    }

void debugPrint()
{
    for (int i = 0; i < number_of_lines; i++) 
    {
        cout << canconfigure[i].canId << " " ;
        cout << canconfigure[i].canLength << "  " ;
        cout << canconfigure[i].name << " " ;
        cout << canconfigure[i].startBit << "  " ;
        cout << canconfigure[i].length << "  " ;
        cout << canconfigure[i].scale<< "  " ;
        cout << canconfigure[i].offset << "  " ;    
    }
    system("PAUSE");
}

void loadData()
{   
    for (int i = 0; i < number_of_lines; i++)
    {
        if (!in)
        {                                               
            cerr << "File can't be opened! " << endl;
            system("PAUSE");
        }
        in >> canconfigure[i].canId >> canconfigure[i].canLength
        >> canconfigure[i].name >> canconfigure[i].startBit >> canconfigure[i].length >> canconfigure[i].scale >> canconfigure[i].offset;
    }
}

int numberoflines(){
    string line;
    ifstream myfile("CAN_config1.txt");

    if(myfile.is_open()){
        while(getline(myfile,line)){
            number_of_lines++;
        }
        myfile.close();
    }
    return number_of_lines--;
}

