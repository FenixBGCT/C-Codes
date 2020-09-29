#include<cmath>
#include<vector>
#include <fstream>

int kS(int weight, vector<int> weights, vector<int>values, int n) 
{     
    if (n == 0 || weight == 0) 
        return 0; 
  
    if (wt.at(n) > weight) 
        return kS(weight, weights, values, n - 1); 
  
  
    else
        return max( 
            val.at(n)+ kS(weight - weights.at(n), weights, values, n - 1), 
            kS(weight, weights, values, n - 1)); 
} 
  
int main() 
{ 
    
    int k{0};
    int weight{0};
    int n{0};
    vector<int> values;
    vector<int> weights;
    string fileName=";
    
    cin>>fileName;
    ifstream file(fileName);
    if(file.is_open()){
        cin>>weight
        int i{0};
        while(!file.eof()){
           file>>k;
           if(i%2==0) weights.push_back(k);
           else val.push_back(k);
           i++;
        }
        file.close();
    }
    
    n = val.size()-1; 
    cout << kS(weight, weights, values, n); 
    return 0; 
} 
