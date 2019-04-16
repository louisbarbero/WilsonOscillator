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
    for(int i = 0; i< 300; i++)
    Willy.wilsonCycleNetwork();


	return 0;
}


