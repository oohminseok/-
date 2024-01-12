#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) 
{
    if(arr1.size()<arr2.size())
    {
        return -1;
    }
    else if(arr1.size()>arr2.size())
    {
        return 1;   
    }
    else
    {
        int number1=0;
        int number2=0;
        
        for(int i=0; i<arr1.size(); ++i)
        {
            number1+=arr1[i];
            number2+=arr2[i];
        }
        
        if(number1>number2)
        {
            return 1;
        }
        else if(number1<number2)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}