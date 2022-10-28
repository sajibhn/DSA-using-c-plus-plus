#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "sajib";
    m[2] = "hossain";

    m.insert({5, "good body"});
    return 0;
}