#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string primeFactorize(int a){

    ostringstream oss;
    int dividor = 2;
    int quotient = a;

    while (quotient != 1){

        // If it is a division without any remainder
        if ((quotient % dividor) == 0){

            // We want a fancy output, be cool with such little overhead
            if (!oss.str().empty()){
                oss << " * ";
            }

            oss << dividor;
            quotient /= dividor;
        }

        // Otherwise it is time to increment the dividor
        else {
            dividor++;
        }
    }

    return oss.str();
}


int main(int argc, char *argv[])
{
    int num;
    cout << "Enter a positive integer to be factorized. OR -1 to quit." << endl;

    while (num != -1){

        cin >> num;

        cout << num << " = " << primeFactorize(num) << endl;
    }

    return 0;
}

