// #include<iostream>
// using namespace std;

// int power(int a, int b) {

//     int ans = 1;

//      for(int i= 1; i<=b; i++) {
//         ans = ans * a;
//      }

//      return ans;
// }
// int main() {

//     int a , b ;

//     cin>> a >> b ;
    
//    int answer =  power(a,b);
//    cout<< " answer is " << answer << endl;

//    return 0;
// }





// #include<iostream>
// using namespace std;

// int power() {
//     int a, b;
//     cin>> a>> b;

//     int ans = 1;

//     for(int i=1; i<=b; i++ ) {
//         ans = ans * a;
//     }
//      return ans;
// }

// int main()  {
//     int ans = power();
//     cout<< " answer is " << ans << endl; 
// }



#include<iostream>
using namespace std;

int power(int num1, int num2) {

   // cout << a << endl;  
   
   // we can not access the value of a in this function bcz a is the local variable of main function

    int ans = 1;

     for(int i= 1; i<=num2; i++) {
        ans = ans * num1;
     }

     return ans;
}
int main() {

    int a , b ;

    cin>> a >> b ;
    
   int answer =  power(a,b);
   cout<< " answer is " << answer << endl;


   int c , d ;

    cin>> c >> d ;
    
   answer =  power(c,d);
   cout<< " answer is " << answer << endl;



   // return 0;
}


