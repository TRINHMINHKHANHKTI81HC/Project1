#include <iostream>
#include <string>
#include <fstream>
using namespace std;



ifstream myfile("CAN_config1.txt");
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
};

int main()
    {
    numberoflines();
    struct Canconfigure canconfigure[number_of_lines];
    cout << number_of_lines;
    debugPrint();
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


/*void loadData()
{   
    for (int i = 0; i < number_of_lines; i++)
    {
        if (!myfile)
        {                                               
            cerr << "File can't be opened! " << endl;
            system("PAUSE");
        }
        myfile >> canconfigure[i].canId >> canconfigure[i].canLength
        >> canconfigure[i].name >> canconfigure[i].startBit >> canconfigure[i].length >> canconfigure[i].scale >> canconfigure[i].offset;
    }
}
*/

int numberoflines(){
    string line;
    if(myfile.is_open()){
        while(getline(myfile,line)){
            number_of_lines++;
        }
        myfile.close();
    }
    return number_of_lines;
}

