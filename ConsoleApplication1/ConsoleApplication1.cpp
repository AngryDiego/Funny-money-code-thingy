#include <iostream>
using namespace std;


double Add(double& initialM, double addition) {
    initialM += addition;
    return initialM;
}

double Sub(double& initialM, double& subtraction) {
    initialM -= subtraction;
    return initialM;
}

double Deposit(double& initialM, double part, double percent, int term) {
    initialM -= part;
    double result = part;
    for (int i = 1; i <= term; i++) {
        result += (part * (percent / 100));
    }
    result += initialM;

    return result;
}

double Credit(double& initialM, double part, double percent, int term) {
    double result = part;
    for (int i = 1; i <= term; i++) {
        result += (part * (percent / 100));
    }
    result -= initialM;

    return result;
}

int main() {
    int choice;
    double balance;

    double value;
    double percent;
    double part;
    int term;

    cout << "Inpute amount of money: ";
    cin >> balance;

    cout << "Choose an operation : \n1. Add \n2. Subtrackt \n3. Deposit \n4. Credit" << endl;
    cin >> choice;

    switch (choice) {
    case 1 :
        cout << "Choose amout of input : " << endl;
        cin >> value;

        cout << Add(balance, value) << endl;
        cout << balance << endl;
        break;
    case 2:
        cout << "Choose amout of input : " << endl;
        cin >> value;

        cout << Sub(balance, value) << endl;
        cout << balance << endl;
        break;
    case 3:
        cout << "Choose amout of deposit : " << endl;
        cin >> part;
        cout << "Choose amout of peracentage : " << endl;
        cin >> percent;
        cout << "Enter termin : " << endl;
        cin >> term;

        cout << Deposit (balance, part, percent, term) << endl;
        cout << balance << endl;
        break;
    case 4:
        cout << "Choose amout of Credit : " << endl;
        cin >> part;
        cout << "Choose amout of peracentage : " << endl;
        cin >> percent;
        cout << "Enter termin : " << endl;
        cin >> term;

        cout << Credit(balance, part, percent, term) << endl;
        cout << balance << endl;
        break;
    }
}