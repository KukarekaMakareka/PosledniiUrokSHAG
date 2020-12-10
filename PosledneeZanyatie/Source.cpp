//Project made by Polina Fokina YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
/*
Make TV-class. 
One field boolean typed 'isOn'. 
At start 'isOn' = false.
All constructors.
2 metods: the first turns TV on, the second turns it off.
Metod 'show', which shows if TV is on or off.
*/
//SUCK IT GREEN BOIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
#include <iostream>
#include "TV.h"
using namespace std;

int main()
{
	TVset lg_Ultra8k;
	lg_Ultra8k.showStatus();
	lg_Ultra8k.setChannelNum(45);
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOn();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOff();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOn();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.setChannelNum(99);
	lg_Ultra8k.showStatus();
	lg_Ultra8k.increaseChannelNumber();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.creaseChannelNumber();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.creaseChannelNumber();
	lg_Ultra8k.showStatus();
	return 0;
}