// Run the commands in 1. and 3. through the terminal
// 1. brew install eigen
//      sudo chown -R $(whoami) /usr/local/* // if user write permissions issues with brew install
// 2. note where eigen installed... Mine installed to the location below
//      /usr/local/include
// 3. include the path to eigen when you compile with g++ and run the file through the terminal with ./eigen_test.out
//      g++ -I /path/to/eigen/ my_program.cpp -o my_program 
//      Mine was the following command for this file...
//      g++ -I /usr/local/include/eigen3 eigen_test.cpp -o eigen_test.out

#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;
 
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}