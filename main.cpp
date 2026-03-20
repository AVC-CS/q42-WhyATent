#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rate1 = 1.10;
    const double rate2 = 2.20;
    const double rate3 = 3.70;
    const double rate4 = 4.80;
    double total_charge;
    double weight, distance, rate;

    cout << "Enter the package weight and distance: ";
    cin >> weight >> distance;
    if (weight <= 0 or weight > 20){
        cout << "Invalid weight. Input a weight between 1 and 20." << endl;
    } else if (weight > 0 and weight <=20){
        if (weight <= 2){
            rate = rate1;
        }
        else if (weight <= 6){
            rate = rate2;
        }
        else if (weight <= 10){
            rate = rate3;
        }
        else if (weight <= 20){
            rate = rate4;
        }
    }
    if (distance < 10 or distance > 3000){
        cout << "Invalid distance. Input a weight between 10 and 3000." << endl;
    } else if (distance < 500){
        total_charge = rate;
    } else {
        total_charge = (distance/500)*rate;
    }
    cout << setw(10) << left << setprecision(2) << fixed;
    cout << total_charge << endl;

    return 0;
}
