#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int frequency(string s){
  
    
    vector<int> frequency(26,0);
    for(int i=0;i<s.length();i++){
        frequency[s[i]-'a']++;
        }
     for(int i=0;i<s.length();++i)
            if(frequency[s[i]-'a']==1)
                return i;
        
        return -1;     
    }
int main(){
    string s;
    getline(cin,s);
    cout<<frequency(s);
}
