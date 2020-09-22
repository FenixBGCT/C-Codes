#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();
    map<string,string> types;
    for (int i = 0; i < N; i++) {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
        transform(EXT.begin(),EXT.end(), EXT.begin(), ::tolower);
        types.insert(pair<string,string> (EXT,MT));
    }
    for (int i = 0; i < Q; i++) {
        string FNAME;
        getline(cin, FNAME); // One file name per line.
        transform(FNAME.begin(),FNAME.end(),FNAME.begin(),::tolower);
        string ext1=FNAME.substr(FNAME.find_last_of('.')+1);
        if(ext1.size()==FNAME.size()) {
            cout<<"UNKNOWN"<<endl;
            continue;
        }
        if(types.count(ext1))
            cout<<(types.find(ext1))->second<<endl;
        else cout<<"UNKNOWN"<<endl;
        
    }
}
