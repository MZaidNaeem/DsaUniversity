#include<iostream>
using namespace std;

int findHCF(int num1, int num2);  // Function prototype for HCF
int findLCM(int num1, int num2);  // Function prototype for LCM

void findFactorial() {
    int factorial = 1;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = num; i > 0; i--) {
        factorial *= i;
    }

    cout << "Factorial is: " << factorial << endl;
}

void findFibonacci() {
    int fnum, snum, range;

    cout << "Enter first number: ";
    cin >> fnum;

    cout << "Enter second number: ";
    cin >> snum;

    cout << "Enter range: ";
    cin >> range;

    int third = 0;

    for (int i = 1; i <= range; i++) {
        third = fnum + snum;
        cout << i << " number is " << third << endl;
        fnum = snum;
        snum = third;
    }
}

void findReverse() {
    int num = 0;
    cout << "Enter the number: ";
    cin >> num;

    if (num == 0) {
        cout << num << endl;
        return;
    }

    cout << "Reversed Number: " << endl;
    while (num != 0) {
        int digt = num % 10;
        cout << digt;
        num /= 10;
    }
    cout << endl;
}

void findHcfLcm() {
    int count = 0;

    cout << "Enter the number of elements: ";
    cin >> count;

    int values[count];

    cout << "Enter the numbers one by one: ";
    for (int i = 0; i < count; i++) {
        cin >> values[i];
    }

    int hcfResult = values[0];
    int lcmResult = values[0];

    for (int i = 1; i < count; i++) {
        hcfResult = findHCF(hcfResult, values[i]);
        lcmResult = findLCM(lcmResult, values[i]);
    }

    cout << "The HCF of the given numbers is: " << hcfResult << endl;
    cout << "The LCM of the given numbers is: " << lcmResult << endl;
}

int findHCF(int num1, int num2) {
    int smallest;
    if (num1 < num2) {
        smallest = num1;
    } else {
        smallest = num2;
    }

    int hcf = 1;
    for (int i = 1; i <= smallest; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

int findLCM(int num1, int num2) {
    return (num1 * num2) / findHCF(num1, num2);
}

int main() {
    int choice;
    bool exit = false;

    while (!exit) {
        cout << "\nSelect an option: \n";
        cout << "1. Find Factorial\n";
        cout << "2. Find Fibonacci Series\n";
        cout << "3. Reverse a Number\n";
        cout << "4. Find HCF and LCM\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                findFactorial();
                break;
            case 2:
                findFibonacci();
                break;
            case 3:
                findReverse();
                break;
            case 4:
                findHcfLcm();
                break;
            case 5:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    cout << "Program exit.\n";
    return 0;
}
