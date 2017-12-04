#include "stdafx.h"
#include "PowerBar.h"

/*for V2 add 
everything else updates down but power bar will update down and up the chain

maybe when something calls power bar's WiredOutOf, WiredOutOf gives the caller an ID then when someone
lower triggers power bar's update it will give that ID and after power bar has recalculated how much
power everyone below should get it updates everyone but the ID that started the update

or there could just be an updateUs and updateDown so power bar calls all the updateDowns and they 
don't call updateUps in respones only when they change
*/
PowerBar::PowerBar()
{
}


PowerBar::~PowerBar()
{
}

void PowerBar::Update()
{
	if (InPut.size() > 0) {
		mState = true;
	}
	for (int i = 0; OutPut.size() > i; i++) {
		OutPut[i]->Update();
	}
}