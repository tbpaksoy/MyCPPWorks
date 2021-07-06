#include <iostream>
#include <ctime>
#include <random>
using namespace std;


const string codesStarstWith = "+905";
const string codes[] =
{
"06","42","03","43","07","01","09","00"
};
int codesLength = sizeof(codes)/sizeof(codes[0]);

string GetRandomPhoneNumber()
{
    string number = codesStarstWith;
    number += codes[rand() % codesLength];
    for (int i = 0; i < 7; i++)
    {
        number += to_string(rand() % 10);
    }
    return number;
}
int main()
{
    srand(time(NULL));
    string numbers[] = {GetRandomPhoneNumber(),GetRandomPhoneNumber(),GetRandomPhoneNumber()};
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        cout << numbers[i] << endl;
    }
    
}