/// @file

#include "Application.hpp"

namespace silvia
{

void cApplication::Run()
{
	Init();
};

void cApplication::Init()
{
	if(!PreInit())
		return;
	
	// TODO: something else...
	
	PostInit();
	//TODO: return true?
};

void cApplication::GameLoop()
{
	while(true)
	{
		// TODO
	};
};

}; // namespace silvia