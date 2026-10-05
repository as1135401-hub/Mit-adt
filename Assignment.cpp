#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    float marks;
    string result;

public:
    void acceptDetails() {
        cout << "--- Enter Student Details ---" << endl;
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cin.ignore(); // Clear newline character from buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void calculateResult() {
        if (marks >= 40) {
            result = "Passed";
        } else {
            result = "Failed";
        }
    }

    void displayDetails() {
        cout << "\n--- Student Report Card ---" << endl;
        cout << "Roll Number : " << roll_no << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
        cout << "Result      : " << result << endl;
    }
};

int main() {
    Student s;
    s.acceptDetails();
    s.calculateResult();
    s.displayDetails();
    return 0;
}