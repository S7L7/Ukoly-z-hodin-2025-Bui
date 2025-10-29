#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main() {
     cout << "Sprava studentů" << endl;
    struct Student {
        int id;
        string jmeno;
        double prumer;
    };      
    return 0;
}

void NactiStudenta() {
    ifstream soubor("studenti.txt");
    string radek;
    if(!soubor.is_open()){
        cout << "soubor se nepodařilo otevřít" << endl;
    }else {
        while ( getline(soubor, radek))

            }
        }