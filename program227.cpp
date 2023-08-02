#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Hexadecimal conversion of :"<<iNo<<"is : "<<"\n";

while(iNo != 0)
{
    iDigit = iNo % 16;
    if(iDigit <= 9)
    {
        cout<<iDigit;
    }
    else
    {
        cout<<Arr[iDigit -10];
    }
    iNo = iNo;
}
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter second number : "<<"\n";
    cin>>iValue2;

    DisplayBinary(iValue);

    return 0;
}