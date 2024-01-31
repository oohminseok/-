#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); ++i)
    {
        if (std::isupper(str[i]))
        {
           str[i]=std::tolower(str[i]);
        }
        else
        {
            str[i]=std::toupper(str[i]);
        }
    }
    
    std::cout<<str;
    return 0;
}