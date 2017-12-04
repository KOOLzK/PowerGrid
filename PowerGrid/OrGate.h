#pragma once
#include "PowerObject.h"
class OrGate : public PowerObject
{
public:
	OrGate();
	~OrGate();

	void PlugInTo(PowerObject* InPutOne, PowerObject* InPutTwo);

	virtual void Update() override;
};

