#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    if(n%2==0)
    {
        std::cout<<n<<" is even";
    }
    else
    {
        std::cout<<n<<" is odd";
    }
    
    return 0;
}