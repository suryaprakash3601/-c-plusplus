#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<" enter the calue of n" <<endl;
    // cin>> n;
    // cout<<"printing count from 1 to n"<<endl;
    // int i=1;
    // for(; ;){
    //     if(i<=n) {
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;

    //     }
    // for(int a=0,b=1,c=2; a>=0 && b>=1 && c>=2; a--,b--,c--){
    //     cout<< a<<" "<< b<< " "<<c<< endl;
    //}




    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<sum<<endl;
    }