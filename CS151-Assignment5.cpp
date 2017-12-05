#include <iostream>
using namespace std;

//Name: GuessNumber()
//Parameters: int &min, int &max
//Return: void
//Description: Function for guess a random number.
//flowchart:
//Label												Task												   Goto					
//01										(start: int &min, int &max;) 				 02                
//02											  [int x;]												 03
//03											[int random;]											 04
//04									   /"Guess my number: ";/							 05
//05									         /random;/										 06
//06										<while (x < random)>								 07, 14
//07										 [srand(time(0));]									 08
//08									  [x = ((rand ()% max));]							 09
//09									  <while (!(x == random))>						 10, 12
//10										/"Incorrect. Guess Again ";/				 11
//11									         /"random";/									 12
//12								          <if (x == random)>						 13
//13										   /"You got it!";/									 14
//14											(return void;)

//Name: main()
//Parameters: None
//Return: None
//Description: Main function to enter two numbers and have the user guess a number from the program.
//flowchart:
//Label												Task												          Goto
//01							 (start: int x, int random, int max, int min;)		02
//02										/"Enter 2 numbers: ";/										  03
//03												/x;/												            04
//04											  /random;/												        05
//05									 [GuessNumber(x, random);]										06
//06										 <if (x > random)>											    07, 09
//07											 [min = x;]												        08
//08										   [max = random;]											    09
//09									    <else if (random > x)>										10, 12
//10											[max = random;]											      11
//11											 [min = x;]												        12
//12											 (return 0;)

void GuessNumber(int &min, int &max)
{
  int x;
  int random;

  cout << "Guess my number: ";
  cin >> random;
  
  while (x < random)
  {
    srand(time(0));
    x = ((rand ()% max));
  }

  while (!(x == random))
  {
    cout << "Incorrect. Guess Again: ";
    cin >> random;
    if (x == random)
    {
      cout << "you got it!";
    }
  }
  return;
}
int main()
{
  int x, random, min, max;
  
  cout << "Enter 2 Numbers: ";
  cin >> x;
  cin >> random;
  
  GuessNumber(x, random);
  
  if (x > random)
  {
    min = x;
    max = random;
  }
  else if (random > x)
  {
    max = random;
    min = x;
  }
  return 0;
}
