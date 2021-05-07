#include <cmath> //includes the cmath library so I can easily do exponents and square roots
#include <iostream>
#include <limits>
#include "text.cpp"
using namespace std;
int main() {
  string calcmode = "0";
  double num1 = 0, num2 = 0;
  cout << R"(
 ___    __    ___   __     __    _     __
| |_)  / /\  | | \ / /`   / /\  | |   / /`
|_|_) /_/--\ |_|_/ \_\_, /_/--\ |_|__ \_\_, )"
       << '\n';
  cout << MENU;
  cin >> calcmode;
  while (true)
  {
      if (calcmode == "0" || calcmode == "exit" || calcmode == "ex")
      {
          cout << BYE;
          break;
      }
      else if (calcmode == "1" || calcmode == "menu" || calcmode == "n")
      {
          cout << MENU;
          cin >> calcmode;
          while (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "2" || calcmode == "multiply" || calcmode == "m")
      {
          cout << MULTIPLY;
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
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
      }
          cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
          cout << WHATELSE;
          cin >> calcmode;
          while (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "3" || calcmode == "divide" || calcmode == "d")
      {
          cout << DIVIDE;
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
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
          cout << WHATELSE;
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "4" || calcmode == "add" || calcmode == "a")
      {
          cout << ADD;
          cin >> num1 >> num2; // reads 1 floating point value into num1 and num2 each
          while (1)
          {
              if (cin.good())
              {
                  break;
              }
              else {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
          cout << WHATELSE;
          cin >> calcmode;

          if (cin.fail()) {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "5" || calcmode == "subtract" || calcmode == "s")
      {
          cout << SUBTRACT;
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
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
          cout << WHATELSE;
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "6" || calcmode == "squareroot" || calcmode == "sq")
      {
          cout << SQUAREROOT;
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
                  cout << ACTUALNUM;
                  cin >> num1;
              }
          }
          cout << "The Square Root of " << num1 << " is " << sqrt(num1) << ".\n";

          cout << WHATELSE;
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "7" || calcmode == "exponent" || calcmode == "e")
      {
          cout << EXPONENT;
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
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
          }
          cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
          cout << WHATELSE;
          cin >> calcmode;
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode;
          }
      }
      else if (calcmode == "8" || calcmode == "trigfunctions" || calcmode == "t")
      {
        double part1 = 0;
        double part2 = 0;
        string type = "degrees";
        string calcmode2 = "0";
        string calcmode3 = "deg";
        string message = DEGMES;
        cout << TRIGMENU;
        cin >> calcmode2;
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
            cout << ACTUALNUM;
            cin >> calcmode2;
          }
        }
        cout << RADORDEG;
        cin >> calcmode3;
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
            cout << ACTUALNUM;
            cin >> calcmode3;
          }
        }
        if (calcmode3 == "deg" || calcmode3 == "degree")
        {
          part1 = 3.14159265;
          part2 = 180;
          type = " radians";
          message = DEGMES;
        }
        if (calcmode3 == "rad" || calcmode == "radian")
        {
          part1 = 180;
          part2 = 3.14159265;
          type = " degrees";
          message = RADMES;
        }
        while (1)
        {
          if (calcmode2 == "0" || calcmode2 == "back" || calcmode2 == "b")
          {
            cout << MENU;
            cin >> calcmode;
            break;
          }
          else if (calcmode2 == "1" || calcmode2 == "sin" || calcmode2 == "s")
          {

            cout << message;
            cin >> num1;
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
                cout << ACTUALNUM;
                cin >> num1;
              }
            }

            cout << "The sine of " << num1 << " is " << sin(num1 * part1 / part2) << type << ".\n";
            cout << WHATELSE;
            cin >> calcmode2;
            if (cin.fail())
            {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode2;
            }
          }
          else if (calcmode2 == "2" || calcmode2 == "cos" || calcmode2 == "c")
          {
            cout << message;
            cin >> num1;
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
                cout << ACTUALNUM;
                cin >> num1;
              }
            }
            cout << "the cosine of " << num1 << " is " << cos(num1 * part1 / part2) << type << ".\n";
                  cout << WHATELSE;
                  cin >> calcmode2;
                  //TODO change statements below to be similar to the while statements above in similar places
                  if (cin.fail())
                  {
                      cin.clear();
                      cout << VALCALC;
                      cin >> calcmode2;
                  }
              }
          else if (calcmode2 == "3" || calcmode2 == "tan" || calcmode2 == "t")
          {
            cout << message;
            cin >> num1;
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
                cout << ACTUALNUM;
                cin >> num1;
              }
            }
            cout << "the tangent of " << num1 << " is " << tan(num1 * part1/part2)<< '\n';
            cout << WHATELSE;
            cin >> calcmode2;
            if (cin.fail())
            {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode2;
            }
          }
          else
          {
            cout << VALCALC;
            cin >> calcmode2;
          }
        }
      }
      else if (calcmode == "9" || calcmode == "geometricsrs+seq" || calcmode == "ge")
      {
          string calcmode2 = "0";
          cout << GEOMENU;
          cin >> calcmode2;
          while (1)
          {
              if (calcmode2 == "0" || calcmode2 == "back" || calcmode2 == "b")
              {
                  cout << MENU;
                  cin >> calcmode;
                  break;
              }
              else if (calcmode2 == "1" || calcmode2 == "sumoffinitegsrs" || calcmode2 == "u")
              {
                  double num3 = 0, num4 = 0;
                  cout << SUMOFFINITE;
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
                          cout << ACTUALNUM;
                          cin >> num1 >> num2 >> num3;
                      }
                  }
                  num4 = (1 - pow(num1, num3)) / (1 - num1);
                  cout << "The answer is " << num4 * num2 << ".\n";
                  cout << WHATELSE;
                  cin >> calcmode2;
                  if (cin.fail())
                  {
                      cin.clear();
                      cout << VALCALC;
                      cin >> calcmode2;
                  }
              }
              else if (calcmode2 == "2" || calcmode2 == "geoseqrule" || calcmode2 == "g")
              {
                  double num3 = 0, num4 = 0;
                  cout << GEOSEQRULE;
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
                          cout << ACTUALNUM;
                          cin >> num1 >> num2 >> num3;
                      }
                  }
                  cout << num2 << " = (A1) * " << num1 << "^" << num3 << " - 1\n";
                  num4 = num2 / pow(num1, num3 - 1);
                  cout << "A1 = " << num4 << '\n';
                  cout << "An = " << num4 << " * " << num1 << "^n-1\n";
                  cout << WHATELSE;
                  cin >> calcmode2;
                  if (cin.fail())
                  {
                      cin.clear();
                      cout << VALCALC;
                      cin >> calcmode2;
                  }
              }
              else if (calcmode2 == "3" || calcmode2 == "sumofinfgsrs" || calcmode2 == "i")
              {
                  cout << SUMOFINF;
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
                  cout << ACTUALNUM;
                  cin >> num1 >> num2;
              }
          }
          cout << "S = " << num2 / (1 - num1) << '\n';
          cout << WHATELSE;
          cin >> calcmode2;
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC;
              cin >> calcmode2;
          }
              }
              else
              {
                  cout << VALCALC;
                  cin >> calcmode2;
              }

          }
      }
      else if (calcmode == "10" || calcmode == "Probability" || calcmode == "p")
      {
          while (1) {
          string calcmode2 = "0";
          cout << PROBMENU;
          cin >> calcmode2;
          if (calcmode2 == "0" || calcmode == "back")
          {
          cout << MENU;
          cin >> calcmode;
          break;
      }
          if (calcmode2 == "1" || calcmode2 == "p(a|b)" || calcmode2 == "p")
          {
              cout << PAB;
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
                      cout << ACTUALNUM;
                      cin >> num1 >> num2;
                  }
              }
              cout << "P(A|B) = " << num1/num2 << '\n';
              cout << WHATELSE;
              cin >> calcmode2;
              if (cin.fail())
              {
                  cin.clear();
                  cout << VALCALC;
                  cin >> calcmode2;
              }
          }
          if (calcmode2 == "2" || calcmode2 == "p(aandb)" || calcmode2 == "b")
          {
              cout << PAANDB;
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
                      cout << ACTUALNUM;
                      cin >> num1 >> num2;
                  }
              }
              cout << "P(AandB) = " << num1*num2 << '\n';

              cout << WHATELSE;
              cin >> calcmode2;
              if (cin.fail())
              {
                  cin.clear();
                  cout << VALCALC;
                  cin >> calcmode2;
              }
          }
          }
      }
      else
      {
        cout << VALCALC;
        cin >> calcmode;
      }
  }
  return 0;
}
