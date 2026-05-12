#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class String
{
public:
    void reverseString(vector<char>& s)
    {
        int n = s.size();

        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
    }
};

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    String str;

    str.reverseString(s);

    for (char ch : s)
    {
        cout << ch << " ";
    }

    return 0;
}