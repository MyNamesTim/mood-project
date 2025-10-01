/**
* Name: Timothy Nakev
* Program Name: Mood Project
* Date: 10/1/2025
* Extra: Changed terminal text color to green.
*/

#include <iostream>
#include <string>
using namespace std;

const string GREEN = "\033[32m";
const string RESET = "\033[0m";

int main() {
    cout << GREEN;

    int mood;
    cout << "What is your mood?" << endl;
    cout << "1 - Happy" << endl;
    cout << "2 - Sad" << endl;
    cout << "3 - Angry" << endl;
    cout << "4 - Excited" << endl;
    cout << "5 - Stressed" << endl;

    cout << RESET;
    cin >> mood;
    cout << GREEN;

    switch (mood) {
        case 1:
            cout << "That's great! I hope the rest of your day is just as happy." << endl;
            break;
        case 2:
            cout << "I'm sorry! What is it that you are sad about?" << endl;
            break;
        case 3:
            cout << "Is your name Nolan? If so, you may have fallen for ragebait." << endl;
            break;
        case 4:
            cout << "That's awesome! What are you excited by?" << endl;
            break;
        case 5:
            cout << "That sucks. Have you tried any stress relieving tricks or tried talking to someone?" << endl;
            break;
        default:
            cout << "Invalid number input. Try again." << endl;
            break;
    }

    cout << RESET;

    return 0;
}