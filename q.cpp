#include<iostream>
using namespace std;
int main() {
    int arr[5] = {2,4,5,6,9};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
       
    }
    cout<<sum;
    return 0;
}