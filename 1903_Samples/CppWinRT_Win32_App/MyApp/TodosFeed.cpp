#include "pch.h"
#include "TodosFeed.h"
#if __has_include("TodosFeed.g.cpp")
#include "TodosFeed.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace react::uwp;

namespace winrt::MyApp::implementation
{
#ifdef BUNDLE  
	const wchar_t* JSFILENAME = L"index.windows";
#else  
	const wchar_t* JSFILENAME = L"index";
#endif
	const wchar_t* JSCOMPONENTNAME = L"TodosFeed";


    TodosFeed::TodosFeed()
    {
        InitializeComponent();
		LoadReact();
    }

	void TodosFeed::LoadReact()
	{
		InstanceSettings settings;

#ifdef BUNDLE
		settings.UseLiveReload = false;
		settings.UseWebDebugger = false;
#else    
		settings.UseLiveReload = true;
		settings.UseWebDebugger = true;
#endif

		auto instance = Instance::Create(winrt::hstring(JSFILENAME));
		instance.Start(settings);

		RootElement().Instance(instance);

		const wchar_t* initialProps = L"{}";

		RootElement().InitialProps(winrt::hstring(initialProps));

		RootElement().JsComponentName(JSCOMPONENTNAME);
		RootElement().StartRender();
	}

}
