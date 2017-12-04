#pragma once
#include "PowerObject.h"

/*this class sends a pulse down the chain at a setable interval. in two modes first true for haft and
false for haft, exp. set to 30sec so timer is set to true(update chain) then wait 30sec then set to 
false(update chain) then wait 30sec back to true. second mode most of the time it is set to false but
when it gets to its interval is set to true, updates the chain then is set back to false until it 
reaches the interval again. third mode just update the chain.*/

class Timer : public PowerObject
{
public:
	Timer();
	~Timer();
};

