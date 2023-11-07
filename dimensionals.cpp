#include <iostream>
#include <cmath>
using namespace std;
const long double PI = M_PI;

long double rectangle(double x, double y) {
    return x * y;
}

long double p_rectangle(double x, double y) {
    return 2.0 * (x + y);
}

long double triangle(double x, double y) {
    return (x * y) * 0.5;
}

long double p_triangle(double x, double y) {
    return x + y + sqrt(pow(x, 2.0) + pow(y, 2.0));
}

long double circle(double r) {
    return PI * pow(r, 2);
}

long double p_circle(double r) {
    return 2.0 * r * PI;
}

long double box(double x, double y, double z) {
    return x * y * z;
}

long double surfaceBox(double x, double y, double z) {
    return (2.0 * x * y) + (2.0 * x * z) + (2.0 * y * z);
}

long double ball(double r) {
    return (4.0 / 3.0) * PI * r * r * r;
}

long double surfaceBall(double r) {
    return 4.0 * PI * r * r;
}

long double cylinder(double r, double y) {
    return PI * r * y;
}

long double surfaceCylinder(double r, double y) {
    return (2.0 * PI * r * r) + (2.0 * PI * r * y);
}

// INTRODUCTION
void intro() {
    cout << "Welcome to this application! \n";
    cout << "This application will calculate the area of 2-dimensional objects and the volume of 3-dimensional objects.\n";
    cout << "Hope this application can help you calculate and thank you for using it! \n";
    cout << "\n";
}

// 2 DIMENSIONS
void subMenu1() {
    cout << "SUB MENU 1 \n";
    cout << "0. Exit the program" << endl;
    cout << "1. Rectangle \n";
    cout << "2. Triangle \n";
    cout << "3. Circle \n";
    cout << "Choose the shape: ";
}

double rect(double x, double y) {
    cout << "Input length: ";
    cin >> x;
    cout << "Input width: ";
    cin >> y;
    cout << "The Area of the Rectangle : " << rectangle(x, y) << endl;
    cout << "The Perimeter of the Rectangle : " << p_rectangle(x, y) << endl;
}

double tri(double x, double y) {
    cout << "Input base: ";
    cin >> x;
    cout << "Input height: ";
    cin >> y;
    cout << "The Area of the Triangle : " << triangle(x, y) << endl;
    cout << "The Perimeter of the Triangle : " << p_triangle(x, y) << endl;
}

double cir(double r) {
    cout << "Input radius: ";
    cin >> r;
    cout << "The Area of the Circle : " << circle(r) << endl;
    cout << "The Circumference of the Circle : " << p_circle(r) << endl;
}

// 3 DIMENSION
void subMenu2() {
    cout << "SUB MENU 2 \n";
    cout << "0. Exit The Program \n";
    cout << "1. Box \n";
    cout << "2. Ball \n";
    cout << "3. Cylinder \n";
    cout << "Choose the shape: ";
}

double b(double x, double y, double z) {
    cout << "Input length: ";
    cin >> x;
    cout << "Input width: ";
    cin >> y;
    cout << "Input height: ";
    cin >> z;
    cout << "The Volume of the Box : " << box(x, y, z) << endl;
    cout << "The surface area of the Box : " << surfaceBox(x, y, z) << endl;
}

double ba(double r) {
    cout << "Input radius: ";
    cin >> r;
    cout << "The Volume of the Ball : " << ball(r) << endl;
    cout << "The surface area of the Ball : " << surfaceBall(r) << endl;
}

double cy(double r, double y) {
    cout << "Input radius: ";
    cin >> r;
    cout << "Input height: ";
    cin >> y;
    cout << "The Volume of the Cylinder : " << cylinder(r, y) << endl;
    cout << "The surface area of the cylinder : " << surfaceCylinder(r, y) << endl;
}

// MENU
void menu() {
    int cho1, cho2, cho3;
    double x, y, z, r;

    cout << "MENU \n";
    cout << "0. Exit The Program \n";
    cout << "1. 2 DIMENSIONAL OBJECTS \n";
    cout << "2. 3 DIMENSIONAL OBJECTS \n";
    cout << "Choose the objects: ";
    cin >> cho1;
    switch (cho1) {
        case 0:
            cout << "Exiting, please wait..." << endl;
            break;
        case 1: // CASE 2 DIMENSIONAL
            subMenu1();
            cin >> cho2;
            switch (cho2) {
                case 0:
                    cout << "Exiting, please wait...";
                    break;
                case 1:
                    rect(x, y);
                    break;
                case 2:
                    tri(x, y);
                    break;
                case 3:
                    cir(r);
                    break;
            }
            break;
        case 2: // CASE 3 DIMENSIONAL
            subMenu2();
            cin >> cho3;
            switch (cho3) {
                case 0:
                    cout << "Exiting, please wait...";
                    break;
                case 1:
                    b(x, y, z);
                    break;
                case 2:
                    ba(r);
                    break;
                case 3:
                    cy(r, y);
                    break;
            }
            break;
        default:
            cout << "Please only input 0, 1, or 2, please run the program again" << endl;
    }
}

int main() {
    intro();
    menu();
}


