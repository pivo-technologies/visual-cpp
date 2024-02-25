// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Workplace_0_H
#define WINRT_Windows_Management_Workplace_0_H
WINRT_EXPORT namespace winrt::Windows::Management::Workplace
{
    enum class MessagingSyncPolicy : int32_t
    {
        Disallowed = 0,
        Allowed = 1,
        Required = 2,
    };
    struct IMdmAllowPolicyStatics;
    struct IMdmPolicyStatics2;
    struct IWorkplaceSettingsStatics;
    struct MdmPolicy;
    struct WorkplaceSettings;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Workplace::IMdmPolicyStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Management::Workplace::MdmPolicy>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Workplace::WorkplaceSettings>{ using type = class_category; };
    template <> struct category<winrt::Windows::Management::Workplace::MessagingSyncPolicy>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::MdmPolicy> = L"Windows.Management.Workplace.MdmPolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::WorkplaceSettings> = L"Windows.Management.Workplace.WorkplaceSettings";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::MessagingSyncPolicy> = L"Windows.Management.Workplace.MessagingSyncPolicy";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics> = L"Windows.Management.Workplace.IMdmAllowPolicyStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::IMdmPolicyStatics2> = L"Windows.Management.Workplace.IMdmPolicyStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics> = L"Windows.Management.Workplace.IWorkplaceSettingsStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics>{ 0xC39709E7,0x741C,0x41F2,{ 0xA4,0xB6,0x31,0x4C,0x31,0x50,0x25,0x86 } }; // C39709E7-741C-41F2-A4B6-314C31502586
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Workplace::IMdmPolicyStatics2>{ 0xC99C7526,0x03D4,0x49F9,{ 0xA9,0x93,0x43,0xEF,0xCC,0xD2,0x65,0xC4 } }; // C99C7526-03D4-49F9-A993-43EFCCD265C4
    template <> inline constexpr guid guid_v<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics>{ 0xE4676FFD,0x2D92,0x4C08,{ 0xBA,0xD4,0xF6,0x59,0x0B,0x54,0xA6,0xD3 } }; // E4676FFD-2D92-4C08-BAD4-F6590B54A6D3
    template <> struct abi<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsBrowserAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCameraAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsMicrosoftAccountAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsStoreAllowed(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetMessagingSyncPolicy(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsMicrosoftAccountOptional(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IMdmAllowPolicyStatics
    {
        WINRT_IMPL_AUTO(bool) IsBrowserAllowed() const;
        WINRT_IMPL_AUTO(bool) IsCameraAllowed() const;
        WINRT_IMPL_AUTO(bool) IsMicrosoftAccountAllowed() const;
        WINRT_IMPL_AUTO(bool) IsStoreAllowed() const;
    };
    template <> struct consume<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IMdmPolicyStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Management::Workplace::MessagingSyncPolicy) GetMessagingSyncPolicy() const;
    };
    template <> struct consume<winrt::Windows::Management::Workplace::IMdmPolicyStatics2>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IMdmPolicyStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Management_Workplace_IWorkplaceSettingsStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMicrosoftAccountOptional() const;
    };
    template <> struct consume<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Management_Workplace_IWorkplaceSettingsStatics<D>;
    };
}
#endif
