#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) 
{
    int a = 0, b = 0;
    for (auto ch : bin1) a = a << 1 | ch - 48;
    for (auto ch : bin2) b = b << 1 | ch - 48;

    string ret;
    for (int n = a + b; n; n >>= 1) ret = char(n % 2 + 48) + ret;

    return ret.empty() ? "0" : ret;
}