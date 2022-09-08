#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>
using namespace std;

static int number_of_lines;
int numberoflines();
void debugPrint();
void loadData();
const int size = 1000;


struct Canconfigure {
    string canId;
    string canLength;
    string name;
    uint16_t  startBit;
    uint16_t length;
    double scale;
    double offset; 
}canconfigure[size];


int main()
    {
    numberoflines();
    loadData();
    debugPrint();
    cout << " The number of lines is: " << number_of_lines << endl;
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
    return number_of_lines;
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

void debugPrint()
{
    for (int i = 0; i < number_of_lines; i++) 
    {
        cout << canconfigure[i].canId<< " ";
        cout << canconfigure[i].canLength << "  ";
        cout << canconfigure[i].name << " ";
        cout << canconfigure[i].startBit << "  ";
        cout << canconfigure[i].length << "  ";
        cout << canconfigure[i].scale<< "  ";
        cout << canconfigure[i].offset << "  " << endl;    
    }
    system("PAUSE");
}

