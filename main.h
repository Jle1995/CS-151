/********************
//Name: Jonathan Le
//Creation: 10/05/17
//Version: Assignment.2
*********************/

#include <iostream>
#include <cmath>
#include "functions.h"
#include <iomanip>
using namespace std;

//Name: main()
//Parameters: none
//Return: 0 if successful
//Description: Display Distance and Midpoint in 3 dimmensions
//Flowchart:
//Label                                                      Task                                                   Goto
//01                                                      (start x,y;)                                               02
//02                                                      [int main()]                                               03 
//03                                           [float first[3], second[3], mid[3];]                                  04
//04                                            /"Enter the first three values:";/                                   05
//05                                            /first[0], first[1], first[2];/                                      06
//06                                           /"Enter the second three values:";/                                   07
//07                                                      /second[0]/                                                08
//08                                                      /second[1]/                                                09
//09                                                      /second[2];/                                               10
//10                                                  /"The midpoint is ":/                                          11
//11       [midpoint(first[0], second[0], first[1], second[1], first[2], second[2], mid[0], mid[1], mid[2]);]        12
//12                                                       / "(" /                                                   13
//13                                                      / mid[0] /                                                 14
//14                                                       / "," /                                                   15
//15                                                      / mid[1] /                                                 16
//16                                                       / "," /                                                   17   
//17                                                      / mid[2] /                                                 18
//18                                                       / ")" /                                                   19
//19                                               / " and the distance is"/                                         20
//20                                                         /" "/                                                   21  
//21                      / distance( first[0], second[0], first[1], second[1], first[2], second[2]);/               22
//22                                                      (return 0;)                                              Output



int main()
{
  float first[3],second[3], mid[3];
  //Enter three numbers to find the midpoint in 3D
  cout << "Enter the first three values:";
  cin >> first[0] >> first[1] >> first[2];

  cout << "Enter the second three values:";
  cin >> second[0] >> second[1] >> second[2];
  
  cout << "The midpoint is ";
  midpoint(first[0], second[0], first[1], second[1], first[2], second[2], mid[0], mid[1], mid[2]);
  cout << "(" << mid[0] << "," << mid[1] << "," << mid[2] << ")";
  cout << " and the distance is" << " " << distance( first[0], second[0], first[1], second[1], first[2], second[2]);

return 0;

}