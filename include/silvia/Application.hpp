/// @file

#pragma once

namespace silvia
{

class cApplication
{
public:
	virtual ~cApplication() = default;
	
	void Run();
private:
	void Init();
	void GameLoop();
protected:
	virtual bool PreInit(){}
	virtual void PostInit(){}
};

}; // namespace silvia