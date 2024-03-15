#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//my laptop no longer works
int main() {
    double merchandiseCost; 
    double salary;
    double rent;
    double electricity;
    double desiredProfit; 
    double sale = 0.15;
    double netProfitMargin = 0.10;
    cout << "Insert the total cost of your merchandise: ";
    cin >> merchandiseCost;
    cout << "Insert the total salary for your employees: ";
    cin >> salary;
    cout << "Insert the total yearly rent of the store: ";
    cin >> rent;
    cout << "Insert the estimated electricity cost for the store: ";
    cin >> electricity;
    double totalExpenses = salary + rent + electricity;
    double desiredProfit = merchandiseCost * netProfitMargin;
    double requiredMarkup = (totalExpenses + desiredProfit) / (1 - sale) - merchandiseCost;
    double markupPercentage = (requiredMarkup / merchandiseCost) * 100;
    cout <<fixed <<setprecision(2);
    cout << "Linda, the merchandise should be marked up by " << markupPercentage << "% to achieve a 10% net profit after a 15% sale." <<;
    return 0;
    }