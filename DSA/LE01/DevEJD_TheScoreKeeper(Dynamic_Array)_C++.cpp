/*
Developed by: DevEJ_Del_Rosario
Fullname: Edgardo B. Del Rosario Jr.
Class: BSIT-1C
==========================================
Project: 01 Laboratory Exercise - The ScoreKeeper (Dynamic Array)
Developed by: DevEJ_Del_Rosario 
Copyright (c) 2026. All Rights Reserved.
==========================================
This code is the original work of Edgardo B. Del Rosario Jr. 

Users may utilize this code as a guide or for educational purposes. 
However, claiming this code as one's own or using it for commercial purposes 
without proper citation or acknowledgment of the original creator is strictly prohibited.
==========================================

*/
#include <iostream>
int input(int n){  
  int scores;
    
 // int arr[n];
  //  Enter class size: 5;

std::cout<<"Enter score #"<<n+1<<": ";
    std::cin>>scores;

 return scores;
    }
 
void Report(int k, int arr[]){
    int sum=0;
    float Avg;
     
//    arr[k];
    int H = arr[0];
    int L = arr[0];
    
 for(int i=0;i<k;i++){
 
           if(H<arr[i]){
         H = arr[i];  
        }
          if(L>arr[i]){
              L = arr[i]; 
           } 
    }

    std::cout<<"\n\nTotal Score:"<<std::endl;
    for(int i=0;i<k;i++){
        std::cout<<arr[i];
        
        if(i<k-1){    
            std::cout<<" + ";
        }
        
    sum += arr[i];
}
     
 Avg = (float)sum/k;
     std::cout<<" = \""<<sum<<"\n"<<std::endl;
     std::cout<<"Average Score:\n"<<sum<<" / "<<k<<" = \""<<Avg<<"\"\n"<<std::endl;
     //genAvg
     std::cout<<"=======REPORT======="<<std::endl; 
     std::cout<<"Higest Score: "<<H<<"\n"
              <<"Lowest Score: "<<L<<"\n\n"
              <<"Average Score: "<<Avg<<"%\n"
              <<"Remark: "<<((Avg>74) ? "Passed" : "Failed");
}


int main() {
   
          int n;
         std::cout<<"Enter Class Size:"<<std::endl;
         std::cin>>n;
         std::cout<<std::endl;
     
    int* dyna_arr = new int[n];
    
    for(int i =0; i<n; i++){ 
        dyna_arr[i] = input(i);
      }
      
//while(
  Report(n, dyna_arr);
 
 delete[] dyna_arr;
   return 0;
}



