#include<iostream>
using namespace std;
int DecToHexDec(int dec, int);
char hexaDecNum[50];
void show(int i);
int main()
{
    string decimalNum; 
    int i;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    int decimalNum1 = stoi(decimalNum);
    i = DecToHexDec(decimalNum1, 0);
    cout<<"\nEquivalent Hexadecimal Value: ";
    show(i);
    return 0;
}
int DecToHexDec(int dec, int i)
{
    int rem;
    while(dec!=0)
    {
        rem = dec%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecNum[i] = rem;
        i++;
        dec = dec/16;
    }
    return i;
}

void show(int i){
    for(i=i-1; i>=0; i--)
        cout<<hexaDecNum[i];
    cout<<endl;
}