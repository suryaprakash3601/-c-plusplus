// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n)
//     {
//         int col = 1;
//         while(col<=row){
//           cout<< "*"; 
//           col = col+1;
//         }
//         cout<<endl;
//         row = row +1;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row =1;
//     while(row<=n)
//     {
//         int col = 1;
//         while(col<=row){
//           cout<< row; 
//           col = col+1;
//         }
//         cout<<endl;
//         row = row +1;
//     }
// }




#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int row =1;
    int count =1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row){
          cout<<count<<" "; 
          count +=1;
          col = col+1;
        }
        cout<<endl;
        row = row +1;
    }
}