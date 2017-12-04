#pragma once
#include "PowerObject.h"
class AndGate : public PowerObject

{
public:
	AndGate();
	~AndGate();

	void PlugInTo(PowerObject* InPutOne, PowerObject* InPutTwo);

	virtual void Update() override;

	bool IsOn() override;
};

