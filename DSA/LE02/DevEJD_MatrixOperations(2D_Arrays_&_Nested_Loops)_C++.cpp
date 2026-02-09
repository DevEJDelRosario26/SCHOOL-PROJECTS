/*
Developed by: DevEJ_Del_Rosario
Fullname: Edgardo B. Del Rosario Jr.
Class: BSIT-1C
==========================================
Project: 02 Matrix Operations (2D Arrays & Nested Loops)
Developed by: DevEJ_Del_Rosario 
Copyright (c) 2026. All Rights Reserved.
==========================================
This code is the original work of DevEJ_Del_Rosario

Users may utilize this code as a guide or for educational purposes. 
However, claiming this code as one's own or using it for commercial purposes 
without proper citation or acknowledgment of the original creator is strictly prohibited.
==========================================

*/
//Call the needed Libraries
#include <iostream>
#include <chrono>
#include <thread>

//initiats Milliseonds for the delay duration
int ms =640 ;

//Adds Delay
void delay(int millisecs){
    std::this_thread::sleep_for(std::chrono::milliseconds(millisecs));
}

//For Printing The Originnal Matrix
void printMatrix(int arr[3][3]){
     std::cout<<"Original Matrix"<<std::endl;;
    for(int i=0; i<3; i++){ 
         for(int k=0; k<3; k++){
          std::cout<<arr[i][k]<<" ";  
          delay(ms);
        }
           std::cout<< "\n"; 
    } 
} 


//For Transposing and Printing Matrix
void transposeMatrix(int arr[3][3]){ 
    int temporarySpaceHolder;
    int &x = temporarySpaceHolder;
    
         for(int i=0; i<2; i++){
        for(int k=2; k>i; k--){
          // if(!(i==k)){
          x = arr[i][k];
          arr[i][k] = arr[k][i];
          arr[k][i] = x; 
          // }   
        } 
    } 
             x =0;
         std::cout<<"\n\n\nNew Matrix"<<std::endl;;
       for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
          std::cout<<arr[i][k]<<" "; 
           delay(ms);
        }
           std::cout<< "\n"; 
    }    
}


int main() {
 //Initiates Array Values
 int n=1;
  
 //Initialize 2D Array as myArr[][]   
int  myArr[3][3]={};

    //Assigns values for myArr's coordinates using nested for-loop
     for(int i=0;i<3;i++){
         for(int k=0;k<3;k++){ 
           myArr[i][k] = n;
           n++;
         }
    }
 //printMatrix(transposeMatrix(myArr)); 
 
 //Run printMatrix()
  printMatrix( myArr );
 //Run transposeMatrix() 
  transposeMatrix(myArr);

//int  myArr2[3][3] = printMatrix( myArr ); 
  //  transposeMatrix(myArr2);
    return 0;
}
