#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) return -1;

    map<string, int> ans;
    int i = argc - 1;
    string word;
    while(i>0){
        word = argv[i];
        map<string, int>::iterator itr = ans.find(word);
        if(itr != ans.end())
            ans[word] = ans[word] + 1;
        else ans.insert(pair<string,int>(word,1));
        i--;
    }

    map<string, int>::iterator best = ans.begin();

    for(auto it = ans.begin(); it != ans.end(); it++){
        if(it->second > best->second) best = it;
    }

    cout<<best->first<<" "<<best->second<<endl;

    return 0;
}