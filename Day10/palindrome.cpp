#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

class String
{
public:
    bool palindrome(string str)
    {
        int i = 0;
        int j = str.length() - 1;

        while (i < j)
        {
            // Skip non-alphanumeric characters
            while (i < j && !isalnum(str[i]))
            {
                i++;
            }

            while (i < j && !isalnum(str[j]))
            {
                j--;
            }

            // Compare characters ignoring case
            if (tolower(str[i]) != tolower(str[j]))
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};

int main()
{
    String s1;

    string str = "A man, a plan, a canal: Panama";

    if (s1.palindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}