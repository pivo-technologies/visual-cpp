// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Networking_Connectivity_H
#define WINRT_Windows_Networking_Connectivity_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/Windows.Networking.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesSent() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesSent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesReceived() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesReceived(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IRandomAccessStreamReference) consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionThumbnail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionThumbnail(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_ProviderId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_ProviderId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_AccessPointName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_AccessPointName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_UserName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_UserName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_Password(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_Password(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_IsCompressionEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_IsCompressionEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType() const
    {
        winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->get_AuthenticationType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType(winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext)->put_AuthenticationType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_ICellularApnContext2<D>::ProfileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext2)->get_ProfileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_ICellularApnContext2<D>::ProfileName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ICellularApnContext2)->put_ProfileName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkCostType) consume_Windows_Networking_Connectivity_IConnectionCost<D>::NetworkCostType() const
    {
        winrt::Windows::Networking::Connectivity::NetworkCostType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionCost)->get_NetworkCostType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionCost<D>::Roaming() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionCost)->get_Roaming(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionCost<D>::OverDataLimit() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionCost)->get_OverDataLimit(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionCost<D>::ApproachingDataLimit() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionCost)->get_ApproachingDataLimit(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionCost2<D>::BackgroundDataUsageRestricted() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionCost2)->get_BackgroundDataUsageRestricted(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::ProfileName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->get_ProfileName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkConnectivityLevel) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkConnectivityLevel() const
    {
        winrt::Windows::Networking::Connectivity::NetworkConnectivityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkConnectivityLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkNames(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::ConnectionCost) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetConnectionCost() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetConnectionCost(&value));
        return winrt::Windows::Networking::Connectivity::ConnectionCost{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::DataPlanStatus) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetDataPlanStatus() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetDataPlanStatus(&value));
        return winrt::Windows::Networking::Connectivity::DataPlanStatus{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkAdapter) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkAdapter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkAdapter(&value));
        return winrt::Windows::Networking::Connectivity::NetworkAdapter{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::DataUsage) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(winrt::Windows::Foundation::DateTime const& StartTime, winrt::Windows::Foundation::DateTime const& EndTime) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsage(impl::bind_in(StartTime), impl::bind_in(EndTime), &value));
        return winrt::Windows::Networking::Connectivity::DataUsage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::DataUsage) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(winrt::Windows::Foundation::DateTime const& StartTime, winrt::Windows::Foundation::DateTime const& EndTime, winrt::Windows::Networking::Connectivity::RoamingStates const& States) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsagePerRoamingStates(impl::bind_in(StartTime), impl::bind_in(EndTime), static_cast<uint32_t>(States), &value));
        return winrt::Windows::Networking::Connectivity::DataUsage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkSecuritySettings) consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkSecuritySettings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkSecuritySettings(&value));
        return winrt::Windows::Networking::Connectivity::NetworkSecuritySettings{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWwanConnectionProfile() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWwanConnectionProfile(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWlanConnectionProfile() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWlanConnectionProfile(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WwanConnectionProfileDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->get_WwanConnectionProfileDetails(&value));
        return winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WlanConnectionProfileDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->get_WlanConnectionProfileDetails(&value));
        return winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::guid>) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::ServiceProviderGuid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->get_ServiceProviderGuid(&value));
        return winrt::Windows::Foundation::IReference<winrt::guid>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint8_t>) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetSignalBars() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->GetSignalBars(&value));
        return winrt::Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::DomainConnectivityLevel) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetDomainConnectivityLevel() const
    {
        winrt::Windows::Networking::Connectivity::DomainConnectivityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->GetDomainConnectivityLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::NetworkUsage>>) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::DataUsageGranularity const& granularity, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->GetNetworkUsageAsync(impl::bind_in(startTime), impl::bind_in(endTime), static_cast<int32_t>(granularity), impl::bind_in(states), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::NetworkUsage>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectivityInterval>>) consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetConnectivityIntervalsAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile2)->GetConnectivityIntervalsAsync(impl::bind_in(startTime), impl::bind_in(endTime), impl::bind_in(states), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectivityInterval>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage>>) consume_Windows_Networking_Connectivity_IConnectionProfile3<D>::GetAttributedNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile3)->GetAttributedNetworkUsageAsync(impl::bind_in(startTime), impl::bind_in(endTime), impl::bind_in(states), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage>>) consume_Windows_Networking_Connectivity_IConnectionProfile4<D>::GetProviderNetworkUsageAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime, winrt::Windows::Networking::Connectivity::NetworkUsageStates const& states) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile4)->GetProviderNetworkUsageAsync(impl::bind_in(startTime), impl::bind_in(endTime), impl::bind_in(states), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfile5<D>::CanDelete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile5)->get_CanDelete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfileDeleteStatus>) consume_Windows_Networking_Connectivity_IConnectionProfile5<D>::TryDeleteAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile5)->TryDeleteAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfileDeleteStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfile6<D>::IsDomainAuthenticatedBy(winrt::Windows::Networking::Connectivity::DomainAuthenticationKind const& kind) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfile6)->IsDomainAuthenticatedBy(static_cast<int32_t>(kind), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsConnected(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsConnected(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWwanConnectionProfile(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWwanConnectionProfile(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWlanConnectionProfile(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWlanConnectionProfile(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType(winrt::Windows::Networking::Connectivity::NetworkCostType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->put_NetworkCostType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkCostType) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType() const
    {
        winrt::Windows::Networking::Connectivity::NetworkCostType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->get_NetworkCostType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid(winrt::Windows::Foundation::IReference<winrt::guid> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->put_ServiceProviderGuid(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::guid>) consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter)->get_ServiceProviderGuid(&value));
        return winrt::Windows::Foundation::IReference<winrt::guid>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming(winrt::Windows::Foundation::IReference<bool> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsRoaming(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<bool>) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsRoaming(&value));
        return winrt::Windows::Foundation::IReference<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit(winrt::Windows::Foundation::IReference<bool> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsOverDataLimit(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<bool>) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsOverDataLimit(&value));
        return winrt::Windows::Foundation::IReference<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted(winrt::Windows::Foundation::IReference<bool> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsBackgroundDataUsageRestricted(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<bool>) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsBackgroundDataUsageRestricted(&value));
        return winrt::Windows::Foundation::IReference<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::RawData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_RawData(&value));
        return winrt::Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectionProfileFilter3<D>::PurposeGuid(winrt::Windows::Foundation::IReference<winrt::guid> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3)->put_PurposeGuid(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::guid>) consume_Windows_Networking_Connectivity_IConnectionProfileFilter3<D>::PurposeGuid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3)->get_PurposeGuid(&value));
        return winrt::Windows::Foundation::IReference<winrt::guid>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::ConnectionProfile) consume_Windows_Networking_Connectivity_IConnectionSession<D>::ConnectionProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectionSession)->get_ConnectionProfile(&value));
        return winrt::Windows::Networking::Connectivity::ConnectionProfile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::StartTime() const
    {
        winrt::Windows::Foundation::DateTime startTime{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectivityInterval)->get_StartTime(put_abi(startTime)));
        return startTime;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::ConnectionDuration() const
    {
        winrt::Windows::Foundation::TimeSpan duration{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectivityInterval)->get_ConnectionDuration(put_abi(duration)));
        return duration;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionSession>) consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AcquireConnectionAsync(winrt::Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics)->AcquireConnectionAsync(*(void**)(&cellularApnContext), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionSession>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AddHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics)->AddHttpRoutePolicy(*(void**)(&routePolicy)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::RemoveHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics)->RemoveHttpRoutePolicy(*(void**)(&routePolicy)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::DataPlanUsage) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataPlanUsage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_DataPlanUsage(&value));
        return winrt::Windows::Networking::Connectivity::DataPlanUsage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint32_t>) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataLimitInMegabytes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_DataLimitInMegabytes(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint64_t>) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::InboundBitsPerSecond() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_InboundBitsPerSecond(&value));
        return winrt::Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint64_t>) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::OutboundBitsPerSecond() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_OutboundBitsPerSecond(&value));
        return winrt::Windows::Foundation::IReference<uint64_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::NextBillingCycle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_NextBillingCycle(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint32_t>) consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::MaxTransferSizeInMegabytes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanStatus)->get_MaxTransferSizeInMegabytes(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::MegabytesUsed() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanUsage)->get_MegabytesUsed(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::LastSyncTime() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataPlanUsage)->get_LastSyncTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesSent() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataUsage)->get_BytesSent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesReceived() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IDataUsage)->get_BytesReceived(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkAdapter) consume_Windows_Networking_Connectivity_IIPInformation<D>::NetworkAdapter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IIPInformation)->get_NetworkAdapter(&value));
        return winrt::Windows::Networking::Connectivity::NetworkAdapter{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint8_t>) consume_Windows_Networking_Connectivity_IIPInformation<D>::PrefixLength() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IIPInformation)->get_PrefixLength(&value));
        return winrt::Windows::Foundation::IReference<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::LanIdentifierData) consume_Windows_Networking_Connectivity_ILanIdentifier<D>::InfrastructureId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ILanIdentifier)->get_InfrastructureId(&value));
        return winrt::Windows::Networking::Connectivity::LanIdentifierData{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::LanIdentifierData) consume_Windows_Networking_Connectivity_ILanIdentifier<D>::PortId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ILanIdentifier)->get_PortId(&value));
        return winrt::Windows::Networking::Connectivity::LanIdentifierData{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Networking_Connectivity_ILanIdentifier<D>::NetworkAdapterId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ILanIdentifier)->get_NetworkAdapterId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Type() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ILanIdentifierData)->get_Type(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<uint8_t>) consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::ILanIdentifierData)->get_Value(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<uint8_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::OutboundMaxBitsPerSecond() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->get_OutboundMaxBitsPerSecond(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::InboundMaxBitsPerSecond() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->get_InboundMaxBitsPerSecond(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::IanaInterfaceType() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->get_IanaInterfaceType(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkItem) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkItem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkItem(&value));
        return winrt::Windows::Networking::Connectivity::NetworkItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkAdapterId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkAdapterId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfile>) consume_Windows_Networking_Connectivity_INetworkAdapter<D>::GetConnectedProfileAsync() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkAdapter)->GetConnectedProfileAsync(&value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetConnectionProfiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetConnectionProfiles(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::ConnectionProfile) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetInternetConnectionProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetInternetConnectionProfile(&value));
        return winrt::Windows::Networking::Connectivity::ConnectionProfile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::LanIdentifier>) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetLanIdentifiers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetLanIdentifiers(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::LanIdentifier>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::HostName>) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetHostNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetHostNames(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::HostName>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ProxyConfiguration>) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetProxyConfigurationAsync(winrt::Windows::Foundation::Uri const& uri) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetProxyConfigurationAsync(*(void**)(&uri), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ProxyConfiguration>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::EndpointPair>) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetSortedEndpointPairs(param::iterable<winrt::Windows::Networking::EndpointPair> const& destinationList, winrt::Windows::Networking::HostNameSortOptions const& sortOptions) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->GetSortedEndpointPairs(*(void**)(&destinationList), static_cast<uint32_t>(sortOptions), &value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::EndpointPair>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
    {
        winrt::event_token eventCookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->add_NetworkStatusChanged(*(void**)(&networkStatusHandler), put_abi(eventCookie)));
        return eventCookie;
    }
    template <typename D> typename consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged_revoker consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(auto_revoke_t, winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
    {
        return impl::make_event_revoker<D, NetworkStatusChanged_revoker>(this, NetworkStatusChanged(networkStatusHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(winrt::event_token const& eventCookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics)->remove_NetworkStatusChanged(impl::bind_in(eventCookie));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>>) consume_Windows_Networking_Connectivity_INetworkInformationStatics2<D>::FindConnectionProfilesAsync(winrt::Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkInformationStatics2)->FindConnectionProfilesAsync(*(void**)(&pProfileFilter), &value));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Networking_Connectivity_INetworkItem<D>::NetworkId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkItem)->get_NetworkId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkTypes) consume_Windows_Networking_Connectivity_INetworkItem<D>::GetNetworkTypes() const
    {
        winrt::Windows::Networking::Connectivity::NetworkTypes value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkItem)->GetNetworkTypes(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkAuthenticationType) consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkAuthenticationType() const
    {
        winrt::Windows::Networking::Connectivity::NetworkAuthenticationType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkAuthenticationType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkEncryptionType) consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkEncryptionType() const
    {
        winrt::Windows::Networking::Connectivity::NetworkEncryptionType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkEncryptionType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewInternetConnectionProfile() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewInternetConnectionProfile(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewConnectionCost() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewConnectionCost(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewNetworkConnectivityLevel() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewNetworkConnectivityLevel(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewDomainConnectivityLevel() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewDomainConnectivityLevel(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewHostNameList() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewHostNameList(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewWwanRegistrationState() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewWwanRegistrationState(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringOperationalState() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringOperationalState(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringClientCount() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringClientCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesSent() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkUsage)->get_BytesSent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesReceived() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkUsage)->get_BytesReceived(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Networking_Connectivity_INetworkUsage<D>::ConnectionDuration() const
    {
        winrt::Windows::Foundation::TimeSpan duration{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::INetworkUsage)->get_ConnectionDuration(put_abi(duration)));
        return duration;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::BytesSent() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IProviderNetworkUsage)->get_BytesSent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint64_t) consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::BytesReceived() const
    {
        uint64_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IProviderNetworkUsage)->get_BytesReceived(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::ProviderId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IProviderNetworkUsage)->get_ProviderId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>) consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::ProxyUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IProxyConfiguration)->get_ProxyUris(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::CanConnectDirectly() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IProxyConfiguration)->get_CanConnectDirectly(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::ConnectionProfile) consume_Windows_Networking_Connectivity_IRoutePolicy<D>::ConnectionProfile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IRoutePolicy)->get_ConnectionProfile(&value));
        return winrt::Windows::Networking::Connectivity::ConnectionProfile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::HostName) consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IRoutePolicy)->get_HostName(&value));
        return winrt::Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::DomainNameType) consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostNameType() const
    {
        winrt::Windows::Networking::DomainNameType value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IRoutePolicy)->get_HostNameType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::RoutePolicy) consume_Windows_Networking_Connectivity_IRoutePolicyFactory<D>::CreateRoutePolicy(winrt::Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, winrt::Windows::Networking::HostName const& hostName, winrt::Windows::Networking::DomainNameType const& type) const
    {
        void* routePolicy{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IRoutePolicyFactory)->CreateRoutePolicy(*(void**)(&connectionProfile), *(void**)(&hostName), static_cast<int32_t>(type), &routePolicy));
        return winrt::Windows::Networking::Connectivity::RoutePolicy{ routePolicy, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails<D>::GetConnectedSsid() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails)->GetConnectedSsid(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::HomeProviderId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_HomeProviderId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::AccessPointName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_AccessPointName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::WwanNetworkRegistrationState) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetNetworkRegistrationState() const
    {
        winrt::Windows::Networking::Connectivity::WwanNetworkRegistrationState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetNetworkRegistrationState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::WwanDataClass) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetCurrentDataClass() const
    {
        winrt::Windows::Networking::Connectivity::WwanDataClass value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetCurrentDataClass(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::WwanNetworkIPKind) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2<D>::IPKind() const
    {
        winrt::Windows::Networking::Connectivity::WwanNetworkIPKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2)->get_IPKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>) consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2<D>::PurposeGuids() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2)->get_PurposeGuids(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H> final : implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&sender));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> : produce_base<D, winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage>
    {
        int32_t __stdcall get_BytesSent(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BytesReceived(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AttributionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributionName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AttributionName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttributionThumbnail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().AttributionThumbnail());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::ICellularApnContext> : produce_base<D, winrt::Windows::Networking::Connectivity::ICellularApnContext>
    {
        int32_t __stdcall get_ProviderId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProviderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProviderId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccessPointName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccessPointName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AccessPointName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessPointName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Password(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Password());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Password(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Password(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCompressionEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCompressionEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCompressionEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCompressionEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthenticationType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType>(this->shim().AuthenticationType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AuthenticationType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationType(*reinterpret_cast<winrt::Windows::Networking::Connectivity::CellularApnAuthenticationType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::ICellularApnContext2> : produce_base<D, winrt::Windows::Networking::Connectivity::ICellularApnContext2>
    {
        int32_t __stdcall get_ProfileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProfileName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProfileName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionCost> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionCost>
    {
        int32_t __stdcall get_NetworkCostType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkCostType>(this->shim().NetworkCostType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Roaming(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Roaming());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OverDataLimit(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OverDataLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ApproachingDataLimit(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ApproachingDataLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionCost2> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionCost2>
    {
        int32_t __stdcall get_BackgroundDataUsageRestricted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BackgroundDataUsageRestricted());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile>
    {
        int32_t __stdcall get_ProfileName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNetworkConnectivityLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkConnectivityLevel>(this->shim().GetNetworkConnectivityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNetworkNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().GetNetworkNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetConnectionCost(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::ConnectionCost>(this->shim().GetConnectionCost());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDataPlanStatus(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::DataPlanStatus>(this->shim().GetDataPlanStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkAdapter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocalUsage(int64_t StartTime, int64_t EndTime, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::DataUsage>(this->shim().GetLocalUsage(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&EndTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocalUsagePerRoamingStates(int64_t StartTime, int64_t EndTime, uint32_t States, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::DataUsage>(this->shim().GetLocalUsage(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&EndTime), *reinterpret_cast<winrt::Windows::Networking::Connectivity::RoamingStates const*>(&States)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkSecuritySettings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings>(this->shim().NetworkSecuritySettings());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile2> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile2>
    {
        int32_t __stdcall get_IsWwanConnectionProfile(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWwanConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsWlanConnectionProfile(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWlanConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WwanConnectionProfileDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails>(this->shim().WwanConnectionProfileDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WlanConnectionProfileDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails>(this->shim().WlanConnectionProfileDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceProviderGuid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::guid>>(this->shim().ServiceProviderGuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSignalBars(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint8_t>>(this->shim().GetSignalBars());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDomainConnectivityLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::DomainConnectivityLevel>(this->shim().GetDomainConnectivityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNetworkUsageAsync(int64_t startTime, int64_t endTime, int32_t granularity, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::NetworkUsage>>>(this->shim().GetNetworkUsageAsync(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<winrt::Windows::Networking::Connectivity::DataUsageGranularity const*>(&granularity), *reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetConnectivityIntervalsAsync(int64_t startTime, int64_t endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectivityInterval>>>(this->shim().GetConnectivityIntervalsAsync(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile3> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile3>
    {
        int32_t __stdcall GetAttributedNetworkUsageAsync(int64_t startTime, int64_t endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage>>>(this->shim().GetAttributedNetworkUsageAsync(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile4> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile4>
    {
        int32_t __stdcall GetProviderNetworkUsageAsync(int64_t startTime, int64_t endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage>>>(this->shim().GetProviderNetworkUsageAsync(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile5> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile5>
    {
        int32_t __stdcall get_CanDelete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanDelete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryDeleteAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfileDeleteStatus>>(this->shim().TryDeleteAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfile6> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfile6>
    {
        int32_t __stdcall IsDomainAuthenticatedBy(int32_t kind, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsDomainAuthenticatedBy(*reinterpret_cast<winrt::Windows::Networking::Connectivity::DomainAuthenticationKind const*>(&kind)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter>
    {
        int32_t __stdcall put_IsConnected(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsConnected(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsConnected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsConnected());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsWwanConnectionProfile(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsWwanConnectionProfile(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsWwanConnectionProfile(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWwanConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsWlanConnectionProfile(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsWlanConnectionProfile(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsWlanConnectionProfile(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWlanConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_NetworkCostType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkCostType(*reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkCostType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkCostType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkCostType>(this->shim().NetworkCostType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ServiceProviderGuid(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceProviderGuid(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::guid> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServiceProviderGuid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::guid>>(this->shim().ServiceProviderGuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2>
    {
        int32_t __stdcall put_IsRoaming(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRoaming(*reinterpret_cast<winrt::Windows::Foundation::IReference<bool> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRoaming(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<bool>>(this->shim().IsRoaming());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsOverDataLimit(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverDataLimit(*reinterpret_cast<winrt::Windows::Foundation::IReference<bool> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOverDataLimit(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<bool>>(this->shim().IsOverDataLimit());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsBackgroundDataUsageRestricted(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBackgroundDataUsageRestricted(*reinterpret_cast<winrt::Windows::Foundation::IReference<bool> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsBackgroundDataUsageRestricted(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<bool>>(this->shim().IsBackgroundDataUsageRestricted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RawData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IBuffer>(this->shim().RawData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>
    {
        int32_t __stdcall put_PurposeGuid(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PurposeGuid(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::guid> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PurposeGuid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::guid>>(this->shim().PurposeGuid());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectionSession> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectionSession>
    {
        int32_t __stdcall get_ConnectionProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::ConnectionProfile>(this->shim().ConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectivityInterval> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectivityInterval>
    {
        int32_t __stdcall get_StartTime(int64_t* startTime) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(startTime);
            typename D::abi_guard guard(this->shim());
            *startTime = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionDuration(int64_t* duration) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(duration);
            typename D::abi_guard guard(this->shim());
            *duration = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().ConnectionDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> : produce_base<D, winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics>
    {
        int32_t __stdcall AcquireConnectionAsync(void* cellularApnContext, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionSession>>(this->shim().AcquireConnectionAsync(*reinterpret_cast<winrt::Windows::Networking::Connectivity::CellularApnContext const*>(&cellularApnContext)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddHttpRoutePolicy(void* routePolicy) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddHttpRoutePolicy(*reinterpret_cast<winrt::Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveHttpRoutePolicy(void* routePolicy) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveHttpRoutePolicy(*reinterpret_cast<winrt::Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IDataPlanStatus> : produce_base<D, winrt::Windows::Networking::Connectivity::IDataPlanStatus>
    {
        int32_t __stdcall get_DataPlanUsage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::DataPlanUsage>(this->shim().DataPlanUsage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DataLimitInMegabytes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().DataLimitInMegabytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InboundBitsPerSecond(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint64_t>>(this->shim().InboundBitsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutboundBitsPerSecond(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint64_t>>(this->shim().OutboundBitsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NextBillingCycle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().NextBillingCycle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxTransferSizeInMegabytes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().MaxTransferSizeInMegabytes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IDataPlanUsage> : produce_base<D, winrt::Windows::Networking::Connectivity::IDataPlanUsage>
    {
        int32_t __stdcall get_MegabytesUsed(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MegabytesUsed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LastSyncTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().LastSyncTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IDataUsage> : produce_base<D, winrt::Windows::Networking::Connectivity::IDataUsage>
    {
        int32_t __stdcall get_BytesSent(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BytesReceived(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IIPInformation> : produce_base<D, winrt::Windows::Networking::Connectivity::IIPInformation>
    {
        int32_t __stdcall get_NetworkAdapter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrefixLength(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint8_t>>(this->shim().PrefixLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::ILanIdentifier> : produce_base<D, winrt::Windows::Networking::Connectivity::ILanIdentifier>
    {
        int32_t __stdcall get_InfrastructureId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::LanIdentifierData>(this->shim().InfrastructureId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PortId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::LanIdentifierData>(this->shim().PortId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkAdapterId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().NetworkAdapterId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::ILanIdentifierData> : produce_base<D, winrt::Windows::Networking::Connectivity::ILanIdentifierData>
    {
        int32_t __stdcall get_Type(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<uint8_t>>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkAdapter> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkAdapter>
    {
        int32_t __stdcall get_OutboundMaxBitsPerSecond(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().OutboundMaxBitsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InboundMaxBitsPerSecond(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().InboundMaxBitsPerSecond());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IanaInterfaceType(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().IanaInterfaceType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkItem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkItem>(this->shim().NetworkItem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkAdapterId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().NetworkAdapterId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetConnectedProfileAsync(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ConnectionProfile>>(this->shim().GetConnectedProfileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkInformationStatics> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkInformationStatics>
    {
        int32_t __stdcall GetConnectionProfiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>>(this->shim().GetConnectionProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInternetConnectionProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::ConnectionProfile>(this->shim().GetInternetConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLanIdentifiers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::LanIdentifier>>(this->shim().GetLanIdentifiers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHostNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::HostName>>(this->shim().GetHostNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProxyConfigurationAsync(void* uri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Connectivity::ProxyConfiguration>>(this->shim().GetProxyConfigurationAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSortedEndpointPairs(void* destinationList, uint32_t sortOptions, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::EndpointPair>>(this->shim().GetSortedEndpointPairs(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Networking::EndpointPair> const*>(&destinationList), *reinterpret_cast<winrt::Windows::Networking::HostNameSortOptions const*>(&sortOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_NetworkStatusChanged(void* networkStatusHandler, winrt::event_token* eventCookie) noexcept final try
        {
            zero_abi<winrt::event_token>(eventCookie);
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<winrt::event_token>(this->shim().NetworkStatusChanged(*reinterpret_cast<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const*>(&networkStatusHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_NetworkStatusChanged(winrt::event_token eventCookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkStatusChanged(*reinterpret_cast<winrt::event_token const*>(&eventCookie));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkInformationStatics2>
    {
        int32_t __stdcall FindConnectionProfilesAsync(void* pProfileFilter, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>>>(this->shim().FindConnectionProfilesAsync(*reinterpret_cast<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter const*>(&pProfileFilter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkItem> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkItem>
    {
        int32_t __stdcall get_NetworkId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().NetworkId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNetworkTypes(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkTypes>(this->shim().GetNetworkTypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkSecuritySettings>
    {
        int32_t __stdcall get_NetworkAuthenticationType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkAuthenticationType>(this->shim().NetworkAuthenticationType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NetworkEncryptionType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::NetworkEncryptionType>(this->shim().NetworkEncryptionType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails>
    {
        int32_t __stdcall get_HasNewInternetConnectionProfile(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewInternetConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewConnectionCost(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewConnectionCost());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewNetworkConnectivityLevel(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewNetworkConnectivityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewDomainConnectivityLevel(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewDomainConnectivityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewHostNameList(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewHostNameList());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewWwanRegistrationState(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewWwanRegistrationState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
    {
        int32_t __stdcall get_HasNewTetheringOperationalState(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewTetheringOperationalState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasNewTetheringClientCount(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewTetheringClientCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::INetworkUsage> : produce_base<D, winrt::Windows::Networking::Connectivity::INetworkUsage>
    {
        int32_t __stdcall get_BytesSent(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BytesReceived(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionDuration(int64_t* duration) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(duration);
            typename D::abi_guard guard(this->shim());
            *duration = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().ConnectionDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IProviderNetworkUsage> : produce_base<D, winrt::Windows::Networking::Connectivity::IProviderNetworkUsage>
    {
        int32_t __stdcall get_BytesSent(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BytesReceived(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProviderId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProviderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IProxyConfiguration> : produce_base<D, winrt::Windows::Networking::Connectivity::IProxyConfiguration>
    {
        int32_t __stdcall get_ProxyUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>>(this->shim().ProxyUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanConnectDirectly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanConnectDirectly());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IRoutePolicy> : produce_base<D, winrt::Windows::Networking::Connectivity::IRoutePolicy>
    {
        int32_t __stdcall get_ConnectionProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::ConnectionProfile>(this->shim().ConnectionProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HostName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::HostName>(this->shim().HostName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HostNameType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::DomainNameType>(this->shim().HostNameType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> : produce_base<D, winrt::Windows::Networking::Connectivity::IRoutePolicyFactory>
    {
        int32_t __stdcall CreateRoutePolicy(void* connectionProfile, void* hostName, int32_t type, void** routePolicy) noexcept final try
        {
            clear_abi(routePolicy);
            typename D::abi_guard guard(this->shim());
            *routePolicy = detach_from<winrt::Windows::Networking::Connectivity::RoutePolicy>(this->shim().CreateRoutePolicy(*reinterpret_cast<winrt::Windows::Networking::Connectivity::ConnectionProfile const*>(&connectionProfile), *reinterpret_cast<winrt::Windows::Networking::HostName const*>(&hostName), *reinterpret_cast<winrt::Windows::Networking::DomainNameType const*>(&type)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : produce_base<D, winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails>
    {
        int32_t __stdcall GetConnectedSsid(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetConnectedSsid());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : produce_base<D, winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails>
    {
        int32_t __stdcall get_HomeProviderId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HomeProviderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccessPointName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccessPointName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetNetworkRegistrationState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::WwanNetworkRegistrationState>(this->shim().GetNetworkRegistrationState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentDataClass(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::WwanDataClass>(this->shim().GetCurrentDataClass());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> : produce_base<D, winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
    {
        int32_t __stdcall get_IPKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Connectivity::WwanNetworkIPKind>(this->shim().IPKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PurposeGuids(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::guid>>(this->shim().PurposeGuids());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    constexpr auto operator|(NetworkTypes const left, NetworkTypes const right) noexcept
    {
        return static_cast<NetworkTypes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(NetworkTypes& left, NetworkTypes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(NetworkTypes const left, NetworkTypes const right) noexcept
    {
        return static_cast<NetworkTypes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(NetworkTypes& left, NetworkTypes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(NetworkTypes const value) noexcept
    {
        return static_cast<NetworkTypes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(NetworkTypes const left, NetworkTypes const right) noexcept
    {
        return static_cast<NetworkTypes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(NetworkTypes& left, NetworkTypes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(RoamingStates const left, RoamingStates const right) noexcept
    {
        return static_cast<RoamingStates>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RoamingStates& left, RoamingStates const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RoamingStates const left, RoamingStates const right) noexcept
    {
        return static_cast<RoamingStates>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RoamingStates& left, RoamingStates const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RoamingStates const value) noexcept
    {
        return static_cast<RoamingStates>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RoamingStates const left, RoamingStates const right) noexcept
    {
        return static_cast<RoamingStates>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RoamingStates& left, RoamingStates const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(WwanDataClass const left, WwanDataClass const right) noexcept
    {
        return static_cast<WwanDataClass>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(WwanDataClass& left, WwanDataClass const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(WwanDataClass const left, WwanDataClass const right) noexcept
    {
        return static_cast<WwanDataClass>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(WwanDataClass& left, WwanDataClass const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(WwanDataClass const value) noexcept
    {
        return static_cast<WwanDataClass>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(WwanDataClass const left, WwanDataClass const right) noexcept
    {
        return static_cast<WwanDataClass>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(WwanDataClass& left, WwanDataClass const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline CellularApnContext::CellularApnContext() :
        CellularApnContext(impl::call_factory_cast<CellularApnContext(*)(winrt::Windows::Foundation::IActivationFactory const&), CellularApnContext>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CellularApnContext>(); }))
    {
    }
    inline ConnectionProfileFilter::ConnectionProfileFilter() :
        ConnectionProfileFilter(impl::call_factory_cast<ConnectionProfileFilter(*)(winrt::Windows::Foundation::IActivationFactory const&), ConnectionProfileFilter>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ConnectionProfileFilter>(); }))
    {
    }
    inline auto ConnectivityManager::AcquireConnectionAsync(winrt::Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext)
    {
        return impl::call_factory<ConnectivityManager, IConnectivityManagerStatics>([&](IConnectivityManagerStatics const& f) { return f.AcquireConnectionAsync(cellularApnContext); });
    }
    inline auto ConnectivityManager::AddHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
    {
        impl::call_factory<ConnectivityManager, IConnectivityManagerStatics>([&](IConnectivityManagerStatics const& f) { return f.AddHttpRoutePolicy(routePolicy); });
    }
    inline auto ConnectivityManager::RemoveHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
    {
        impl::call_factory<ConnectivityManager, IConnectivityManagerStatics>([&](IConnectivityManagerStatics const& f) { return f.RemoveHttpRoutePolicy(routePolicy); });
    }
    inline auto NetworkInformation::GetConnectionProfiles()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::ConnectionProfile>(*)(INetworkInformationStatics const&), NetworkInformation, INetworkInformationStatics>([](INetworkInformationStatics const& f) { return f.GetConnectionProfiles(); });
    }
    inline auto NetworkInformation::GetInternetConnectionProfile()
    {
        return impl::call_factory_cast<winrt::Windows::Networking::Connectivity::ConnectionProfile(*)(INetworkInformationStatics const&), NetworkInformation, INetworkInformationStatics>([](INetworkInformationStatics const& f) { return f.GetInternetConnectionProfile(); });
    }
    inline auto NetworkInformation::GetLanIdentifiers()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::Connectivity::LanIdentifier>(*)(INetworkInformationStatics const&), NetworkInformation, INetworkInformationStatics>([](INetworkInformationStatics const& f) { return f.GetLanIdentifiers(); });
    }
    inline auto NetworkInformation::GetHostNames()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::HostName>(*)(INetworkInformationStatics const&), NetworkInformation, INetworkInformationStatics>([](INetworkInformationStatics const& f) { return f.GetHostNames(); });
    }
    inline auto NetworkInformation::GetProxyConfigurationAsync(winrt::Windows::Foundation::Uri const& uri)
    {
        return impl::call_factory<NetworkInformation, INetworkInformationStatics>([&](INetworkInformationStatics const& f) { return f.GetProxyConfigurationAsync(uri); });
    }
    inline auto NetworkInformation::GetSortedEndpointPairs(param::iterable<winrt::Windows::Networking::EndpointPair> const& destinationList, winrt::Windows::Networking::HostNameSortOptions const& sortOptions)
    {
        return impl::call_factory<NetworkInformation, INetworkInformationStatics>([&](INetworkInformationStatics const& f) { return f.GetSortedEndpointPairs(destinationList, sortOptions); });
    }
    inline auto NetworkInformation::NetworkStatusChanged(winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
    {
        return impl::call_factory<NetworkInformation, INetworkInformationStatics>([&](INetworkInformationStatics const& f) { return f.NetworkStatusChanged(networkStatusHandler); });
    }
    inline NetworkInformation::NetworkStatusChanged_revoker NetworkInformation::NetworkStatusChanged(auto_revoke_t, winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
    {
        auto f = get_activation_factory<NetworkInformation, winrt::Windows::Networking::Connectivity::INetworkInformationStatics>();
        return { f, f.NetworkStatusChanged(networkStatusHandler) };
    }
    inline auto NetworkInformation::NetworkStatusChanged(winrt::event_token const& eventCookie)
    {
        impl::call_factory<NetworkInformation, INetworkInformationStatics>([&](INetworkInformationStatics const& f) { return f.NetworkStatusChanged(eventCookie); });
    }
    inline auto NetworkInformation::FindConnectionProfilesAsync(winrt::Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter)
    {
        return impl::call_factory<NetworkInformation, INetworkInformationStatics2>([&](INetworkInformationStatics2 const& f) { return f.FindConnectionProfilesAsync(pProfileFilter); });
    }
    inline RoutePolicy::RoutePolicy(winrt::Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, winrt::Windows::Networking::HostName const& hostName, winrt::Windows::Networking::DomainNameType const& type) :
        RoutePolicy(impl::call_factory<RoutePolicy, IRoutePolicyFactory>([&](IRoutePolicyFactory const& f) { return f.CreateRoutePolicy(connectionProfile, hostName, type); }))
    {
    }
    template <typename L> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(L handler) :
        NetworkStatusChangedEventHandler(impl::make_delegate<NetworkStatusChangedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(F* handler) :
        NetworkStatusChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(O* object, M method) :
        NetworkStatusChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(com_ptr<O>&& object, M method) :
        NetworkStatusChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(weak_ref<O>&& object, M method) :
        NetworkStatusChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto NetworkStatusChangedEventHandler::operator()(winrt::Windows::Foundation::IInspectable const& sender) const
    {
        check_hresult((*(impl::abi_t<NetworkStatusChangedEventHandler>**)this)->Invoke(*(void**)(&sender)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ICellularApnContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ICellularApnContext2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityInterval> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IDataUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IIPInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifier> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifierData> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkAdapter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IProxyConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::CellularApnContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionCost> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityInterval> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::DataUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::IPInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifier> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifierData> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkAdapter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::ProxyConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::RoutePolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
