#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) 
{
    if(A==B)
    {
        return 0;
    }
    else
    {
        int number=0;
        while(number<=B.size())
        {
            ++number;
            std::string temp{};
            temp+=A[A.size()-1];
            for(int i=0; i<A.size()-1; ++i)
            {
                temp+=A[i];
            }
            A=temp;
            if(temp==B)
            {
                return number;
            }
        }
    }
    
    return -1;
}