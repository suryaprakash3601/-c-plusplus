#include<iostream>
#include<climits>
using namespace std;





// int getMin(int num[], int n) {

//     int min = INT_MAX;

//     for(int i = 0; i<n; i++) {
//         if(num[i] < min) {
//             min = num[i];
//         }
//     }

//     //returning min value
//     return min;
// } 



// int getMax(int num[], int n) {

//     int max = INT_MIN;

//     for(int i = 0; i<n; i++) {
//         if(num[i] > max) {
//             max = num[i];
//         }
//     }

//     //returning max value
//     return max;
// }






// int main () {

//     int size;
//     cin >> size;

//     int num[100];

//     //taking input in array

//     for(int i = 0; i <size; i++) {
//         cin >> num[i];
//     }

//     cout<< "Maximum value is" << getMax(num, size) << endl;
//     cout<< "Minimum value is" << getMin(num, size) << endl;



// }






int getMin(int num[], int n) {

    int mini = INT_MAX;

    for(int i = 0; i<n; i++) {
    
        mini = min( mini,num[i]);
        }
    

    //returning min value
    return mini;
} 



int getMax(int num[], int n) {

    int maxi  = INT_MIN;

    for(int i = 0; i<n; i++) {

        maxi = max(maxi,num[i]);
        }

    //returning max value
    return maxi;
}






int main () {

    int size;
    cin >> size;

    int num[100];

    //taking input in array

    for(int i = 0; i <size; i++) {
        cin >> num[i];
    }

    cout<< "Maximum value is" << getMax(num, size) << endl;
    cout<< "Minimum value is" << getMin(num, size) << endl;



}
