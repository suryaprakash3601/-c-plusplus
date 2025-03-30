#include<iostream>
using namespace std;

//functon signature
void printCounting(int n) {

    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return; //we can use return here bcz we are not returning any value
}

int main() {
    int n;
    cin >> n ;


    //function call
    printCounting(n);

    return 0;

}