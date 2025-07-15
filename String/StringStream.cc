#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int countWords(const string &input)
{
    stringstream stream(input);
    string token;
    int count = 0;
    while (stream >> token)
        count++;
    return count;
}

void printFrequency(const string &input)
{
    map<string, int> freq;
    stringstream inputStream(input);
    string token;
    while (inputStream >> token)
        freq[token]++;

    for (auto word : freq)
        cout << word.first << " " << word.second << endl;
}

int main()
{
    string s = "aryan is a a  cs student!";
    cout << "number of words is " << countWords(s) << endl;
    printFrequency(s);

    //input string into stringstream
    stringstream inputStream;
    inputStream << "sairam is good";
    string str;
    inputStream >> str; //only the first token is taken
    cout << str << endl; 
}