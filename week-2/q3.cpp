#include <iostream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

int main()
{

    cout << "Enter a paragraph: ";
    string paragraph;
    getline(cin, paragraph);

    stringstream ss(paragraph);
    string word;
    map<string, int> wordCount;

    while (ss >> word)
    {
        ++wordCount[word];
    }

    cout << "Word frequencies:" << endl;
    for (const auto &pair : wordCount)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
