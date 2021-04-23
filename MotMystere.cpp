// MotMystere.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //1 : On demande de saisir un mot

    string motMystere("Procra");
    cout << "Entrer un mot : ";
    std::cin >> motMystere;
    cout << "Le mot est :" << motMystere;
    return 0;

    //3 : On demande à l'utilisateur quel est le mot mystère

    string motMystere("Procra");
    cout << "Saisissez un mot : " << endl;;
    cin >> motMystere;
    cout << "Le mot est :" << motMystere << "\n";

    do
    {
        cout << "Quel est ce mot?" << endl;
        cin >> motMystere;
        cout << "Ce n'est pas le mot?" << endl;
        cout << "Quel est ce mot?" << endl;
        cin >> motMystere;
        
    } while (motMystere != "Procra");
        cout << "Bravo!" << endl;
        return 0;

    //2 : On mélange les lettres du mot
        
        srand(time(0));
        int position = rand() % motMystere.size();
        motMystere.erase(4, 1);
        cout << "Retire une lettre :" << motMystere[4,1];
       
        return 0;

}



