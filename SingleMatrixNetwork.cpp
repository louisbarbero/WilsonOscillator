/* Louis Barbero Spring 2019
SingleMatrixNetwork.cpp is the main program used to run the Wilson-Cowan Model Oscillator.

*/
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
const int maxTimesteps=1000;


/*
    Commented out calls and variables used to test for effects created by weight manipulation
*/
int main(int argc, char* argv[])
{

    Network Willy("Wilson.txt");
   // double low_neuron_weight_value[9]={0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09};
   // double neuron_weight_value[9]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9};

  //for(int k =0; k<9; k++){

     // for(int l=0; l<9; l++){

          for(int timestep=0; timestep<maxTimesteps; timestep++){

          //  Willy.setSelfNeuronWeight(.9,.9,.4,.4);
            //Willy.printNetworkWeights(); Test to make sure weights are changing correctly
            Willy.wilsonCycleNetwork();
           // if(timestep==maxTimesteps-1)
            //    cout<< Willy.getFrequency() << " ";
            }

      //  }

    // cout<<endl;
 // }

	return 0;
}


