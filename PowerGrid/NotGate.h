#pragma once
#include "PowerObject.h"
class NotGate : public PowerObject
{
public:
	NotGate();
	~NotGate();

	void PlugInTo(PowerObject* Plug);

	virtual void Update() override;
};

