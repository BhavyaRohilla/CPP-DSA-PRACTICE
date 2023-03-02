#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;

    //copy list list<int> n(l);
    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    //pop_back , pop_front

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"Size of list -> "<<l.size()<<endl;
}