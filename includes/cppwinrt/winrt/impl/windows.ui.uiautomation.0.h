// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_UIAutomation_0_H
#define WINRT_Windows_UI_UIAutomation_0_H
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
    struct IAutomationConnection;
    struct IAutomationConnectionBoundObject;
    struct IAutomationElement;
    struct IAutomationTextRange;
    struct AutomationConnection;
    struct AutomationConnectionBoundObject;
    struct AutomationElement;
    struct AutomationTextRange;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::UIAutomation::IAutomationConnection>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::IAutomationElement>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::IAutomationTextRange>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::AutomationConnection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::AutomationConnectionBoundObject>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::AutomationElement>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::AutomationTextRange>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::AutomationConnection> = L"Windows.UI.UIAutomation.AutomationConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::AutomationConnectionBoundObject> = L"Windows.UI.UIAutomation.AutomationConnectionBoundObject";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::AutomationElement> = L"Windows.UI.UIAutomation.AutomationElement";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::AutomationTextRange> = L"Windows.UI.UIAutomation.AutomationTextRange";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::IAutomationConnection> = L"Windows.UI.UIAutomation.IAutomationConnection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject> = L"Windows.UI.UIAutomation.IAutomationConnectionBoundObject";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::IAutomationElement> = L"Windows.UI.UIAutomation.IAutomationElement";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::IAutomationTextRange> = L"Windows.UI.UIAutomation.IAutomationTextRange";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::IAutomationConnection>{ 0xAAD262ED,0x0EF4,0x5D43,{ 0x97,0xBE,0xA8,0x34,0xE2,0x7B,0x65,0xB9 } }; // AAD262ED-0EF4-5D43-97BE-A834E27B65B9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject>{ 0x5E8558FB,0xCA52,0x5B65,{ 0x98,0x30,0xDD,0x29,0x05,0x81,0x60,0x93 } }; // 5E8558FB-CA52-5B65-9830-DD2905816093
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::IAutomationElement>{ 0xA1898370,0x2C07,0x56FD,{ 0x99,0x3F,0x61,0xA7,0x2A,0x08,0x05,0x8C } }; // A1898370-2C07-56FD-993F-61A72A08058C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::IAutomationTextRange>{ 0x7E101B65,0x40D3,0x5994,{ 0x85,0xA9,0x0A,0x0C,0xB9,0xA4,0xEC,0x98 } }; // 7E101B65-40D3-5994-85A9-0A0CB9A4EC98
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::AutomationConnection>{ using type = winrt::Windows::UI::UIAutomation::IAutomationConnection; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::AutomationConnectionBoundObject>{ using type = winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::AutomationElement>{ using type = winrt::Windows::UI::UIAutomation::IAutomationElement; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::AutomationTextRange>{ using type = winrt::Windows::UI::UIAutomation::IAutomationTextRange; };
    template <> struct abi<winrt::Windows::UI::UIAutomation::IAutomationConnection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRemoteSystem(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExecutableFileName(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Connection(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::IAutomationElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRemoteSystem(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExecutableFileName(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::IAutomationTextRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationConnection
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRemoteSystem() const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppUserModelId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExecutableFileName() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::IAutomationConnection>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationConnection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationConnectionBoundObject
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::UIAutomation::AutomationConnection) Connection() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::IAutomationConnectionBoundObject>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationConnectionBoundObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationElement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRemoteSystem() const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppUserModelId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExecutableFileName() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::IAutomationElement>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationTextRange
    {
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::IAutomationTextRange>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationTextRange<D>;
    };
}
#endif
