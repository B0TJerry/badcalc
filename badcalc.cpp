#include <cmath> //includes the cmath library so I can easily do exponents and square roots
#include <iostream>
#include <limits>
#include <fstream>
#include "text.cpp"
using namespace std;
int main() {
  fstream history;
  history.open("history.txt", ios::app);
  string calcmode = "0";
  double num1 = 0, num2 = 0;
  cout << R"(
 ___    __    ___   __     __    _     __
| |_)  / /\  | | \ / /`   / /\  | |   / /`
|_|_) /_/--\ |_|_/ \_\_, /_/--\ |_|__ \_\_, )"
       << '\n';
  history << "__________________________________________________________\n\n";
  cout << MENU && history << MENU;
  cin >> calcmode && history << calcmode << '\n';
  while (true)
  {
      if (calcmode == "0" || calcmode == "exit" || calcmode == "ex")
      {
        cout << BYE && history << BYE;
          break;
      }
      else if (calcmode == "1" || calcmode == "menu" || calcmode == "n")
      {
        cout << MENU && history << MENU;
        cin >> calcmode && history << calcmode << '\n';
          while (cin.fail())
          {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history >> calcmode;
          }
      }
      else if (calcmode == "2" || calcmode == "multiply" || calcmode == "m")
      {
        cout << MULTIPLY && history << MULTIPLY;
          cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
          while (true)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
              }
      }
          cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n" && history << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';
          while (cin.fail())
          {
            cin.clear();
            cout << VALCALC && history << VALCALC;
            //history << VALCALC;
            cin >> calcmode && history << calcmode << '\n';
          }
      }
      else if (calcmode == "3" || calcmode == "divide" || calcmode == "d")
      {
          cout << DIVIDE && history << DIVIDE;
          cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
          while (true)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
              }
          }
          cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n" && history << num1 << " / " << num2 << " = " << num1 / num2 << '\n' ;
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history << calcmode << '\n';
          }
      }
      else if (calcmode == "4" || calcmode == "add" || calcmode == "a")
      {
          cout << ADD && history << ADD;
          cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
          while (true)
          {
              if (cin.good())
              {
                  break;
              }
              else {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
              }
          }
          cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n" && history << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';

          if (cin.fail()) {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history << calcmode << '\n';
          }
      }
      else if (calcmode == "5" || calcmode == "subtract" || calcmode == "s")
      {
          cout << SUBTRACT && history << SUBTRACT;
          cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
          while (true)
          {
              if (cin.good())
              {
                  break;
              }
              else {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
              }
          }
          cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n" && history << num1 << " - " << num2 << " = " << num1-num2 << '\n';
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history << calcmode << '\n';
          }
      }
      else if (calcmode == "6" || calcmode == "squareroot" || calcmode == "sq")
      {
          cout << SQUAREROOT && history << SQUAREROOT;
          cin >> num1 && history << num1 << '\n';
          while(true)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 && history << num1 << '\n';
              }
          }
          cout << "The Square Root of " << num1 << " = " << sqrt(num1) << ".\n" && history << "The Square Root of " << num1 << " = " << sqrt(num1) << ".\n";
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history << calcmode << '\n';
          }
      }
      else if (calcmode == "7" || calcmode == "exponent" || calcmode == "e")
      {
          cout << EXPONENT && history << EXPONENT;
              cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
          while (true)
          {
              if (cin.good())
              {
                  break;
              }
              else
              {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout << ACTUALNUM && history << ACTUALNUM;
                  cin >> num1 >> num2 && history << num1 << " " << num2 << '\n';
              }
          }
          cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n" && history << num1 << "^" << num2 << " = " << pow(num1,num2) << '\n';
          cout << WHATELSE && history << WHATELSE;
          cin >> calcmode && history << calcmode << '\n';
          if (cin.fail())
          {
              cin.clear();
              cout << VALCALC && history << VALCALC;
              cin >> calcmode && history << calcmode << '\n';
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
         while (true)
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
        while (true)
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
        while (true)
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
            while (true)
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
            while (true)
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
            while (true)
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
          while (true)
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
                  while (true)
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
                  while (true)
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
                  while (true)
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
          while (true) {
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
              while (true)
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
              while (true)
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
        cout << VALCALC && history << VALCALC;
        cin >> calcmode && history << calcmode << '\n';
      }
  }
  return 0;
  void close();
}
