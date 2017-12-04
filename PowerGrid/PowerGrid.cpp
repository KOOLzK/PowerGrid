// PowerGrid.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>


#include "PowerObject.h"
#include "Generator.h"
#include "Switch.h"
#include "PowerBar.h"
#include "AndGate.h"
#include "OrGate.h"
#include "NotGate.h"

using namespace std;

int main()
{
	char name[50];

	cout << "Power Grid Library Loading\n";

	/*
	//CASE 1
	Generator* Gen = new Generator;
	Switch* Sw = new Switch;
	Sw->PlugInTo(Gen);

	cout << "Generator created status = " << Gen->IsOn() << endl;
	cout << "Switch created isPowered = " << Sw->IsOn() << endl;
	*/

	/*
	//CASE 2
	Generator* Gen = new Generator;
	Switch* Sw = new Switch;
	PowerObject* Light = new PowerObject;

	Sw->PlugInTo(Gen);
	Light->PlugInTo(Sw);

	cout << "Generator created status = " << Gen->IsOn() << endl;
	cout << "Switch created isPowered = " << Sw->IsOn() << endl;
	cout << "Light created isPowered = " << Light->IsOn() << endl;

	Sw->Flip();
	cout << "Switch Flipped isPowered = " << Sw->IsOn() << endl;
	cout << "Light isPowered = " << Light->IsOn() << endl;
	*/

	/*
	//CASE 3
	Generator* Gen = new Generator;
	Switch* Sw = new Switch;
	PowerBar* Pb = new PowerBar;
	PowerObject* Light = new PowerObject;
	PowerObject* Light2 = new PowerObject;

	Sw->PlugInTo(Gen);
	Pb->PlugInTo(Sw);
	Light->PlugInTo(Pb);
	Light2->PlugInTo(Pb);
	Sw->Flip();
	cout << "Generator created status = " << Gen->IsOn() << endl;
	cout << "Switch created isPowered = " << Sw->IsOn() << endl;
	cout << "PowerBar created isPowered = " << Pb->IsOn() << endl;
	cout << "Light created isPowered = " << Light->IsOn() << endl;
	cout << "Light2 created isPowered = " << Light2->IsOn() << endl;

	*/

	/*
	//CASE 4
	Generator* Gen = new Generator;
	Switch* Sw = new Switch;
	AndGate* Ag = new AndGate;
	PowerObject* Light = new PowerObject;

	Sw->PlugInTo(Gen);
	Ag->PlugInTo(Gen, Sw);
	Light->PlugInTo(Ag);

	cout << "Generator created status = " << Gen->IsOn() << endl;
	cout << "Switch created isPowered = " << Sw->IsOn() << endl;
	cout << "Light created isPowered = " << Light->IsOn() << endl << endl;

	bool forever = true;
	do {
		//cout << "again" << endl;
		Sw->Flip();
		cout << "Switch Flipped isPowered = " << Sw->IsOn() << endl;
		cout << "Light isPowered = " << Light->IsOn() << endl;
		cin >> name;
		if (name[0] == name[1]) {
			forever = false;
		}
	} while (forever);
	
	cout << "end loop" << endl;
	*/


	//CASE 5
	Generator* Gen = new Generator;
	Switch* Sw = new Switch; 
	Switch* Sw2 = new Switch;
	AndGate* Ag = new AndGate;
	OrGate* Og = new OrGate;
	NotGate* Ng = new NotGate;
	PowerObject* Light = new PowerObject;

	Sw->PlugInTo(Gen);
	Sw2->PlugInTo(Gen);
	//Og->PlugInTo(Sw2, Sw);
	//Light->PlugInTo(Og);
	Ng->PlugInTo(Sw);
	Light->PlugInTo(Ng);

	cout << "Generator created status = " << Gen->IsOn() << endl;
	cout << "Switch created isPowered = " << Sw->IsOn() << endl;
	cout << "Light created isPowered = " << Light->IsOn() << endl << endl;

	bool forever = true;
	do {
		//cout << "again" << endl;
		Sw->Flip();
		cout << "Switch Flipped isPowered = " << Sw->IsOn() << endl;
		cout << "Light isPowered = " << Light->IsOn() << endl;
		cin >> name;
		if (name[0] == name[1]) {
			forever = false;
		}
	} while (forever);

	cout << "end loop" << endl;




	/*next meeting questions
	1) i don't know what i'm doing
	2) planning for what i will need in the future makes my brain hurt
	3) i didn't do enough this week
	4) i feel like there was more stuff last attempt 
	5) updates filter down the line but not up
	6) right now only switch can start the update line
	7) what else do i add
	8) there are something that are in mutlpal class, should i move them to base class
	9) can i call the super class

	ask VV
	10) what do i use money for
	11) should i go to a vents , like GDC

	*/


	cin >> name;
	cout << "Your name is:" << name << endl;


    return 0;
}

