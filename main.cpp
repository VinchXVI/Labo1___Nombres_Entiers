#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <numeric>

using namespace std;

int main() {    //9 876 543 210 123 456 789

    unsigned long long int intNombreBase10 = 0 ,
        intReste = 0 ,
        intFin = 36 ;

    string strResultFinal = "" ,
            strResultIntermediaire = "";

    cout << "Bonjour User, ecris un nombre stp : ";
    cin >> intNombreBase10 ;

    //intNombreBase10 = numeric_limits<long int>::max();

    if(intNombreBase10 < 0) {
        for (int intBase = 2; intBase <= intFin; ++intBase) {
            for (unsigned long long int intNouvelleBase = intNombreBase10;
                 intNouvelleBase > 0; intNouvelleBase = (intNouvelleBase - intReste) / intBase) {
                intReste = intNouvelleBase % intBase;
                if (intReste < 10) {
                    strResultIntermediaire.insert(0, 1, (char) (intReste + 48));
                } else {
                    strResultIntermediaire.insert(0, 1, (char) (intReste + 55));
                }
            }
            strResultFinal += strResultIntermediaire;
            strResultFinal += '\n';
            strResultIntermediaire = "";
        }


        cout << strResultFinal;
    }

    // Attention, Ceci est un copier-coller de votre résultat.

    if(intNombreBase10 == 0) {
        cout << "Entrez un nombre entier positif \n"
                "0 = (0)02\n"
                "  = (0)03\n"
                "  = (0)04\n"
                "  = (0)05\n"
                "  = (0)06\n"
                "  = (0)07\n"
                "  = (0)08\n"
                "  = (0)09\n"
                "  = (0)10\n"
                "  = (0)11\n"
                "  = (0)12\n"
                "  = (0)13\n"
                "  = (0)14\n"
                "  = (0)15\n"
                "  = (0)16\n"
                "  = (0)17\n"
                "  = (0)18\n"
                "  = (0)19\n"
                "  = (0)20\n"
                "  = (0)21\n"
                "  = (0)22\n"
                "  = (0)23\n"
                "  = (0)24\n"
                "  = (0)25\n"
                "  = (0)26\n"
                "  = (0)27\n"
                "  = (0)28\n"
                "  = (0)29\n"
                "  = (0)30\n"
                "  = (0)31\n"
                "  = (0)32\n"
                "  = (0)33\n"
                "  = (0)34\n"
                "  = (0)35\n"
                "  = (0)36";
    }



    //long long unsigned ValeurDeMerde = 9876543210123456789;

//cout << log2(ValeurDeMerde);


    //cout << strResultIntermediaire;


    return 0;
}
