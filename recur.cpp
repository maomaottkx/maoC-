#include <iostream>
using namespace std;

int factorial (int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int fibonacci(int n) {
    if (n <= 2){
        return 1;
                }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
        }
}
 int main() {
    cout << factorial(5) << endl;
    cout << factorial(3) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(10) << endl;
    return 0;
 }