#include <iostream>
#include <string>
#include <fstream>
using namespace std;


static int number_of_lines;
ifstream in("CAN_config1.txt");
const int SIZE = 6;
void debugPrint();
void loadData();
int numberoflines();

struct Canconfigure {
    string name_variables;
    string canid;
    string canlength;       
    string startbit;    
    string length;      
    double scale;          
    double offset;
}canconfigure[SIZE];

int main()
    {
    loadData();
    debugPrint();
    numberoflines();
    cout << canconfigure[0].canid << endl;
    cout << canconfigure[0].canlength << endl;
    cout << canconfigure[1].name_variables << endl;
    cout << canconfigure[1].startbit << endl;
    cout << "The number of lines is: " << number_of_lines << endl;
    return 0;
    }

void debugPrint()
{
    for (int i = 0; i < SIZE; i++) 
    {
        cout << canconfigure[i].canid << " ";
        cout << canconfigure[i].canlength << " ";
        cout << canconfigure[i].name_variables<<" ";
        cout << canconfigure[i].startbit << " ";
        cout << canconfigure[i].length << " " ;
        cout << canconfigure[i].scale <<" ";
        cout << canconfigure[i].offset <<" " << endl ;
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
        in >> canconfigure[i].canid >> canconfigure[i].canlength >> canconfigure[i].name_variables >> canconfigure[i].startbit >> canconfigure[i].length >> canconfigure[i].scale >>canconfigure[i].offset;
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
    return number_of_lines;
}


