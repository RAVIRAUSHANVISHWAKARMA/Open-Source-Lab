#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
cout << "Enter the number of integers: ";
cin >> n;
if (n <= 0) {
cout << "Invalid input. Number of integers must be positive." << endl;
return 1;
}
vector<int> arr(n);
double sum = 0.0;
cout << "Enter " << n << " integers:" << endl;
for (int i = 0; i < n; ++i) {
cin >> arr[i];
sum += arr[i];
}
double average = sum / n;
cout << "Average of the integers: " << average << endl;
return 0;
}
