#include <iostream>
using namespace std;


string removedup(string s){
    if(s.length()==0){
        return "Error";// base case.
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
    
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main() {
    // string str;
    // cin>>str;

    // cout<<"Input string is : "<<str <<endl;
    string str1=removedup("appleeei");
    




int j=0;

for(int i=0; i<=str1[i];i++)
{
char c= tolower(str1[i]);
    switch(c)
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o':
    case 'u':
    j++;
}
// cout<<"Input string  is "<<a <<endl;
cout<<"Total nom vowel in input string : "<<j;
    return 0;

  
}