#include <iostream>
#include <cmath>
using namespace std;
//my laptop is broken
int main() {
    double heightInches;
    double distanceFeet;
    double distanceInches;
    double angleDegrees;
    cout << "What is the height of your eye level in inches? ";
    cin >> heightInches;
    cout << "What is the distance from the tree in feet? ";
    cin >> distanceFeet;
    cout << "What is the additional inches to the distance to the tree? ";
    cin >> distanceInches;
    cout << "What is the angle in degrees: ";
    cin >> angleDegrees;
    double heightFeet = heightInches / 12.0;
    double totalDistanceFeet = distanceFeet + (distanceInches / 12.0);
    double angleRadians = angleDegrees * (M_PI / 180.0);
    double treeHeightFeet = heightFeet + (totalDistanceFeet * tan(angleRadians));
    cout << "The height of the tree is " << treeHeightFeet << " feet." << endl;
    return 0;
}