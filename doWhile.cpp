#include <iostream>
using namespace std;
//sum of n number using do-while loop
int main() {
    int n;
    cout << "Enter the number of elements to add: ";
    cin >> n;

    int sum = 0;
    int i = 0;
    int number;

    do {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        sum += number;
        i++;
    } while (i < n);

    cout << "The sum of the " << n << " numbers is: " << sum << endl;

    return 0;
}
