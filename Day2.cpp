/*#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    cout << "Enter C:";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is Greatest.";
    }
    else if (b > a && b > c)
    {
        cout << b << "B is Greatest.";
    }

    else
    {
        cout << c << "C is Greatest.";
    }

    return 0;
}

#include <iostream>

#include <string>

using namespace std;

// Tools

const int Pen{ 10 };

const int Marker{ 20 };

const int Eraser{ 30 };

const int Rectangle{ 40 };

const int Circle{ 50 };

const int Ellipse{ 60 };

int main(){

  int tool {Eraser};

  switch (tool)

  {

    case Pen : {

       cout << "Active tool is Pen" << endl;

    }

    break;

    case Marker : {

       cout << "Active tool is Marker" << endl;

    }

    break;

 //if (tool==Eraser || tool==Rectangle || tool==Circle) {

   //cout << "Drawing Shapes" << endl;

 //}

    case Eraser :

    case Rectangle :

    case Circle : {

       cout << "Drawing Shapes" << endl;

    }

    break;

    case Ellipse : {

       cout << "Active tool is Ellipse" << endl;

    }

    break;

    default: {

      cout << "No match found" << endl;

    }

      break;

  }

  cout << "Moving on" << endl;

  /*

  // Condition can only be integer of enum (We'll learn about enums later in the course)

  string name {"John"};

  switch (name) // Compiler error!

  {

  }


  return 0;

}


#include <iostream>
using namespace std;

void Add(int num1, int num2)
{
    cout << num1 + num2 << endl;
}
void Difference(int num1, int num2)
{
    cout << num1 - num2 << endl;
}
void Product(int num1, int num2)
{
    cout << num1 * num2 << endl;
}
void Remainder(int num1, int num2)
{
    cout << num1 % num2 << endl;
}
int main()
{
    int a = 10, b = 10;
    Add(a, b);
    Difference(a, b);
    Product(a, b);
    Remainder(a, b);
    return 0;
}*/

// What do we need a user defined function //
// Ans-
/*
Function Features-
1)Reuability
2)Readability
create the below function
add()
void sub()
void div()
void multiply()
void rem()*/
/*
#include <iostream>
using namespace std;

int main()
{

}

// What is functions overloading ?
// When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading.
// What is Poymorphism ?
// As The Name "Poly" suggest it means one thing can exist in many forms similarly a functon can exists in many form.
// What are the use case of function overloading ?
//

#include <iostream>

using namespace std;

int main()
{

    // Complete the code.

    int a, b, i;

    cin >> a >> b;

    for (i = a; i <= b; i++)

    {

        if (i >= 1 && i <= 9)
        {

            switch (i)
            {

            case 1:

                cout << "one" << endl;

                break;

            case 2:

                cout << "two" << endl;

                break;

            case 3:

                cout << "three" << endl;

                break;

            case 4:

                cout << "four" << endl;

                break;

            case 5:

                cout << "five" << endl;

                break;

            case 6:

                cout << "six" << endl;

                break;

            case 7:

                cout << "seven" << endl;

                break;

            case 8:

                cout << "eight" << endl;

                break;

            case 9:

                cout << "nine" << endl;

                break;
            }
        }

        else if (i > 9 && i % 2 == 0)

            cout << "even" << endl;

        else if (i > 9 && i % 2 == 1)

            cout << "odd" << endl;
    }
    return 0;
}
*/

/*1) A student will not be allowed to sit in exam if his/her attendence is less

than 75%.

Take following input from user:

 Number of classes held

 Number of classes attended.

And print:

 percentage of class attended

 Is student is allowed to sit in exam or not.*/

#include <iostream>
using namespace std;

int main()
{
    float ch, float ca, float divs;
    float per;
    cout << "Enter The Classes Held:" << endl;
    cin >> ch;
    cout << "Enter The Classes Attended:" << endl;
    cin >> ca;
    divs = (ca / ch);
    per = divs * 100;
    if (per >= 75)
    {
        cout << "Allowed to Sit." << endl;
    }
    else
    {
        cout << "Not Allowed to Sit." << endl;
    }
    return 0;
}
