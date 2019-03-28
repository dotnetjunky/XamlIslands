﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct TypeName;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Markup {

struct IXamlMetadataProvider;
struct IXamlType;
struct XmlnsDefinition;

}

WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup {

struct IXamlApplication;
struct IXamlApplicationFactory;
struct IXamlMetadataProviderContainer;
struct XamlApplication;

}

namespace winrt::impl {

template <> struct category<Microsoft::UI::Xaml::Markup::IXamlApplication>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Markup::IXamlApplicationFactory>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer>{ using type = interface_category; };
template <> struct category<Microsoft::UI::Xaml::Markup::XamlApplication>{ using type = class_category; };
template <> struct name<Microsoft::UI::Xaml::Markup::IXamlApplication>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Markup.IXamlApplication" }; };
template <> struct name<Microsoft::UI::Xaml::Markup::IXamlApplicationFactory>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Markup.IXamlApplicationFactory" }; };
template <> struct name<Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Markup.IXamlMetadataProviderContainer" }; };
template <> struct name<Microsoft::UI::Xaml::Markup::XamlApplication>{ static constexpr auto & value{ L"Microsoft.UI.Xaml.Markup.XamlApplication" }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Markup::IXamlApplication>{ static constexpr guid value{ 0x64026F6F,0xC72C,0x5A6B,{ 0xAD,0x69,0xD6,0xF1,0x6F,0x5C,0xAE,0x6B } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Markup::IXamlApplicationFactory>{ static constexpr guid value{ 0x3CF62ED0,0x61B6,0x5D7C,{ 0x82,0x34,0xE1,0xC5,0xCB,0x4C,0x16,0xC3 } }; };
template <> struct guid_storage<Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer>{ static constexpr guid value{ 0xCC6F80FA,0x1F2A,0x590B,{ 0x92,0x1D,0x1C,0x11,0xF0,0x90,0xCC,0xB5 } }; };
template <> struct default_interface<Microsoft::UI::Xaml::Markup::XamlApplication>{ using type = Microsoft::UI::Xaml::Markup::IXamlApplication; };

template <> struct abi<Microsoft::UI::Xaml::Markup::IXamlApplication>{ struct type : IInspectable
{
};};

template <> struct abi<Microsoft::UI::Xaml::Markup::IXamlApplicationFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateInstance2(void* parentProvider, void* baseInterface, void** innerInterface, void** value) noexcept = 0;
};};

template <> struct abi<Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Providers(void** value) noexcept = 0;
};};

template <typename D>
struct consume_Microsoft_UI_Xaml_Markup_IXamlApplication
{
};
template <> struct consume<Microsoft::UI::Xaml::Markup::IXamlApplication> { template <typename D> using type = consume_Microsoft_UI_Xaml_Markup_IXamlApplication<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Markup_IXamlApplicationFactory
{
    Microsoft::UI::Xaml::Markup::XamlApplication CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    Microsoft::UI::Xaml::Markup::XamlApplication CreateInstance2(Windows::UI::Xaml::Markup::IXamlMetadataProvider const& parentProvider, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
};
template <> struct consume<Microsoft::UI::Xaml::Markup::IXamlApplicationFactory> { template <typename D> using type = consume_Microsoft_UI_Xaml_Markup_IXamlApplicationFactory<D>; };

template <typename D>
struct consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProviderContainer
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Markup::IXamlMetadataProvider> Providers() const;
};
template <> struct consume<Microsoft::UI::Xaml::Markup::IXamlMetadataProviderContainer> { template <typename D> using type = consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProviderContainer<D>; };

}
