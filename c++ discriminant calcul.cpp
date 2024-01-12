#include <iostream>
#include <cmath>
using namespace std;

double distance(double Xa, double Ya, double Xb, double Yb) {
    // Utilise le théorème de Pythagore pour calculer la distance
    double dist = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    return dist;
}

int main() {
    double Xa, Ya, Xb, Yb;

    // Demander à l'utilisateur de saisir les coordonnées
    cout << "Entrez les coordonnees du point A (Xa): ";
    cin >> Xa;
    cout << "Entrez les coordonnees du point A (Ya): ";
    cin >> Ya;
    

    cout << "Entrez les coordonnees du point B (Xb): ";
    cin >> Xb;
    cout << "Entrez les coordonnees du point B (Yb): ";
    cin >> Yb;

    double distAB = distance(Xa, Ya, Xb, Yb);
    std::cout << "La distance entre A et B est : " << distAB << std::endl;

    return 0;
}

