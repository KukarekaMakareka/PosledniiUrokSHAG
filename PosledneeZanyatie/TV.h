#pragma once
class TVset
{
private:
	bool isOn;
	unsigned int channelNum;
public:
	TVset();
	void turnOn();
	void turnOff();
	void showStatus();
	void setChannelNum(unsigned int);
	void increaseChannelNumber();
	void creaseChannelNumber();
};