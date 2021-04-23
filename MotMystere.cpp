// MotMystere.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

string getUserInput() {
    string motMystere;
    cout << "Entrer un mot : ";
    cin >> motMystere;
    cout << "Le mot est :"  << motMystere << "\n";
    return motMystere;
}

int main()
{
    string motMystere = getUserInput();
    
    //return 0;
   
    do
    {
        cout << "Quel est ce mot?" << endl;
        cin >> motMystere;
        cout << "Ce n'est pas le mot?" << endl;
        cout << "Quel est ce mot?" << endl;
        cin >> motMystere;

    } while (motMystere !="Procra");

        cout << "Bravo!" << endl;
       // return 0;
    
    

}



