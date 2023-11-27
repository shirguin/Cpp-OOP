#pragma once
class PC
{
public:
	enum PCState
	{
		ON,
		OFF,
		SLEEP
	};

	void setState(PCState state)
	{
		this->state = state;
	}

	PCState getState()
	{
		return this->state;
	}
private:
	PCState state;
};

