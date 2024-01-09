#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int number1=0;
    int number2=0;
    
    for(int i=0; i<num_list.size(); ++i)
    {
        if((i+1)%2==1)
        {
            number1+=num_list[i];
        }
        else if((i+1)%2==0)
        {
            number2+=num_list[i];
        }
    }
     
    return std::max(number1,number2);
}