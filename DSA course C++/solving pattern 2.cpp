#include <iostream>
using namespace std;

int main(){
    // for (int row = 0; row < 6; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



// for (int r = 1; r < 6; r++)
// {
//     for (int col = 1; col <= r; col++)
//     {
//        cout<< col << " " ;
//     }
//     cout << endl;
    
// }

// for (int r = 1; r < 6; r++)
// {
//     for (int c = r; c >= 1; c--)
//     {
//         cout << c  << " ";
//     }
//   cout << endl;
    
// }


for (int r = 1; r <= 5; r++)
{
    char name = 'a' + r - 1 ;
    for (int c = 1; c <= r; c++)
    {
        cout << name << " ";
    }
    cout << endl;
    
}



    
}