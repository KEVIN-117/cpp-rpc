#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string words;
    bool flag = true;
    bool flag1 = true;
    cin>>words;
    transform(words.begin(),words.end(),words.begin(), ::tolower);
    for(int idx=0; idx<words.size()-1; idx++){
        if(words[idx]>words[idx+1])
            flag = 0;
        if(words[idx]<words[idx+1])
            flag1 = 0;
    }
    if(flag || flag1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
