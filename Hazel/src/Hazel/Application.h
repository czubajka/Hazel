#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
	
	void Run();
	
	};

	//do be defined in Client Application
	Application* CreateApplication();
};