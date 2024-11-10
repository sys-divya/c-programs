#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    getline(cin,S);
    cout << S.length();
    
    for (int i = 0; i <=S.length(); i++)
    {
        if (i == 0)
        {
            char a = tolower(S[i]);
            cout << a<<".";
        }
       
        if (i == (S.length() - 1))
        {
            char t = toupper(S[i]);
            cout << t;
        }
    }

    // Write code here
}
