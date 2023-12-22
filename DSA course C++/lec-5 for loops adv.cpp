#include <iostream>
using namespace std;

int main(){
//     char name;
//     cout << "enter the letter: ";
//     cin >> name;
    
//     for (char name = 'a'; name < z; name++)
//     {
//         cout << i << endl;
//     }


    // int num;
    // cout << "enter the number: ";
    // cin >> num;

    // for (int i = 100; i >= num; i--){
    //     cout << i << endl;
    // }



// for (int i = 0; i <101; i = i+3){
//     cout << i << endl;
// }

// int n,p;

// cout << "enter the number you wanna get table of: ";
// cin >> n;

// cout << "enter the number until which you wanna get table of: ";
// cin >> p;



// for (int i = 1; i <= p; i++)
// {
//     cout << n << " times " << i << " is = " << n*i << endl;
// }


// int i,j;
// cout << "enter the number: ";
// cin >> i;

// cout << "enter the power: " ;
// cin >> j;

// cout << "the " << j << "th power of " << i << " is = " i**j << endl; 

// int n;
// cout << "enter the number: " ;
// cin >> n;

// cout<< n*(n+1)/2;



// int i, n, fact=1;
// cout << "enter the number: ";
// cin >> n;

// for ( i = 1; i <= n; i++)
// {
//     fact = fact * i
// }



// cout << fact;

// int n;
// cout << "enter a number: ";
// cin >> n;

// if (n<2){
//     cout << "it's not a prime number" << endl;
//     return 0;

// }

// else{
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i == 0){
//             cout << "it's not a prime number" << endl;
//             return 0;
//         }

// else{
//     cout << "it's a prime " << endl;
//     return 0;
// }

//     }


    
// }



cout << "enter the number for which you want the fibonaci: " ;
cin >> n;

int a = 0, b = 0, c = 1;
cout << 0 << endl;


for (int i = 0; i < n; i++){
    a = b+c;
    cout << a << endl;
    c=b;
    a=b;
}
return 0


}
