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

// void summation(int a, int b){
//   int c;
//   c = a+b;
//   cout << "a + b = "<< c<<"\n";
// }
// void test(int nx, double phi[nx]){
//   phi[0]=phi[1]+phi[2];
//   nx = nx+1;
// }
// int main(){
//   const int nx = 10;
//   double phi[nx];
//   for(int i=0;i<nx;i++){
//     phi[i] = double(i);
//     cout <<"phi["<<i<<"] = "<<phi[i]<<"\n";
//   }
//   cout<<"\n";
//   test(nx,phi);
//   cout<<"phi[0] = "<<phi[0]<<"\n";
//   cout<<"\n";
//   cout<<"nx = "<<nx<<"\n";
//   // declare variable name file

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
//void test(int nx, double *p){
//   for(int i = 0; i < nx;i++)
//     {
//       cout<<"p["<<i<<"] = "<<p[i]<<"\n";
//     }
// }

void Test2D(int nx, int ny, double **p){
  for(int i = 0; i<nx; i++){
    for(int j = 0; j<ny; j++){
      cout << p[i][j];
    }
  }
}
int main(){
  const int nx=10;
  const int ny=10;

  double **phi;
  phi = (double**) malloc (nx* sizeof(double));
  for(int i = 0; i < nx; i++){
    phi[i]=(double *) malloc (ny* sizeof(double));
  }
  Test2D(nx, ny,phi);
  // const int nx = 10;
  // // double phi[nx];
  // //Alternatively, in declareing a 1D array
  // double *phi;
  // phi = (double *) malloc (nx * sizeof(double));

  // for(int i=0; i < nx; i++){
  //   phi[i]=double(i);
  // }
  // test(nx,phi);
  // int a = 10;
  // cout << "a = "<<a<<"\n";
  // cout << "&a = "<< &a <<"\n";
  // int array[10];
  // for(int i=0;i<10;i++){
  //   array[i]=double(i);
  //   cout << "array["<<i<<"] = "<<array[i]<<", stored at "<< &array[i]<<"\n";
  // }
  // cout<<"\n";
  // int *p;
  // p = &a;
  // cout<<"p = "<<p<<"\n";
  // cout<<"*p = "<<*p<<"\n";
  // cout<<"&p = "<<&p<<"\n";
  //distance between each storage is 32 byte
//initialized variable phi 
}
