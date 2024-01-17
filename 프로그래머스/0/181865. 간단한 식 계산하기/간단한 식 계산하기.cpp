#include <string>
#include <vector>

using namespace std;

int solution(string binomial) 
{
    std::vector<int> v;
    std::string number{};
    char temp{};
    
    for(auto&e:binomial)
    {
        if(e=='+'||e=='-'||e=='*')
        {
            v.push_back(std::stoi(number));
            number.clear();
            temp=e;
            continue;
        }
        number+=e;
    }
     v.push_back(std::stoi(number));
    
    if(temp=='+')
    {
        return v[0]+v[1];
    }
    else if(temp=='-')
    {
        return v[0]-v[1];
    }
    else
    {
        return v[0]*v[1];
    }
    
}