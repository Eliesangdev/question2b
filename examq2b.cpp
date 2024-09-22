#include <iostream>
using namespace std;

double calculateThirdAngle(double angle1, double angle2) {
    // let use if statement to check if the sum of the two angles is less than 180 degrees
    if (angle1 + angle2 >= 180) {
    cout <<"The sum of the two angles must be less than 180 degrees.";
    }

    //so here we're going to calculate the third angle using the formula: angle3 = 180 - angle1 - angle2
    double angle3 = 180 - angle1 - angle2;
    return angle3;
}

int main() {
    double angle1, angle2;

    // let Input two angles
    cout << "Enter first angle (degrees): ";
    cin >> angle1;
    cout << "Enter second angle (degrees): ";
    cin >> angle2;

    try {
        //then let calculate the third angle
        double angle3 = calculateThirdAngle(angle1, angle2);
        std::cout << "Third angle: " << angle3 << " degrees" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}


 
