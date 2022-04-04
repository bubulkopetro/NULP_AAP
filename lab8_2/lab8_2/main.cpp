// lab8_2
// Юлія Моляща
// Лабораторна робота №8.2
// Опрацювання літерних рядків
// Варіант 5


#include <iostream>
#include <string>

using namespace std;

string Change(string& s)
{
  
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ' && s[i + 1] == ' ')
            {s.erase(i, 1); i = (i - 1);}
        if (s.length() > 0 && s [0] == ' ')
            {s.erase (0, 1);}
        if (s [s.length() - 1] == ' ')
            {s.erase(s.length() - 1, 1);}

    return s;
}

int main()
{
    
    string str;

    cout << "Enter string: " << endl;
    getline(cin, str);
    
    cout << "Modified string: \n" << Change(str) << endl;
    
    return 0;
}
