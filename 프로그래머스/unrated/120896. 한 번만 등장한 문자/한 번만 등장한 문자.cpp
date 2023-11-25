#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    std::string answer;
	for (char ascii = 'a'; ascii <='z'; ++ascii)
	{
		int count = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (ascii == s[i])
			{
				++count;
			}
		}
		if (count == 1)
		{
			answer += ascii;
		}
	}
	std::sort(answer.begin(), answer.end());

    return answer;
}