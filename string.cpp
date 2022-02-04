#include <iostream>
using namespace std;
#include <string>
#include <sstream>


int main(){
  string mystr;
  float price = 0;
  int quantity = 0;
  cout << "Enter price : ";
  getline(cin, mystr);
  stringstream(mystr)>>price;
  cout << "Enter quantity : ";
  getline(cin, mystr);
  stringstream(mystr)>>quantity;
  cout << "The total price is : " <<price*quantity<<"\n";
  // string mystring;
  // mystring = "my string is mine";
  // cout << mystring <<"\n";
  // mystring  = "my string is not mine";
  // cout << mystring <<"\n";
  // return 0;
  // string mystr;
  // cout << "What is your name? : ";
  // getline(cin, mystr);
  // cout << "Hello"<<mystr << "\n";
  // cout << "Good!! What is your favourite team?: ";
  // getline(cin, mystr);
  // cout << mystr << " is great!!\n!";
  return 0;
}
