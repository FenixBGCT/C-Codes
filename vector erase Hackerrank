#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k{0};
    cin>>k;
    int g{0};
    vector<int> v;
    while(k--) {
        cin>>g;
        v.push_back(g);
    }
    cin>>k;
    v.erase(v.begin()+k-1);
    cin>>k;  
    cin>>g;
    v.erase(v.begin()+k-1,v.begin()+g-1);
    cout<<v.size()<<endl;
    for(int b: v) cout<<b<<' ';
    return 0;
}
