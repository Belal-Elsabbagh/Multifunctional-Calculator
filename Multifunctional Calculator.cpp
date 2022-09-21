#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141592653589;
double x, y, z;

void xyzinput() // Prompt to enter values for X, Y, Z
{
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

void calculation(int x, int y, char optr)
{
    if (optr == '+')
        cout << add(x, y) << endl;
    else if (optr == '-')
        cout << subtract(x, y) << endl;
    else if (optr == '*')
        cout << multiply(x, y) << endl;
    else if (optr == '/')
        cout << division(x, y) << endl;
}

void basicOperations()
{
    char op;
    int i, j;
    cout << "Enter expression: ";
    cin >> i >> op >> j;

    calculation(i, j, op);
}

void AreaOfCircle() // Area Of Circle Calculator
{
    double rad, area, angle;

    cout << "Enter radius: ";
    cin >> rad;
    area = pi * pow(rad, 2);

    cout << "Area = " << area << " squared units\n\n";
}

void NormOfVector() // Norm of vector calculator
{
    double norm;

    xyzinput();

    norm = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

    cout << "Norm of vector = " << norm << endl;
}

void EvenOrOdd() // Determines whether an integer is even or odd
{
    int num;
    cout << "Enter integer: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Number is even.\n\n";
    else
        cout << "Number is odd\n\n";
}

void AreaOfTriangle()
{
    double area, angle;
    ;
    cout << "Enter the length of side 1: ";
    cin >> x;
    cout << "Enter the length of side 2: ";
    cin >> y;
    cout << "Enter the measure of the included angle in degrees: ";
    cin >> angle;

    area = 0.5 * x * y * sin(angle * pi / 180);

    cout << "Area = " << area << endl;
}

void divisors()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            cout << i << endl;
    }
}

void factorial()
{
    int n, factorial = 1;

    cout << "Enter positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
}

int main()
{
    int fun;
    // User prompt
    cout << "Functions...\n\n";
    cout << "1. Basic Operations\n"
         << "2. Area of circle\n"
         << "3. Norm of Vector\n"
         << "4. Even or Odd\n";
    cout << "5. Area of triangle\n"
         << "6. Factors of integer\n"
         << "7. Factorial of integer\n\n";

    for (; true;)
    {
        cout << "Choose function number: ";
        cin >> fun;

        // Add new funcitons here
        switch (fun)
        {
        case 0:
            return 0;
        case 1:
            basicOperations();
        case 2:
            AreaOfCircle();
        case 3:
            NormOfVector();
        case 4:
            EvenOrOdd();
        case 5:
            AreaOfTriangle();
        case 6:
            divisors();
        case 7:
            factorial();
        default:
            cout << "invalid function\n";
        }
    }
}