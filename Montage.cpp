#include <iostream>
#include <map>

using namespace std;

int main(){
    map <int,int> a;
    int ninos,filas,dato;
    cin>>ninos>>filas;
    bool yes = false;
    while(ninos-->0){
        cin>>dato;
        a[dato]++;
        if(a[dato]>filas)
            yes = true;
    }
    if(yes)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    return 0;
}

