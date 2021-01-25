#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int return_pow(int base, int exp) {
  return pow(base, exp);
}

int return_number(int number, int i) {
  return number % return_pow(10, (i+1)) / return_pow(10, i);
}

int to_decimal(int number) {
  int total, sum;

  for(int i = 0; i <= to_string(number).length(); i++) {
    total = 0;
    total = return_number(number, i) * return_pow(2, i);
    sum += total;
  }

  return sum;
}

int to_binary(int number) {
    int total;
    string binary = "";

    if (number == 0) {
        cout << "0";
    }
    else {
        while (number > 0) {
            total = number % 2;
            binary += to_string(total);
            number /= 2;
        }

        for (int i = binary.length(); i >= 0; i--) {
            cout << binary[i];
        }
    }
    return 0;
}

int main() {

    int number, option, loop = 1;


    while (loop == 1) {
        cout << "\n--------------------\n";
        cout << "|     Conversor      |\n";
        cout << "---------------------------------\n";
        cout << "| 1 - Decimal to Binary         |\n";
        cout << "| 2 - Binary to Decimal         |\n";
        cout << "---------------------------------\n";
        cout << "| 0 - Exit                      |\n";
        cout << "---------------------------------\n";
        cout << "Pick your option: ";
        cin >> option;

        switch(option) {
            case 1:
                cout << "Number: ";
                cin >> number;
                to_binary(number);
                break;
            case 2:
                cout << "Number: ";
                cin >> number;
                cout << to_decimal(number);
                break;
            case 0:
                cout << "Exiting program. Goodbye\n";
                loop = 5;
                break;
            default:
              cout << "Error. Please pick again";
                break;
        }
    }

}
