#include <iostream>
#include <string>

using namespace std;

class Occurence
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++)
        {
            if (haystack.substr(i, m) == needle)
                return i;
        }

        return -1;
    }
};

int main()
{
    Occurence obj;

    string haystack = "hello";
    string needle = "ll";

    cout << obj.strStr(haystack, needle);

    return 0;
}