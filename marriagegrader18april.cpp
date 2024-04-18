#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num1, num2, num3, num4, num5;
    double sum;

   cout << "How beautiful is she from 0 to 10?"<< endl;
    cin >> num1;
   cout << "How much does she go to church on a scale from 0 to 10?" << endl;
    cin >> num2;
   cout << "Scale from 0-10 how much does she love her parents?" << endl;
    cin >> num3;
   cout << "Scale from 0-10 how good is her reputation zero being bad 10 being amazing?" << endl;
    cin >> num4;
   cout << "Scale from 0-10 how loyal is she?" << endl;
    cin >> num5;
    
    sum = (num1 + num2 + num3 + num4 + num5 )*2;

    if (sum == 100) {
        cout << "I dont know how but marry this one quikly you found a diamond" << endl;
    } else if (sum >= 90) {
        cout << "You will be making a good choice she will raise a strong family with you" << endl;
    } else if (sum >= 80) {
        cout << "She will make for a good wife" << endl;
    } else if (sum >= 70) {
        cout << "She is better than most marry her" << endl;
    } else if (sum >= 60) {
        cout << "She above average at least, she might fight you a little" << endl;
    } else if (sum >= 50) {
        cout << "Dont recommend marrying her but she should be somewhat stabel if you do so" << endl;
    } else {
        cout << "There is danger stay away from her" << endl;
    }

    return 0;
}
