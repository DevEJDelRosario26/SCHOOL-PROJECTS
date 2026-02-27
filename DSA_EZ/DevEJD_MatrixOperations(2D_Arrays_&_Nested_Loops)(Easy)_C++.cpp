/*
Developed by: DevEJ_Del_Rosario
Fullname: Edgardo B. Del Rosario Jr.
Class: BSIT-1C
==========================================
Project: 02 Matrix Operations (2D Arrays & Nested Loops)(Easy)
Developed by: DevEJ_Del_Rosario
Copyright (c) 2026. All Rights Reserved.
==========================================
This code is the original work of DevEJ_Del_Rosario


Users may utilize this code as a guide or for educational purposes.
However, claiming this code as one's own or using it for commercial purposes
without proper citation or acknowledgment of the original creator is strictly prohibited
unless approved.
==========================================

*/
// Call the needed Libraries
/*
Developed by: DevEJ_Del_Rosario
Fullname: Edgardo B. Del Rosario Jr.
Class: BSIT-1C
==========================================
Project: 02 Matrix Operations (2D Arrays & Nested Loops)(Easy)
Developed by: DevEJ_Del_Rosario
Copyright (c) 2026. All Rights Reserved.
==========================================
This code is the original work of DevEJ_Del_Rosario


Users may utilize this code as a guide or for educational purposes.
However, claiming this code as one's own or using it for commercial purposes
without proper citation or acknowledgment of the original creator is strictly prohibited
unless approved.
==========================================

*/
// Call the needed Libraries
#include <iostream>
using namespace std;

int main()
{
  // Initiates Array Values
  int n = 1;


  // Initialize 2D Array as myArr[][]
  int myArr[3][3] =
      {{1,2,3},
       {4,5,6},   
       {7,8,9}};  

//For Printing The Originnal Matrix
  std::cout << "Original Matrix" << std::endl;
  ;
  for (int i = 0; i < 3; i++) {
    for (int k = 0; k < 3; k++) {
      std::cout << myArr[i][k] << " ";
    }
    std::cout << "\n";
  }

  // For Transposing and Printing Matrix
  int temp;
  int &x = temp;

  for (int i = 0; i < 2; i++) {
    for (int k = 2; k > i; k--) {

          x = myArr[i][k];
          myArr[i][k] = myArr[k][i];
          myArr[k][i] = x;
      // }
    }
  }
  x = 0;
  std::cout << "\n\n\nNew Matrix" << std::endl;
  ;
  for (int i = 0; i < 3; i++) {
    for (int k = 0; k < 3; k++) {
      std::cout << myArr[i][k] << " ";
    }
    std::cout << "\n";
  }
 
  return 0;
}
