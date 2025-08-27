#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<string> q;

    q.push("Surya");
    q.push("Prakash");
    q.push("Engineer");

    cout<<"Size before pop" <<q.size()<<endl;
    cout<<"First Element"<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"Size after pop" <<q.size()<<endl;
}