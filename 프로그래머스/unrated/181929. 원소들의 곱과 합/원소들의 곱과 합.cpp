#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int number1 = 1;
    int number2 = 0;
    
    for(auto&e:num_list)
    {
        number1*=e;
        number2+=e;
    }
    
    if(number1<number2*number2)
    {
        return 1;
    }
    
    return 0;
}