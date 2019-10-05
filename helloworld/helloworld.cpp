#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    
    for (const auto& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}