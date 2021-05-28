#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int integer;
    double doub;
    string str;
    
    // Read and save an integer, double, and String to your variables.
    cin >> integer;
    cin >> doub;
    getline(cin >> ws, str);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + integer << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+doub << endl; 
    //printf("%.1f\n", d+doub);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << str << endl;

    return 0;
}
