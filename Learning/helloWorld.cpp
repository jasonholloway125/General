#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // TODO: update the detail @jasonholloway125

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int what = 0;
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}