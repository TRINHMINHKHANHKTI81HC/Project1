#include <iostream>
#include <string>
#include <fstream>
using namespace std;

static int number_of_lines;
int numberoflines();
int main(){
    const int SIZE = 6;
    int i;
    struct Canconfigure {
        string name_variables;
        string canid;
        string canlength;       // length of frame in byte
        string startbit;    //start bit of canid
        string length;      // lengthbit of canid
        double scale;           // scale value
        double offset;
    }canconfigure[SIZE];

    ifstream in("CAN_config1.txt");

    if (!in){
    cerr << "File can't be opened! " << endl;
    system("PAUSE");
    exit(1);
    }
    for (int i=0; i < SIZE; i++){
    in >> canconfigure[i].canid >> canconfigure[i].canlength >> canconfigure[i].name_variables >> canconfigure[i].startbit >> canconfigure[i].length >> canconfigure[i].scale >>canconfigure[i].offset;
    }
    for (int i=0;i< SIZE;i++) {
        cout << canconfigure[i].canid << " ";
        cout << canconfigure[i].canlength << " ";
        cout << canconfigure[i].name_variables<<" ";
        cout << canconfigure[i].startbit << " ";
        cout << canconfigure[i].length << " " ;
        cout << canconfigure[i].scale <<" ";
        cout << canconfigure[i].offset <<" " << endl ;
    } 
        cout << canconfigure[0].canid << endl;
        cout << canconfigure[0].canlength << endl;
        cout << canconfigure[1].name_variables << endl;
        cout << canconfigure[1].startbit << endl;
        numberoflines();
        cout << "The number of lines is: " << number_of_lines << endl;
return 0;
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

