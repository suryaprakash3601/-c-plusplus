// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ans = 0;
//     int i=0;
//     while(n != 0){
//         int bit = n & 1;
//         ans = (bit * int(pow(10,i)))+ans;
//         n=n>>1;
//         i++;

//     }

//     cout<<"Answer is " << ans << endl;
// }





#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int ans = 0;
    int power = 1;

    while(n != 0)
    {
        int bit = n & 1;
        ans = bit * power + ans;
        power *= 10;
        n = n >> 1;
    }
    cout << ans << endl;
}