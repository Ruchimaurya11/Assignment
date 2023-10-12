#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;

public:
    
    void get(void);
    void display(void);
};


void student::get(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;

    perc = (float)total / 500 * 100;
}
void student::display(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}

int main()
{
    student std[MAX]; 
    int n, i;

    cout << "Enter total number of students: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter details of student " <<i + 1 << ":\n";
        std[i].get();
    }

    cout << endl;

    for (i = 0; i< n; i++) {
        cout << "\nDetails of student " << (i + 1) << ":\n";
        std[i].display();
    }

    return 0;
}

