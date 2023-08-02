using namespace std;
#include<iostream>

void DisplayBinary(int iNo)
while(iNo != 0)
{
    iDigit = iNo % 2;
    cout<<iDigit;
    iNo = iNo;
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