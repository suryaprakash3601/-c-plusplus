// #include<iostream>
// using namespace std;

// int main() {
//     char name[20];

//     cout<<"Enter your name" << endl;

//     cin>> name;
//     name[2]='\0';
//     cout<<"Your name is ";
//     cout << name<< endl;

//     return 0;
// }




// to calculate the length of the string 

// #include<iostream>
// using namespace std;

// int getLength(char name[]) {
//     int count = 0;
//     for(int i=0; name[i] != '\0' ; i++) {
//         count++;
//     }
//     return count;
// }

// int main() {
//     char name[20];

//     cout<<"Enter your name" << endl;

//     cin>> name;
//    // name[2]='\0';
//     cout<<"Your name is ";
//     cout << name<< endl;

//     cout<< " Length: " << getLength(name) <<endl;

//     return 0;
// }



// reverse the string


#include<iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1; 
    while(s<e) {
        swap(name[s++] , name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0' ; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];

    cout<<"Enter your name" << endl;

    cin>> name;
   // name[2]='\0';
    cout<<"Your name is ";
    cout << name<< endl;
    int len = getLength(name);
    cout<< " Length: " << len << endl;
    int n;
    reverse(name, len);
    cout<<"Your name is ";
    cout<< name << endl;
    return 0;
}