#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "enter your age" << endl;
  cin >> age;

  if(age < 10){
    cout << "you are sisu" << endl;
  }

  else if (age < 18) {
    cout << "you are teens" << endl;

  }

  else if (age > 18) {
    cout << "you are totally adult" << endl;
  }

}