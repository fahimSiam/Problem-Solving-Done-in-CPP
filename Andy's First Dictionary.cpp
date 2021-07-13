#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, str;
    set<string>ch;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        }
        stringstream ss;
        ss<<s;
        while(ss>>str)ch.insert(str);
    }
    set<string>::iterator out;
    for(out= ch.begin();out!=ch.end();out++){
        cout<<*out<<endl;
    }
}
