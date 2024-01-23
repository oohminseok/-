#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    string str;
    int n;
    cin >> str >> n;
    
    while(n!=0)
    {
        std::cout<<str;
        --n;
    }
    return 0;
}