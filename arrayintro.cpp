#include<iostream>
using namespace std;


void printArray(int arr[], int size) {

    cout<< " Printing the array " << endl;
    //print the array
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout<< " Printing DONE " << endl;
}



int main() {
    
    //declare
    int number[15];

    //accessing an array
    cout << "Value at 1 index " << number[0] << endl;
    cout << "Value at 15 index " << number[14] << endl;
    
    cout << "Value at 20 index " << number[20] << endl;
    
    //initialising an array
    int second[3] = {5,7,11};

    //accesing an element
    cout << "Value at 2 index " << second[2] << endl;


    //print the element

    //cout << "Value at 3 index " << third[5] << endl;

    
    int third[15] = {2,7};

    int n = 15;
    printArray(third , 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<< " Size of third is " << thirdSize << endl;

        // int n = 15;
        // cout << " Printing the array " << endl;
        // //print the array
        // for(int i = 0; i<n; i++){
        //     cout << third[i] << " ";
        // }
    


        int fifth[10] = {1};

        n = 10;
        printArray(fifth , 10);

        int fifthSize = sizeof(fifth)/sizeof(int);
        cout<< " Size of Fifth is " << fifthSize << endl;


//         cout<< " Printing the array " << endl;
//         //print the array
//         for(int i = 0; i<n; i++){
//             cout << fifth[i] << " ";
//         }
//     return 0;
// }



 //
 cout << endl <<  "Everything is Fine " << endl << endl;

}