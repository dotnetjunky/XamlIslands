﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Markup.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Markup.1.h"

WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup {

struct WINRT_EBO XamlApplication :
    Microsoft::UI::Xaml::Markup::IXamlApplication,
    impl::base<XamlApplication, Windows::UI::Xaml::Application>,
    impl::require<XamlApplication, Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer, Windows::Foundation::IClosable, Windows::UI::Xaml::IApplication, Windows::UI::Xaml::IApplication2, Windows::UI::Xaml::IApplication3, Windows::UI::Xaml::IApplicationOverrides, Windows::UI::Xaml::IApplicationOverrides2, Windows::UI::Xaml::Markup::IXamlMetadataProvider>
{
    XamlApplication(std::nullptr_t) noexcept {}
    XamlApplication();
    XamlApplication(Windows::UI::Xaml::Markup::IXamlMetadataProvider const& parentProvider);
};

}
