#include <string>
#include <vector>

using namespace std;
std::vector<std::pair<std::string, char>> morse{ {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},{"." ,'e'},{"..-.",'f'},
	{"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
	{"--",'m'},{"-." ,'n'},{"---",'o'},{".--.", 'p'},{"--.-",'q' }, {".-.",'r' },
	{ "..." ,'s' }, { "-",'t' }, { "..-",'u' }, { "...-",'v' }, {".--",'w'}, {"-..-",'x'},
	{ "-.--",'y' }, { "--..",'z' } };

string solution(string letter) 
{
    letter+=' ';
    std::string answer = "";
	std::string temp;
	for (auto& e : letter)
	{
		if (e == ' ')
		{
			for (auto& w : morse)
			{
				if (temp == w.first)
				{
					answer += w.second;
					temp.clear();
					break;
				}
			}
		}
		else
		{
			temp += e;
		}
	}

    return answer;
}