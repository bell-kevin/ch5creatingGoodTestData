// ch5creatingGoodTestData.cpp : This file contains the 'main' function. Program execution begins and ends there. Kevin Bell programmer
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    auto count = 1;
    int score;
    double average, totalScore = 0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Enter the first name of student " << count << " (or Q to quit): ";
    cin >> name;
    while (name != "Q" && name != "q") {
        cout << "Enter score 1: ";
        cin >> score;
        while (score < 0 || score >100) {
            cout << "Score must be between 0 and 100. Please re-enter: ";
            cin >> score;
        }
        totalScore += score;
        cout << "Enter score 2: ";
        cin >> score;
        while (score < 0 || score > 100) {
            cout << "Score must be between 0 and 100. Please re-enter: ";
            cin >> score;
        }
        totalScore += score;
        average = totalScore / 2;
        cout << name << setw(6) << average << endl;
        average = 0;
        totalScore = 0;
        cout<<"Enter the first name of student " << count++ << " (or Q to quit) : ";
        cin >> name;
    }
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
