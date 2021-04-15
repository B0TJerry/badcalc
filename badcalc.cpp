#include <cmath> //includes the cmath library so I can easily do exponents and square roots

#include <iostream>

using namespace std;

int main() {

  string calcmode = "0";
    
  /* declares a integer varible with the name calcmode, decides what
     should be done (multipliction, division, etc.) */
  
  double num1 = 0, num2 = 0;
  
  /* declares 2 floating point variables with the name of
     num1 and num2 */
  
  cout << R"(
 ___    __    ___   __     __    _     __
| |_)  / /\  | | \ / /`   / /\  | |   / /`
|_|_) /_/--\ |_|_/ \_\_, /_/--\ |_|__ \_\_, )"
       << '\n';

  cout <<
    "--------------------------------------------------------------\n"
    "|1.Multiply|2.Divide|3.Add|4.Subtract|5.SquareRoot|6.Exponent|\n"
    "--------------------------------------------------------------\n"
    "|7.SumOfFiniteGSrs|8.GeoSeqRule|\n"
    "--------------------------------\n";

  cin >> calcmode;

  if (calcmode == "1")
  /*not sure if I should keep this a string and find out how
  to accept a number or the name of the mode, I might change this from time to time*/

  {
    cout << "---------------------------------------------------\n"
         << "|Please enter two numbers to multiply by together.|\n"
         << "---------------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point values into num1 and num2
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
  }
  /*instead of using another floating point value and namin it ans I just
  took out the ans and just made it solve the problem in the answer
  statement*/
  else if (calcmode == "2")

  {
    cout << "-----------------------------------------------------\n"
         << "|Please enter two numbers to divide by eachother by.|\n"
         << "-----------------------------------------------------\n";
    cin >> num1 >>
        num2; // reads 1 floating point values into num1 and num2 each
    cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
  }

  else if (calcmode == "3")

  {
    cout << "-----------------------------------------------\n"
         << "|Please enter two numbers to add to eachother.|\n"
         << "-----------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
  }

  else if (calcmode == "4")

  {
    cout << "------------------------------------------------------\n"
         << "|Please enter two numbers to subtract from eachother.|\n"
         << "------------------------------------------------------\n";
    cin >> num1 >> num2;
    /* reads 1 floating point values into num1 and num2 each */
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
  }

  else if (calcmode == "5")

  {
    cout << "--------------------------------------------------"
         << "|Please enter a number to get the square root of.|\n"
         << "--------------------------------------------------";
    cin >> num1; // reads 1 floating point value into num1
    cout << "The Square Root of " << num1 << " is " << sqrt(num1) << ".\n";
  }

  else if (calcmode == "6")

  {
    cout << "-------------------------------------------------\n"
         << "|Please enter the base First, then the exponent.|\n"
         << "-------------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
    cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
  }

  else if (calcmode == "7")
   
  {
    double num3, num4;
    cout << "---------------------------\n"
         << "|Please enter R, A1, and N|\n"
         << "---------------------------\n";
    cin >> num1/*R*/ >> num2/*A1*/ >> num3/*N*/;
    num4 = (1 - pow(num1, num3)) / (1 - num1); 
    cout << "The answer is " << num4 * num2 << ".\n";
  }

  /*I added two more double floating point values to the code for now if the
  user chooses this option because I could only get it down to that level,
  hopefully I can in the future*/

  else if (calcmode == "8")

  {
    double num3, num4;
    cout << "------------------------------------------------------------\n"
         << "|Please enter R and An with its subscript sepreated from it|\n"
         << "------------------------------------------------------------\n";
    cin >> num1/*R*/ >> num2/*A w/o the n*/ >> num3/*n*/;
    cout << num2 << " = (A1) * " << num1 << "^" << num3 << " - 1\n";
    num4 = num2/pow(num1, num3-1);
    cout << "A1 = " << num4 << '\n';
    cout << "An = " << num4 << " * " << num1 << "^n-1\n";    
  }
  
  else

  {
    cout << "-----------------------------------------\n"
         << "|Please enter a valid calculator action.|\n"
         << "-----------------------------------------\n";
  }
  
    /*puts out text telling them to enter a valid mode if they didn't type a
    valid number, not sure if this is a good way to do it. */

  return 0;
}
