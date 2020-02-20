#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

char opening(char c)
{
    return c == ')' ? '(' : '[';
}

bool valid(string line)
{
    stack<char> ans;
    char c;
    for (int i = 0; i < line.length(); i++)
    {
        c = line[i];
        if (c == '(' || c == '[')
        {
            ans.push(c);
        }
        else if (c == ')' || c == ']')
        {
            if (ans.top() == opening(c))
                ans.pop();
            else
                return false;
        }
    }
    return ans.empty();
}

int main(int argc, char *argv[])
{
    string line;
    while (getline(cin, line))
    {
        cout << (valid(line) ? "Yes" : "No") << endl;
    }
    return 0;
}