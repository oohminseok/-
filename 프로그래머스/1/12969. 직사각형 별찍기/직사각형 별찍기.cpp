#include <iostream>

using namespace std;

int main(void) 
{
    int a;
    int b;
    cin >> a >> b;
    
    for(int i=1; i<=b; ++i)
    {
        for(int j=1; j<=a; ++j)
        {
             cout << '*';
        }
        std::cout<<'\n';
    }

    return 0;
}