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
    "---------------------------------------------------------------------\n"
    "|0.EXit|1.Multiply|2.Divide|3.Add|4.Subtract|5.SQuareroot|6.Exponent|\n"
    "---------------------------------------------------------------------\n"
    "|7.sUmoffinitegsrs|8.Geoseqrule|\n"
    "--------------------------------\n";

  cin >> calcmode;
  while (calcmode == "0" || calcmode == "exit" || calcmode == "ex" ||
         calcmode == "1" || calcmode == "multiply" || calcmode == "m" ||
         calcmode == "2" || calcmode == "divide" || calcmode == "d" ||
         calcmode == "3" || calcmode == "add" || calcmode == "a" ||
         calcmode == "4" || calcmode == "subtract" || calcmode == "s" ||
         calcmode == "5" || calcmode == "squareoot" || calcmode == "sq" ||
         calcmode == "6" || calcmode == "exponent" || calcmode == "e" ||
         calcmode == "7" || calcmode == "sumoffinitegsrs" || calcmode == "u" ||
         calcmode == "8" || calcmode == "geoseqrule" || calcmode == "g") {
    
  if (calcmode == "0" || calcmode == "exit" || calcmode == "ex")
      
  {
    cout << "---------\n"
         << "|Goodbye|\n"
         << "---------\n";
    break; 
  }


  else if (calcmode == "1" || calcmode == "multiply" || calcmode == "m")
  /*not sure if I should keep this a string and find out how
  to accept a number or the name of the mode, I might change this from time to time*/

  {
    cout << "---------------------------------------------------\n"
         << "|Please enter two numbers to multiply by together.|\n"
         << "---------------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point values into num1 and num2
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
    
  }
  
  /*instead of using another floating point value and namin it ans I just
  took out the ans and just made it solve the problem in the answer
  statement*/
  else if (calcmode == "2" || calcmode == "divide" || calcmode == "d" )
  

  {
    cout << "-----------------------------------------------------\n"
         << "|Please enter two numbers to divide by eachother by.|\n"
         << "-----------------------------------------------------\n";
    cin >> num1 >>
        num2; // reads 1 floating point values into num1 and num2 each
    cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode; 
  }

  else if (calcmode == "3" || calcmode == "add" || calcmode == "a")

  {
    cout << "-----------------------------------------------\n"
         << "|Please enter two numbers to add to eachother.|\n"
         << "-----------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
    
  }

  else if (calcmode == "4" || calcmode == "subtract" || calcmode == "s")

  {
    cout << "------------------------------------------------------\n"
         << "|Please enter two numbers to subtract from eachother.|\n"
         << "------------------------------------------------------\n";
    cin >> num1 >> num2;
    /* reads 1 floating point values into num1 and num2 each */
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }

  else if (calcmode == "5" || calcmode == "squareoot" || calcmode == "sq")

  {
    cout << "--------------------------------------------------"
         << "|Please enter a number to get the square root of.|\n"
         << "--------------------------------------------------";
    cin >> num1; // reads 1 floating point value into num1
    cout << "The Square Root of " << num1 << " is " << sqrt(num1) << ".\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }

  else if (calcmode == "6" || calcmode == "exponent" || calcmode == "e")

  {
    cout << "-------------------------------------------------\n"
         << "|Please enter the base First, then the exponent.|\n"
         << "-------------------------------------------------\n";
    cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
    cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }

  else if (calcmode == "7" || calcmode == "sumoffinitegsrs" || calcmode == "u")
   
  {
    double num3, num4;
    cout << "---------------------------\n"
         << "|Please enter R, A1, and N|\n"
         << "---------------------------\n";
    cin >> num1/*R*/ >> num2/*A1*/ >> num3/*N*/;
    num4 = (1 - pow(num1, num3)) / (1 - num1); 
    cout << "The answer is " << num4 * num2 << ".\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }

  /*I added two more double floating point values to the code for now if the
  user chooses this option because I could only get it down to that level,
  hopefully I can in the future*/

  else if (calcmode == "8" || calcmode == "geoseqrule" || calcmode == "g")

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
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }
  
  else

  {
    cout << "-----------------------------------------\n"
         << "|Please enter a valid calculator action.|\n"
         << "-----------------------------------------\n";
    cout << "---------------------------------\n"
         << "|What else would you like to do?|\n"
         << "---------------------------------\n";
    cin >> calcmode;
  }
  }
    /*puts out text telling them to enter a valid mode if they didn't type a
    valid number, not sure if this is a good way to do it. */

  return 0;
}
