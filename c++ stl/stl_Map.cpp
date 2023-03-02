#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;

    m[1] = "bhavya";
    m[13] = "rohilla";
    m[2] = "bhavi";

    m.insert({5,"bheem"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 -> "<<m.count(13)<<endl;

    m.erase(13);
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<endl;

    auto it = m.find(5);

    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


}