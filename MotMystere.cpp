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
    cout << "Le mot est :" << motMystere;
    return motMystere;
}

int main()
{
    string motMystere;
    motMystere=getUserInput();
    return 0;
   
  
    
    

}



