#include "Control.h"



void Control::MenuInicio(Estadio* liga, Estadio* saprisa, Estadio* cartago, Estadio* heredia)
{
	int opcMenu;
	do {
		system("cls");
		cout << "=================== Federacion de Futbol ==================================" << endl << endl;
		cout << "	1. Estadio Alejandro Morera Soto" << endl;
		cout << "	2. Estadio Ricardo Saprissa" << endl;
		cout << "	3. Estadio Fello Meza" << endl;
		cout << "	4. Estadio Rosabal Cordero" << endl;
		cout << "	5. Salir" << endl << endl;
		cout << "Digita la opcion deseada:";
		cin >> opcMenu;
		switch (opcMenu) {
		case 1:
			system("cls");
			cout << liga->toString() << endl;
			system("pause");
			break;
		case 2:
			system("cls");
			cout << saprisa->toString() << endl;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << cartago->toString() << endl;
			system("pause");
			break;

		case 4:
			system("cls");
			cout << heredia->toString() << endl;
			system("pause");
			break;
		}

	} while (opcMenu != 5);
}
