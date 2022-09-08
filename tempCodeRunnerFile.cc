#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

  static int number_of_lines;
  string name_variables;  //signal of CANID
  string canid;           // number of CAN ID
  string canlength;       // length of frame in byte
  static int startbit;    //start bit of canid
  static int length;      // lengthbit of canid
  string scale;           // scale value
  string offset;          // offset value
  string line;

int main () {
  ifstream myfile("CAN_config1.txt");
  if (myfile.is_open())
  {
    while (getline(myfile,line))
    {
      istringstream iss(line);
      if (number_of_lines == 0){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
    }
      else if (number_of_lines == 1){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
      }
      else if (number_of_lines == 2){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
      }
      else if (number_of_lines == 3){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
      }
      else if (number_of_lines == 4){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
      }
      else if (number_of_lines == 5){
      iss >> canid;
      iss >> canlength;
      iss >> name_variables;
      iss >> startbit;
      iss >> length;
      iss >> scale;
      iss >> offset;
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
      }
       else{
            cout << "String not found" << endl;
        }
      ++number_of_lines;
    }
    myfile.close();
  }
  else cout << "Unable to open file";

  return 0;
}

/*void debugprint(){
      cout << "canid: " << canid<< endl; 
      cout << "canlength: " << canlength << endl;
      cout << "name_variables: " << name_variables<< endl;
      cout << "startbit: " << startbit << endl;
      cout << "length: " << length << endl; 
      cout << "scale: " << scale << endl;
      cout << "offset: " << offset << endl;  
}
*/


/* void loaddata(){
      myfile >> canid;
      myfile >> canlength;
      myfile >> name_variables;
      myfile >> startbit;
      myfile >> length;
      myfile >> scale;
      myfile >> offset;
}
*/



