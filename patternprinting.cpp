#include<iostream>
using namespace std;
int main()
{

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


// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }


// int n;
// cin>>n;
// int i=1;
// int count =1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count<<" ";
//         count=count +1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }




// printing triangle


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//     }
// }


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<row;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }




// int n;
// cin>>n;
// int row = 1;
// int count=1;
// while(row<=n){
//     int col = 1;
//     while(col<=row){
//         cout<<count;
//         count=count+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1; 
// }
// }


//m-1

// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     int value= row;
//     while(col<=row){
//         cout<<value;
//         value=value+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }

//m-2

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<(i+j-1)<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }

//m-1

// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     int value= row;
//     while(col<=row){
//         cout<<value<<" ";
//         value=value-1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }


//m-2

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<(i-j+1)<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col=1;
//     while(col<=n){
//        char ch ='A'+row-1; 
//         cout<<ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }


// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col=1;
//     while(col<=n){
//        char ch ='A'+col-1; 
//         cout<<ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }



// int n;
// cin>>n;
// int row = 1; 
// char value='A';
// while(row<=n){
//     int col=1;
//     while(col<=n){
//     cout<<value<<" ";
//     value=value+1;
//     col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }
// }  


// int n;
// cin>>n;
// int row = 1; 
// char value='A';
// while(row<=n){
//     int col=1;
//     while(col<=n){
//         char ch = 'A'+row+col-2;
//         cout<<ch;
//         col=col+1;
//     }
//     cout<<endl;
//     row= row+1;
// }
// }



// int n;
// cin>>n;
// int row = 1; 
// char value='A';
// while(row<=n){                                  //  output n = 3
//     int col=1;                                    // A
//     while(col<=row){                              // B B
//         char ch = value;                          //C C C
//         cout<<ch<<" ";
//         col= col+1;
//     }
//     cout<<endl;
//     value = value+1;
//     row=row+1;
// }}


// int n;
// cin>>n;
// int row = 1;                                              //  output n = 3
// while (row<=n){                                           // A
//     int col = 1;                                          // B B
//     while(col<=row){                                      //C C C
//         char ch = ('A'+row -1);
//         cout<<ch<<" ";
//         col= col+ 1;
//         }
//         cout<<endl;
//         row = row+1;
//     }
// }







// int n;
// cin>>n;
// int row = 1;
// while (row<=n){                                             //  output n = 4
//     int col = 1;                                             //A 
//                                                              // B C 
//                                                             // C D E 
//                                                            // D E F G 
//     while(col<=row){
//         char ch = ('A'+row +col-2);
//         cout<<ch<<" ";
//         col= col+ 1;
//         }
//         cout<<endl;
//         row = row+1;
//     }
// }



// int n;
// cin>>n;
// int row = 1;
// while(row<=n){
//     int col = 1;
//     char start = 'A'+n-row;
//     while(col<=row){
//         cout<<start;
//         start = start+1;
//         col= col+1;
//     }
//     cout<<endl;
//     row = row+1;
//     }
// }




// int n;
// cin>>n;
// int row =1;
// while(row<=n){
//     //space print krlo
//     int space = n-row;
//     while(space) {
//         cout<<" ";
//         space = space -1;
//     }
//     //stars print krlo
//     int col = 1;
//     while(col <= row){
//         cout<<"*";
//         col = col+1;
//     }
//     cout<<endl;
//     row = row+1;
// }
// }





int n;
cin>>n;
int row = 1;
while(row<=n){
    //print karo space (1st triangle)
    int space = n-row;
    while(space){
        cout<<" ";
        space = space -1;
    }
    //print 2nd triangle
    int j = 1;
    while(j<=row){
        cout<<j;
        j=j+1;
    }

    //print 3rd triangle
    int start = row-1;
    while(start) {
        cout<<start;
        start = start -1;
    }
    cout<<endl;
    row = row+1;
}
}