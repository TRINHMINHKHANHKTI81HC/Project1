#include <iostream>
#include <fstream>
using namespace std;

static int number_of_lines = 0;
int numberoflines();


struct Record{
  string name_variables;  //signal of CANID
  string canid;           // number of CAN ID
  string canlength;       // length of frame in byte
  static int startbit;    //start bit of canid
  static int length;      // lengthbit of canid
  string scale;           // scale value
  string offset;          // offset value
  string line;
}record;


int main(){
    numberoflines();
    cout << "number of lines is " << number_of_lines << endl;
}

int numberoflines(){
    string line;
    ifstream myfile("CAN_config1.txt");
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            number_of_lines++;
        }
        myfile.close();
    }
    return number_of_lines;
}

