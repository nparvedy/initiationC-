#pragma once
#include <iostream>
#include <string>

using namespace std;

int guessTheWord() {
    int const nombreLettres(5);           //La taille du tableau

    string ourWord[nombreLettres];   //D�claration du tableau

    ourWord[0] = "a";  //Remplissage de la premi�re case
    ourWord[1] = "r";  //Remplissage de la deuxi�me case
    ourWord[2] = "b";   //Remplissage de la troisi�me case
    ourWord[3] = "r";   //Remplissage de la quatri�me case
    ourWord[4] = "e";   //Remplissage de la cinqui�me case

    string anotherWord[nombreLettres];   //D�claration du tableau

    anotherWord[0] = "_";  //Remplissage de la premi�re case
    anotherWord[1] = "_";  //Remplissage de la deuxi�me case
    anotherWord[2] = "_";   //Remplissage de la troisi�me case
    anotherWord[3] = "_";   //Remplissage de la quatri�me case
    anotherWord[4] = "_";   //Remplissage de la cinqui�me case

    string lettreChoisi;
    bool win = false;
    bool ourBool = false;
    int number = 0;

    for (int i(0); i < nombreLettres; ++i)
    {
        cout << anotherWord[i];
    }

    cout << endl;

    while (win == false) {

        if (ourBool == false) {
            for (int i(0); i < nombreLettres; ++i) {

                if (ourWord[i] == anotherWord[i]) {
                    ourWord[i] = "ok";

                    number++;
                    if (number == 5) {
                        cout << "Bravo tu as reussi � deviner le mot !";
                        ourBool = true;
                    }
                }
            }
        }

        if (ourBool == true) {
            win = true;
        }

        else {
            cin >> lettreChoisi;

            for (int i(0); i < nombreLettres; ++i)
            {
                if (lettreChoisi == ourWord[i]) {

                    anotherWord[i] = ourWord[i];

                    for (int i(0); i < nombreLettres; ++i)
                    {
                        cout << anotherWord[i];

                    }
                    cout << endl;
                }
            }
        }

        
    }
    return 0;
}
