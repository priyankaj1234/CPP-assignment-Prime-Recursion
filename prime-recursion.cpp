#include<iostream>
using namespace std;

int prime(int,int);

int main()
{
    int num;
    cout<<endl<<"Enter a number : ";
    cin>>num;

    if(prime(2,num)==0)
        cout<<endl<<num<<" is a prime number.";
    else
    cout<<endl<<num<<" is not a prime number."; 
}

int prime(int i, int num)
{
    if(num==i)
        return 0;
    else if(num%i==0)
        return 1;
    else
        return prime(i+1,num);
}