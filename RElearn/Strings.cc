#include <iostream>
#include <string>

using namespace std;

int main()
{
    // c type strings
    char c[] = "AryanSai";
    cout << c << endl;

    // if we dont include null, bad output
    char c1[] = {'a', 'b', '\0'};
    char c2[3] = {'a', 'b', '\0'};
    char c3[3] = "ca"; // one for each char

    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;

    // using string keyword
    string str("GeeksforGeeks");
    cout << str << endl;

    string s = "geeks";
    cout << s << endl;

    // string ss;
    // cout << "enter a string: ";
    // cin >> ss;
    // cout << "entered string is : " << ss << endl;

    // cout << "enter a string: " ;
    // getline(cin, s);
    // cout << "entered string is : " << s << endl;

    char *p = &s[0];
    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;

    // iterators
    string a = "nonononaa";
    string::iterator i, j;
    i = a.begin();
    j = a.end() - 1;
    cout << *i << endl;
    cout << *j << endl;

    string::reverse_iterator r, rr;
    r = a.rbegin();
    cout << *r << endl;
    rr = a.rend() - 1;
    cout << *rr << endl;

    cout << s.length() << endl;
    cout << s.size() << endl;


    // Concatenation s1 and s2
    string s1("Hello");
    string s2(" World");
    s1 = s1 + s2;
    cout << s1 << endl;
    s1.append(s2);
    cout << s1 << endl;
    s1.append("s2");
    cout << s1 << endl;
    
    //substring
    string s4 = "Geeks";
    string sr = s4.substr(3, 2);
    cout << "subString is: " << sr;
}