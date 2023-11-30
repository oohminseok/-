#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    std::vector<int> v;
    std::string temp;
    int answer = 0;
    for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ')
		{
			if (temp.size() == 0)
			{
				continue;
			}
			else
			{
				v.push_back(std::stoi(temp));
				temp.clear();

			}
		}
		else if (s[i] == 'Z')
		{
			v.pop_back();
		}
		else
		{
			temp += s[i];
		}
	}

	if (temp.size() > 0)
	{
		v.push_back(std::stoi(temp));
		for (int i = 0; i < v.size(); ++i)
		{
			answer += v[i];
		}
	}
    else
    {
        for (int i = 0; i < v.size(); ++i)
		{
			answer += v[i];
		}
    }
    
    
    return answer;
}