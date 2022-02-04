#include <iostream> //cout 
using namespace std;
#include <cmath>
#include <fstream>

// void initialize(){
//   for(i = 0; i<=nx-1; i++){
//     for(j = 0; j <=ny-1;j++){
//       phi[i][j]=0.0;
//     }
//   }
// }
// void visualize(){
//   for(i = 0; i<=nx-1; i++){
//     for(j = 0; j <=ny-1;j++){
//       cout<<phi[i][j]<<" ";
//     }
//     cout<<"\n";
//   }
// }
// void set_phi(){
//   // assign phi equal to 1 inside the circle of radius = 15
//   // letting dx, dy equal to 1
//   // as e.g., x_spacing, y_spacing = dx*diff(index), not diff(index) itself
//   i_c = (nx-1)/2;
//   j_c = (ny-1)/2;
//   double radius = 10.;
//   for(i=0;i<=nx-1; i++){
//     for(j=0; j<=ny-1; j++){
//       if(sqrt(pow(i-i_c,2)+pow(j-j_c,2)) < radius){
// 	   phi[i][j]=1.;
//       }
//       else{
// 	   phi[i][j]=0.;
//       }
//     }
//   }
// }


// //routine, function
// void save_restartfile(){
//   myfileO.open("file.dat");
//   for(i = 0; i <= nx-1; i++){
//     for(j = 0; j <= ny-1; j++){
//       myfileO << phi[i][j] << " ";
//     }
//     myfileO << "\n";
//   }
//   myfileO.close();
// }


// void read_restartfile(){
//   myfileI.open("file.dat");
//   for(i = 0; i <= nx-1; i++){
//     for(j = 0; j <= ny-1; j++){
//       myfileI >>phi[i][j];
//     }
//   }
//   myfileI.close();
// }

void summation(int a, int b){
  int c;
  c = a+b;
  cout << "a + b = "<< c<<"\n";
}

int main(){
  int i, j;
  int i_c, j_c;

  //Global Variable ....................
  const int nx = 31;
  const int ny = 31;

  double phi[nx][ny];
  double nu;

  summation(nx,ny);
  // declare variable name file

  //ofstream myfileO;
  //ifstream myfileI;


  //read_restartfile();
  // initialize();
  //visualize();
  //set_phi();
  //visualize();
  // initialize();
  // set_phi();
  // visualize();
  //save_restartfile();
  // visualize();
  // cout << "Hello World"<<"\n";
   //initialized variable phi 
}
