// SIngleMatrixNetwork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Network.h"
#include <iomanip>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>                     //NEW: NEEDED TO USE ITERATOR
#include <algorithm>
#include <windows.h>                    //New: NEEDED FOR SLEEP FUNCTION
using namespace std;

int main(int argc, char* argv[])
{
    Network Willy("Wilson.txt");
    Willy.cycleNetwork();

    /*
        Below is the matrix multiplication hard coded without the use of the neural network
    */
    /*
    double matrix[4][4] = { {0.9,0.0,-0.95,0.0},
                            {0.0,0.9,0.0,-0.95},
                            {0.2,0.0,0.4,-0.5},
                            {0.0,0.2,-0.5,0.4}
                        };

    for(int i=0; i<4; i++){
            cout<<endl;
        for(int k =0; k<4; k++){
            cout << matrix[i][k] << " ";
        }
    }
    cout << endl;
     double outputmatrix[4] = { 0,0,1,0};
     double resultmatrix[4] = { 0,0,0,0};

    double a=0;

    for(int l = 0; l<50; l++){
        cout<< l << endl;
    for(int i=0; i<4; i++){
        for(int k =0; k<4; k++){
        resultmatrix[i]+= (matrix[i][k])*(outputmatrix[k]);
        }}

    for(int i=0; i<4; i++){
        outputmatrix[i]=resultmatrix[i];
        resultmatrix[i]=0;

    }
        cout << setprecision(4);
        cout << "Motor A:" <<outputmatrix[2] + .5 << "     " << "Motor B:" <<outputmatrix[3] +.5 << endl;
    } */
	return 0;
}


