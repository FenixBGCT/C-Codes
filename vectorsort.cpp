#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    vector<int> v;
    int k{0};
    cin>>k;
    while(cin>>k) v.push_back(k);
    sort(v.begin(),v.end());
    for(int i : v){
        cout<<i<<' ';
    }
 

    return 0;
}
