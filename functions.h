#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//include libraries here
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Name: maximum()
//Parameters: float x, float y
//Return: x and y
//Description: Return maximum value of x otherwise y
//Flowchart:
//Label                                                Task                                                    Goto
//01                                                (start: x,y)                                               02
//02                                                 <if x >= y>                                               03,04
//03                                                 (return:x)                                                Output
//04                                                 (return:y)                                                Output

//Name:minimum()
//Parameters: float x, float y 
//Return: x and y
//Description: Return minimum value of x otherwise y
//Flowchart:
//Label                                                Task                                                   Goto         
//01                                                 (start: x,y)                                             02
//02                                                 <if x >= y>                                              03,04
//03                                                 (return:x)                                               Output
//04                                                 (return:y)                                               Output

//Name:midpoint()
//Parameters: float x, float y
//Return: midpoint
//Description: Return the midpoint from x and y
//flowchart:                                           Task                                                    Goto
//01                                                 (start: x,y)                                              02 
//02                                        [float midpoint = ( (x + y)/ 2 );]                                 03
//03                                            (return midpoint;)                                             Output   

//Name:midpoint()
//Parameters: float x, float x2, float y1, float y2, float z1, float z2, float &midx, float &midy, float &midz)
//Return: Nothing
//Description: Calls the the two parameters of x, y and z as a float reference.
//flowchart:                                          Task                                                     Goto
//01                                               (start: x,y)                                                02
//02                                          [midx = midpoint(x1,x2)]                                         03
//03                                          [midy = midpoint(y1,y2)]                                         04
//04                                          [midz = midpoint(z1,z2)]                                         05
//05                                               (return;)                                                   Output

//Name: square()
//Parameters: float x
//Return: square
//Description: The square function use to return the square of x.
//flowchart:                                          Task                                                     Goto
//01                                               (start: x,y)                                                02
//02                                           [float square = x*x;]                                           03
//03                                            (return square;)                                               Output

//Name: distance()
//Parameters: float x1, float x2, float y1, float y2, float z1, float z2
//Return: distance
//Description: distance() uses the distance formula to return the distance from x1, x2, y1, y2, z1 and z2.
//flowchart:                                         Task                                                      Goto
//01                                             (start: x,y)                                                  02
//02                        [float d = sqrt( pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2) )]                     03
//03                                             (return d;)                                                   Output


//The function maximum()
float maximum(float x, float y)
{
  if (x >= y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

//The function minimum()
float minimum(float x, float y)
{
  if (x <= y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

//The function midpoint()
float midpoint(float x, float y)
{
  float midpoint = ( (x + y) / 2 );
  cout << fixed << showpoint << setprecision(1);
  //cout << "The midpoint is "<< first[3] << second[3];
  return midpoint;
}

//The void function for midpoint()
void midpoint(float x1, float x2, float y1, float y2, float z1, float z2, float &midx, float &midy, float &midz)
{
 
  //The midpoint references for midx, midy, midz.
  
  //float midx, midy, midz;
  midx = midpoint(x1, x2);
  midy = midpoint(y1, y2);
  midz = midpoint(z1, z2);
  
  return;
}

//The function square()
float square(float x)
  { 
   //float square;
   float square = x*x;
   return square;
  }

//The function distance()  
float distance(float x1,float x2, float y1, float y2, float z1, float z2)
  {
    //float x1,x2,y1,y2,z1,z2;
    float d = sqrt( pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2) );
    return d;
  }

#endif //FUNCTIONS_H