#include<iostream>
using namespace std;
int DecToHexDec(string dec, int);
char hexaDecNum[50];
int main()
{
    string decimalNum;
    int i;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    i = DecToHexDec(decimalNum, 0);
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecNum[i];
    cout<<endl;
    return 0;
}
int DecToHexDec(string dec, int i)
{
    int rem;
    int dec1 = stoi(dec);
    while(dec1!=0)
    {
        rem = dec1%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecNum[i] = rem;
        i++;
        dec1 = dec1/16;
    }
    return i;
}