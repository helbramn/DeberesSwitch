#include "DeberesSwitch.h"
#include <iostream>

using namespace std;

int main() {
	int edad;
	bool licencia;

	cout << "Ingrese su edad: ";
	cin >> edad;

	switch (edad >= 18) {

	case 0:
		cout << "no puede conducir siendo menor";
		break;

	case 1:
	  cout << "Tiene licencia de conducir? (1 si, 0 no) ";
	  cin >> licencia;
		switch (licencia) {
		case false:
			cout << "No puedes conducir sin licencia";
			break;
		case true:
			cout << "puede conducir sin problema";
			break;
		default:
			cout << "ese valor no es legible, responda con claridad";
			break;
		}
		break;
	}

}