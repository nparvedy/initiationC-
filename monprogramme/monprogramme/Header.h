#pragma once

#include <iostream>
#include <string>
using namespace std;


int guess() {
    cout << "Deviner le nombre ?\n";

    int nombre(13);
    int guessNumber;

    string win("false");
    cin >> guessNumber;

    while (win == "false") {
        if (guessNumber == nombre) {
            cout << "Bravo !";
            win = "true";
        }
        else {
            cout << "Recommence !";
            cin >> guessNumber;
        }


    }
    return 0;
}