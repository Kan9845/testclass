#include <iostream>
using namespace std;
#include <fstream>
#include <string>
int main(){
  string line;
  ifstream myfile ("file.dat");
  if (myfile.is_open()){
    while (getline (myfile,line)){
      cout << line << "\n";
    }
  }
  else cout <<"Unable to open file";
  return 0;
}
