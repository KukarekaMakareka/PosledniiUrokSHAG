#include <iostream>
#include "TV.h"
using namespace std;

TVset::TVset() { isOn = false; }
void TVset::turnOn() { isOn = true; }
void TVset::turnOff() { isOn = false; }
void TVset::showStatus() 
{ 
	if (isOn)
		cout << "TV is on. Channel " << channelNum << endl;
	else
		cout << "TV is off" << endl;
}
void TVset::setChannelNum(unsigned int fNum) { channelNum = fNum; }
void TVset::increaseChannelNumber() 
{ 
	channelNum++; 
	if (channelNum > 99)
		channelNum = 1;
}
void TVset::creaseChannelNumber() 
{ 
	channelNum--;
	if (channelNum < 1)
		channelNum = 99;
}