#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdint>
using namespace std;

  static int number_of_lines;
  string name_variables;  //signal of CANID
  string canid;           // number of CAN ID
  uint16_t canlength;       // length of frame in byte
  uint8_t startbit;    //start bit of canid
  uint16_t length;      // lengthbit of canid
  double scale;           // scale value
  double offset;          // offset value
  string line;

int main () {
  ifstream myfile("CAN_config1.txt");
  if (myfile.is_open())
  {
    while (getline(myfile,line))
    {
      istringstream iss(line);
      if (number_of_lines == 0){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl;  
    }
      else if (number_of_lines == 1){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl; 
      }
      else if (number_of_lines == 2){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl; 
      }
      else if (number_of_lines == 3){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl; 
      }
      else if (number_of_lines == 4){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl; 
      }
      else if (number_of_lines == 5){
      iss >> canid >> canlength >> name_variables >> startbit >> length >> scale >> offset;
      cout << canid << " " << canlength << " " << name_variables << " " << startbit << " " << length << " " << scale << " " << offset << " " << endl; 
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



