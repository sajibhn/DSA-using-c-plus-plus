#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> number(5, 100)

        v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // print vector
    // int size = v.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout << v[i] << endl;
    // }
    // cout << v.capacity();
    // cout << v.at(2);
    // cout << v.front();
    // cout << v.back();

    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        v.pop_back();
        cout << v[i] << endl;
    }

    return 0;
}