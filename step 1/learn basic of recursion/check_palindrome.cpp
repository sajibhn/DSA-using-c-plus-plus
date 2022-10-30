#include <iostream>
using namespace std;

bool palindrome(string &word, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (word[start] != word[end])
    {
        return false;
    }

    return palindrome(word, start + 1, end - 1);
}

int main()
{

    string word = "MADAM";
    int start = 0;
    int end = word.size() - 1;

    cout << palindrome(word, start, end);
    // cout << end;

    return 0;
}