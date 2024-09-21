#pragma once

#include "Core.h"
#include "Hazel/Events/Event.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		~Application();
		void Run();
	};

	// To be found in CLIENT
	Application* CreateApplication();
}
