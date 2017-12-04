
#include "stdafx.h"



#include "PowerObject.h"

using namespace std;

PowerObject::PowerObject()
{
	mState = false;
	mPreUpdateState = false;
	PowerPercent = 0.0f;
}


PowerObject::~PowerObject()
{
}

bool PowerObject::IsOn()
{
	return mState;
}

void PowerObject::PlugInTo(PowerObject* Plug)
{
	if (InPut.size() > 0) {
		InPut[0] = Plug;
	}
	else {
		InPut.push_back(Plug);
	}
	Plug->WiredOutOf(this);
	mState = Plug->IsOn();
}

void PowerObject::WiredOutOf(PowerObject* Wired)
{
	/*if (OutPut.size() > 0) {
		OutPut[0] = Wired;
	}
	else
	{*/
		OutPut.push_back(Wired);
	//}
}

void PowerObject::Update()
{
	//if (mState != mPreUpdateState) {
		if (InPut.size() > 0) {
			mState = InPut[0]->mState;
			/*if (InPut[0]->PowerPercent < 0) { //change to is a PowerBar
				InPut[0]->Update();
			}*/
		}
		
	//}
	//mPreUpdateState = mState;
	/*for (int i = 0; OutPut.size > i; i++) {
		OutPut[i]->Update();
	}*/
}
void PowerObject::UpdateOuts()
{
	/*for (int i = 0; OutPut.size > i; i++) { //why does this one break it
		OutPut[i]->Update();
	}*/
	for (int i = 0; OutPut.size() > i; i++) {
		OutPut[i]->Update();
	}
}