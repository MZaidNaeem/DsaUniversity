#include <iostream>
using namespace std;

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
    int count;
    
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
    
    return 0;
}
