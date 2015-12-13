//  Lab IV Part I
//
//  Created by Edgar Esparza on 6/15/15.


// Reverse the digits of a number...123 becomes 321 and 721 becomes 127

#include<iostream>
using namespace std;

int reverse(int);

int main()
{
    int number;
    
    cout<< "Enter a number between 1 and 9999:";
    
    cin>> number;
    
    cout << "Your number reversed is = " << reverse(number) << "\n\n";
    return 0;
}
int reverse (int n)
{
    int reverse=0;
    int divisor=1000;
    int multiplier=1;
    
    while (n>9)
    {
        if (n>= divisor)
        {
            reverse += n /divisor*multiplier;
            n%=divisor;
            divisor/=10;
            multiplier*=10;
        }
        else 
            divisor/=10;
    }
    
    reverse += n * multiplier;
    return reverse;
}
