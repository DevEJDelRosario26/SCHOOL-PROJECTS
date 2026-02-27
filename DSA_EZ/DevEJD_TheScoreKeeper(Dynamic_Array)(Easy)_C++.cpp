/*
Developed by: DevEJ_Del_Rosario
Fullname: Edgardo B. Del Rosario Jr.
Class: BSIT-1C
==========================================
Project: 01 Laboratory Exercise - The ScoreKeeper (Dynamic Array)(Easy)
Developed by: DevEJ_Del_Rosario
Copyright (c) 2026. All Rights Reserved.
==========================================
This code is the original work of Edgardo B. Del Rosario Jr.

Users may utilize this code as a guide or for educational purposes.
However, claiming this code as one's own or using it for commercial purposes
without proper citation or acknowledgment of the original creator is strictly prohibited 
unless approved.
==========================================

*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    float Avgrage;

    cout << "Enter Class Size:" << endl;
    cin >> num;
    cout << endl;

    int *dyna_arr = new int[num];
    int scores;
    for (int i = 0; i < num; i++) {

        cout << "Enter score #" << i + 1 << ": ";
        cin >> scores;

        dyna_arr[i] = scores;
    }

    //    arr[k];
    int H = dyna_arr[0];
    int L = dyna_arr[0];

    for (int i = 0; i < num; i++)  {

        if (H < dyna_arr[i]) {
            H = dyna_arr[i];
        }
        if (L > dyna_arr[i])  {
            L = dyna_arr[i];
        }
    }

    for (int i = 0; i < num; i++) {
        sum += dyna_arr[i];
    }

    Avgrage = (float)sum / num;
    cout << "\n"
         << "=======REPORT=======" << endl;

    cout << "Higest Score: " << H << "\n"
         << "Lowest Score: " << L << "\n\n"
         << "Average Score: " << Avgrage << "%\n"
         << endl;

    delete[] dyna_arr;

    
    return 0;
}
