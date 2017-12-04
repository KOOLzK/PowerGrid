#pragma once
#include <vector>

class PowerObject
{
public:
	PowerObject();
	~PowerObject();

	virtual bool IsOn();

	virtual void PlugInTo(PowerObject* Plug);

	virtual void WiredOutOf(PowerObject* Wired);

	virtual void Update();

	virtual void UpdateOuts();

	float PowerPercent;

protected:
	bool mState;
	bool mPreUpdateState;

	std::vector <PowerObject*> InPut;
	std::vector <PowerObject*> OutPut;

};

