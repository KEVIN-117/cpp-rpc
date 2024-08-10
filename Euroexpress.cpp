#include <iostream>

using namespace std;

int main(){
    int n,a,b, res, aux, squareRes, mi;
    res = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        mi = min(a,b);
        squareRes = (mi * mi) * max(a,b);
        res = max(res, squareRes);
    }
    cout<<res<<endl;
    return 0;
}
