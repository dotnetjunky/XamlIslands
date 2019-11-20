#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "TodosFeed.g.h"

namespace winrt::MyApp::implementation
{
    struct TodosFeed : TodosFeedT<TodosFeed>
    {
        TodosFeed();
	private:
		void LoadReact();
    };
}

namespace winrt::MyApp::factory_implementation
{
    struct TodosFeed : TodosFeedT<TodosFeed, implementation::TodosFeed>
    {
    };
}
