#pragma once
#include "PowerObject.h"
class Switch : public PowerObject

{
public:
	Switch();
	~Switch();

	void PlugInTo(PowerObject* Plug) override;

	//void WiredOutOf(PowerObject* Wired) override;

	virtual void Update() override;

	bool IsOn() override;

	void Flip();

	bool Toggle;

};

