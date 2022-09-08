#include <iostream>
#include <string>
#include <fstream>
using namespace std;



ifstream in("can.txt");

const int size = 15;
void debugPrint();
void loadData();

struct Records {
    int canId;
    int canLength;
    string name;
    int  startBit;
    uint length;
    double scale;
    double offset; 
    bool isBigendian;
}record[size];

int main()
    {
    loadData();
    debugPrint();
    cout << size;
    }

void debugPrint()
{
    for (int i = 0; i < size; i++) 
    {
        cout << record[i].canId<< " ";
        cout << record[i].canLength << "  ";
        cout << record[i].name << " ";
        cout << record[i].startBit << "  ";
        cout << record[i].length << "  ";
        cout << record[i].scale<< "  ";
        cout << record[i].offset << "  ";
        cout << record[i].isBigendian << "  " <<endl;       
    }
    system("PAUSE");
}

void loadData()
{   
    for (int i = 0; i < size; i++)
    {
        if (!in)
        {                                               
            cerr << "File can't be opened! " << endl;
            system("PAUSE");
        }

        in >> record[i].canId >> record[i].canLength
        >> record[i].name >> record[i].startBit >> record[i].length >> record[i].scale >> record[i].offset >> record[i].isBigendian;
    }
}



/*void bool_tra_ve(){
    if(record[i].isBigendian == 1){

    }
    if(record[i].isBigendian == 0){
        
    }
}
*/ 