// lab8_1_4
// Юлія Моляща
// Лабораторна робота №8.1
// Пошук та заміна символів у літерному рядку
// Варіант 5

#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != -1)
    {
        pos++;
        if (s[pos] == '-')
            k++;
    }
    
    return k;
}
string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != -1)
        if (s[pos + 1] == '-')
            s.replace(pos, 2, "*");
    return s;
}

int main()
{
    string str;
    
    cout << "Enter string:" << endl;
    getline(cin, str);
    
    cout << "String contained " << Count(str) << " groups of ',-'" << endl;
    
    string dest = Change(str);
    
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    
    return 0;
}


