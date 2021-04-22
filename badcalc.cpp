#include <cmath> //includes the cmath library so I can easily do exponents and square roots
#include <iostream>
#include <limits>
using namespace std;
int main() {
  string calcmode = "0";
  double num1 = 0, num2 = 0;
  cout << R"(
 ___    __    ___   __     __    _     __
| |_)  / /\  | | \ / /`   / /\  | |   / /`
|_|_) /_/--\ |_|_/ \_\_, /_/--\ |_|__ \_\_, )"
       << '\n';
  cout << "---------------------------------------------------------------------\n"
          "|0.EXit|1.Multiply|2.Divide|3.Add|4.Subtract|5.SQuareroot|6.Exponent|\n"
          "---------------------------------------------------------------------\n"
          "|7.sUmoffinitegsrs|8.Geoseqrule|9.sumofInfgsrs|10.Probability|\n"
          "--------------------------------------------------------------\n";
  cin >> calcmode;

  while (true)
  {
      if (calcmode == "0" || calcmode == "exit" || calcmode == "ex")
      {
          cout << "----------\n"
               << "|Goodbye!|\n"
               << "----------\n";
          break;
      }
      else if (calcmode == "1" || calcmode == "multiply" || calcmode == "m")
      {
          cout << "---------------------------------------------------\n"
               << "|Please enter two numbers to multiply by together.|\n"
               << "---------------------------------------------------\n";
          cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
      }
          cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          while (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "2" || calcmode == "divide" || calcmode == "d")
      {
          cout << "-----------------------------------------------------\n"
               << "|Please enter two numbers to divide by eachother by.|\n"
               << "-----------------------------------------------------\n";
          cin >> num1 >> num2; // reads 1 floating point values into num1 and num2 each
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "3" || calcmode == "add" || calcmode == "a")
      {
          cout << "-----------------------------------------------\n"
               << "|Please enter two numbers to add to eachother.|\n"
               << "-----------------------------------------------\n";
          cin >> num1 >>
              num2; // reads 1 floating point value into num1 and num2 each
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail()) {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "4" || calcmode == "subtract" || calcmode == "s")
      {
          cout << "------------------------------------------------------\n"
               << "|Please enter two numbers to subtract from eachother.|\n"
               << "------------------------------------------------------\n";
          cin >> num1 >> num2;
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "5" || calcmode == "squareroot" || calcmode == "sq")
      {
          cout << "--------------------------------------------------\n"
               << "|Please enter a number to get the square root of.|\n"
               << "--------------------------------------------------\n";
          cin >> num1; // reads 1 floating point value into num1
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1;
              }
          }
          cout << "The Square Root of " << num1 << " is " << sqrt(num1) << ".\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "6" || calcmode == "exponent" || calcmode == "e")
      {
          cout << "-------------------------------------------------\n"
               << "|Please enter the base First, then the exponent.|\n"
               << "-------------------------------------------------\n";
          cin >> num1 >>
              num2; // reads 1 floating point value into num1 and num2 each
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "7" || calcmode == "sumoffinitegsrs" || calcmode == "u")
      {
          double num3 = 0, num4 = 0;
          cout << "---------------------------\n"
               << "|Please enter R, A1, and N|\n"
               << "---------------------------\n";
          cin >> num1 /*R*/ >> num2 /*A1*/ >> num3 /*N*/;
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2 >> num3;
              }
          }
          num4 = (1 - pow(num1, num3)) / (1 - num1);
          cout << "The answer is " << num4 * num2 << ".\n";
          cout << "---------------------------------\n"
           << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "8" || calcmode == "geoseqrule" || calcmode == "g")
      {
          double num3 = 0, num4 = 0;
          cout << "------------------------------------------------------------\n"
               << "|Please enter R and An with its subscript sepreated from it|\n"
               << "------------------------------------------------------------\n";
          cin >> num1 /*R*/ >> num2 /*A w/o the n*/ >> num3 /*n*/;
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "-------------------------------\n"
               << "|Please enter an acutal number|\n"
               << "-------------------------------\n";
          cin >> num1 >> num2 >> num3;
        }
      }
          cout << num2 << " = (A1) * " << num1 << "^" << num3 << " - 1\n";
          num4 = num2 / pow(num1, num3 - 1);
          cout << "A1 = " << num4 << '\n';
          cout << "An = " << num4 << " * " << num1 << "^n-1\n";
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "9" || calcmode == "sumofinfgsrs" || calcmode == "i")
      {
          cout << "-----------------------\n"
               << "|please enter R and A1|\n"
               << "-----------------------\n";
          cin >> num1 >> num2;
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << "-------------------------------\n"
                       << "|Please enter an acutal number|\n"
                       << "-------------------------------\n";
                  cin >> num1 >> num2;
              }
          }
          cout << "S = " << num2 / (1 - num1) << '\n';
          cout << "---------------------------------\n"
               << "|What else would you like to do?|\n"
               << "---------------------------------\n";
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      else if (calcmode == "10" || calcmode == "Probability" || calcmode == "p")
      {
          while (1) {
          string calcmode2 = "0";
          cout << "----------------------------\n"
               << "|0.Back|1.P(A|B)|2.p(aandB)|\n"
               << "----------------------------\n";
          cin >> calcmode2;
          if (calcmode2 == "0" || calcmode == "back")
          {
          cout <<
              "---------------------------------------------------------------------\n"
              "|0.EXit|1.Multiply|2.Divide|3.Add|4.Subtract|5.SQuareroot|6.Exponent|\n"
              "---------------------------------------------------------------------\n"
              "|7.sUmoffinitegsrs|8.Geoseqrule|9.sumofInfgsrs|10.Probability|\n"
              "--------------------------------------------------------------\n";
          cin >> calcmode;
          break;
      }
          if (calcmode2 == "1" || calcmode2 == "p(a|b)" || calcmode2 == "p")
          {
              cout << "----------------------------------------\n"
                   << "|Please enter P(AandB) followed by P(B)|\n"
                   << "----------------------------------------\n";
              cin >> num1 >> num2;
              while (1)
              {
                  if (cin.good())
                  {
                      break;
              }
                  else
                  {
                      cin.clear();
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "-------------------------------\n"
                           << "|Please enter an acutal number|\n"
                           << "-------------------------------\n";
                      cin >> num1 >> num2;
                  }
              }
              cout << "P(A|B) = " << num1/num2 << '\n';
              cout << "---------------------------------\n"
                   << "|What else would you like to do?|\n"
                   << "---------------------------------\n";
              cin >> calcmode2;
              if (cin.fail())
              {
                  cin.clear();
                  cout << "-----------------------------------------\n"
                       << "|Please enter a valid calculator action.|\n"
                       << "-----------------------------------------\n";
                  cin >> calcmode2;
              }
          }
          if (calcmode2 == "2" || calcmode2 == "p(aandb)" || calcmode2 == "b")
          {
              cout << "------------------------------------\n"
                   << "|Please enter P(A) followed by P(B)|\n"
                   << "------------------------------------\n";
              cin >> num1 >> num2;
              while (1)
              {
                  if (cin.good())
                  {
                      break;
                  }
                  else
                  {
                      cin.clear();
                      cin.ignore(numeric_limits<streamsize>::max(), '\n');
                      cout << "-------------------------------\n"
                           << "|Please enter an acutal number|\n"
                           << "-------------------------------\n";
                      cin >> num1 >> num2;
                  }
              }
              cout << "P(AandB) = " << num1*num2 << '\n';

              cout << "---------------------------------\n"
                   << "|What else would you like to do?|\n"
                   << "---------------------------------\n";
              cin >> calcmode2;
              if (cin.fail())
              {
                  cin.clear();
                  cout << "-----------------------------------------\n"
                       << "|Please enter a valid calculator action.|\n"
                       << "-----------------------------------------\n";
                  cin >> calcmode2;
              }
          }
          }
      }
          else
          {
              cout << "-----------------------------------------\n"
                   << "|Please enter a valid calculator action.|\n"
                   << "-----------------------------------------\n";
              cin >> calcmode;
          }
      }
      return 0;
  }
