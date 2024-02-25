// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Foundation_Collections_H
#define WINRT_Windows_Foundation_Collections_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/Windows.Foundation.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
namespace winrt::impl
{
    template <typename D, typename T> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterator<T>) consume_Windows_Foundation_Collections_IIterable<D, T>::First() const
    {
        void* winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IIterable<T>)->First(&winrt_impl_result));
        return winrt::Windows::Foundation::Collections::IIterator<T>{ winrt_impl_result, take_ownership_from_abi };
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(T) consume_Windows_Foundation_Collections_IIterator<D, T>::Current() const
    {
        T winrt_impl_result{ empty_value<T>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IIterator<T>)->get_Current(put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IIterator<D, T>::HasCurrent() const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IIterator<T>)->get_HasCurrent(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IIterator<D, T>::MoveNext() const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IIterator<T>)->MoveNext(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IIterator<D, T>::GetMany(array_view<T> items) const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IIterator<T>)->GetMany(items.size(), put_abi(items), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(K) consume_Windows_Foundation_Collections_IKeyValuePair<D, K, V>::Key() const
    {
        K winrt_impl_result{ empty_value<K>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>)->get_Key(put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(V) consume_Windows_Foundation_Collections_IKeyValuePair<D, K, V>::Value() const
    {
        V winrt_impl_result{ empty_value<V>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>)->get_Value(put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::CollectionChange) consume_Windows_Foundation_Collections_IMapChangedEventArgs<D, K>::CollectionChange() const
    {
        winrt::Windows::Foundation::Collections::CollectionChange winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>)->get_CollectionChange(reinterpret_cast<int32_t*>(&winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K> WINRT_IMPL_AUTO(K) consume_Windows_Foundation_Collections_IMapChangedEventArgs<D, K>::Key() const
    {
        K winrt_impl_result{ empty_value<K>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>)->get_Key(put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(V) consume_Windows_Foundation_Collections_IMapView<D, K, V>::Lookup(impl::param_type<K> const& key) const
    {
        V winrt_impl_result{ empty_value<V>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapView<K, V>)->Lookup(impl::bind_in(key), put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IMapView<D, K, V>::Size() const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapView<K, V>)->get_Size(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IMapView<D, K, V>::HasKey(impl::param_type<K> const& key) const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapView<K, V>)->HasKey(impl::bind_in(key), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IMapView<D, K, V>::Split(winrt::Windows::Foundation::Collections::IMapView<K, V>& first, winrt::Windows::Foundation::Collections::IMapView<K, V>& second) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMapView<K, V>)->Split(impl::bind_out(first), impl::bind_out(second)));
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(V) consume_Windows_Foundation_Collections_IMap<D, K, V>::Lookup(impl::param_type<K> const& key) const
    {
        V winrt_impl_result{ empty_value<V>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->Lookup(impl::bind_in(key), put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IMap<D, K, V>::Size() const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->get_Size(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IMap<D, K, V>::HasKey(impl::param_type<K> const& key) const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->HasKey(impl::bind_in(key), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<K, V>) consume_Windows_Foundation_Collections_IMap<D, K, V>::GetView() const
    {
        void* winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->GetView(&winrt_impl_result));
        return winrt::Windows::Foundation::Collections::IMapView<K, V>{ winrt_impl_result, take_ownership_from_abi };
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IMap<D, K, V>::Insert(impl::param_type<K> const& key, impl::param_type<V> const& value) const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->Insert(impl::bind_in(key), impl::bind_in(value), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IMap<D, K, V>::Remove(impl::param_type<K> const& key) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->Remove(impl::bind_in(key)));
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IMap<D, K, V>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IMap<K, V>)->Clear());
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Foundation_Collections_IObservableMap<D, K, V>::MapChanged(winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V> const& vhnd) const
    {
        winrt::event_token winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IObservableMap<K, V>)->add_MapChanged(*(void**)(&vhnd), put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename K, typename V> typename consume_Windows_Foundation_Collections_IObservableMap<D, K, V>::MapChanged_revoker consume_Windows_Foundation_Collections_IObservableMap<D, K, V>::MapChanged(auto_revoke_t, winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V> const& vhnd) const
    {
        return impl::make_event_revoker<D, MapChanged_revoker>(this, MapChanged(vhnd));
    }
    template <typename D, typename K, typename V> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IObservableMap<D, K, V>::MapChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IObservableMap<K, V>)->remove_MapChanged(impl::bind_in(token));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Foundation_Collections_IObservableVector<D, T>::VectorChanged(winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T> const& vhnd) const
    {
        winrt::event_token winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IObservableVector<T>)->add_VectorChanged(*(void**)(&vhnd), put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename T> typename consume_Windows_Foundation_Collections_IObservableVector<D, T>::VectorChanged_revoker consume_Windows_Foundation_Collections_IObservableVector<D, T>::VectorChanged(auto_revoke_t, winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T> const& vhnd) const
    {
        return impl::make_event_revoker<D, VectorChanged_revoker>(this, VectorChanged(vhnd));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IObservableVector<D, T>::VectorChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IObservableVector<T>)->remove_VectorChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::CollectionChange) consume_Windows_Foundation_Collections_IVectorChangedEventArgs<D>::CollectionChange() const
    {
        winrt::Windows::Foundation::Collections::CollectionChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorChangedEventArgs)->get_CollectionChange(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IVectorChangedEventArgs<D>::Index() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorChangedEventArgs)->get_Index(&value));
        return value;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(T) consume_Windows_Foundation_Collections_IVectorView<D, T>::GetAt(uint32_t index) const
    {
        T winrt_impl_result{ empty_value<T>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorView<T>)->GetAt(index, put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IVectorView<D, T>::Size() const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorView<T>)->get_Size(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IVectorView<D, T>::IndexOf(impl::param_type<T> const& value, uint32_t& index) const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorView<T>)->IndexOf(impl::bind_in(value), &index, &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IVectorView<D, T>::GetMany(uint32_t startIndex, array_view<T> items) const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVectorView<T>)->GetMany(startIndex, items.size(), put_abi(items), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(T) consume_Windows_Foundation_Collections_IVector<D, T>::GetAt(uint32_t index) const
    {
        T winrt_impl_result{ empty_value<T>() };
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->GetAt(index, put_abi(winrt_impl_result)));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IVector<D, T>::Size() const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->get_Size(&winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<T>) consume_Windows_Foundation_Collections_IVector<D, T>::GetView() const
    {
        void* winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->GetView(&winrt_impl_result));
        return winrt::Windows::Foundation::Collections::IVectorView<T>{ winrt_impl_result, take_ownership_from_abi };
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Collections_IVector<D, T>::IndexOf(impl::param_type<T> const& value, uint32_t& index) const
    {
        bool winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->IndexOf(impl::bind_in(value), &index, &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::SetAt(uint32_t index, impl::param_type<T> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->SetAt(index, impl::bind_in(value)));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::InsertAt(uint32_t index, impl::param_type<T> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->InsertAt(index, impl::bind_in(value)));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::RemoveAt(uint32_t index) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->RemoveAt(index));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::Append(impl::param_type<T> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->Append(impl::bind_in(value)));
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::RemoveAtEnd() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->RemoveAtEnd());
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::Clear() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->Clear());
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Foundation_Collections_IVector<D, T>::GetMany(uint32_t startIndex, array_view<T> items) const
    {
        uint32_t winrt_impl_result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->GetMany(startIndex, items.size(), put_abi(items), &winrt_impl_result));
        return winrt_impl_result;
    }
    template <typename D, typename T> WINRT_IMPL_AUTO(void) consume_Windows_Foundation_Collections_IVector<D, T>::ReplaceAll(array_view<T const> items) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Foundation::Collections::IVector<T>)->ReplaceAll(items.size(), get_abi(items)));
    }
    template <typename H, typename K, typename V> struct delegate<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V>, H> final : implements_delegate<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V>, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V>, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* event) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Foundation::Collections::IObservableMap<K, V> const*>(&sender), *reinterpret_cast<winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K> const*>(&event));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H, typename T> struct delegate<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T>, H> final : implements_delegate<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T>, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T>, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* event) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Foundation::Collections::IObservableVector<T> const*>(&sender), *reinterpret_cast<winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const*>(&event));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename T>
    struct produce<D, winrt::Windows::Foundation::Collections::IIterable<T>> : produce_base<D, winrt::Windows::Foundation::Collections::IIterable<T>>
    {
        int32_t __stdcall First(void** winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::Windows::Foundation::Collections::IIterator<T>>(this->shim().First());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename T>
    struct produce<D, winrt::Windows::Foundation::Collections::IIterator<T>> : produce_base<D, winrt::Windows::Foundation::Collections::IIterator<T>>
    {
        int32_t __stdcall get_Current(arg_out<T> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<T>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasCurrent(bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().HasCurrent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MoveNext(bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().MoveNext());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMany(uint32_t __itemsSize, arg_out<T> items, uint32_t* winrt_impl_result) noexcept final try
        {
            zero_abi<T>(items, __itemsSize);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().GetMany(array_view<T>(reinterpret_cast<T*>(items), reinterpret_cast<T*>(items) + __itemsSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename K, typename V>
    struct produce<D, winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>> : produce_base<D, winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        int32_t __stdcall get_Key(arg_out<K> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<K>(this->shim().Key());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(arg_out<V> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<V>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename K>
    struct produce<D, winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>> : produce_base<D, winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>>
    {
        int32_t __stdcall get_CollectionChange(int32_t* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::Windows::Foundation::Collections::CollectionChange>(this->shim().CollectionChange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Key(arg_out<K> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<K>(this->shim().Key());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename K, typename V>
    struct produce<D, winrt::Windows::Foundation::Collections::IMapView<K, V>> : produce_base<D, winrt::Windows::Foundation::Collections::IMapView<K, V>>
    {
        int32_t __stdcall Lookup(arg_in<K> key, arg_out<V> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall HasKey(arg_in<K> key, bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().HasKey(*reinterpret_cast<K const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Split(void** first, void** second) noexcept final try
        {
            clear_abi(first);
            clear_abi(second);
            typename D::abi_guard guard(this->shim());
            this->shim().Split(*reinterpret_cast<winrt::Windows::Foundation::Collections::IMapView<K, V>*>(first), *reinterpret_cast<winrt::Windows::Foundation::Collections::IMapView<K, V>*>(second));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename K, typename V>
    struct produce<D, winrt::Windows::Foundation::Collections::IMap<K, V>> : produce_base<D, winrt::Windows::Foundation::Collections::IMap<K, V>>
    {
        int32_t __stdcall Lookup(arg_in<K> key, arg_out<V> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall HasKey(arg_in<K> key, bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().HasKey(*reinterpret_cast<K const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetView(void** winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::Windows::Foundation::Collections::IMapView<K, V>>(this->shim().GetView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Insert(arg_in<K> key, arg_in<V> value, bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().Insert(*reinterpret_cast<K const*>(&key), *reinterpret_cast<V const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Remove(arg_in<K> key) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<K const*>(&key));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename K, typename V>
    struct produce<D, winrt::Windows::Foundation::Collections::IObservableMap<K, V>> : produce_base<D, winrt::Windows::Foundation::Collections::IObservableMap<K, V>>
    {
        int32_t __stdcall add_MapChanged(void* vhnd, winrt::event_token* winrt_impl_result) noexcept final try
        {
            zero_abi<winrt::event_token>(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::event_token>(this->shim().MapChanged(*reinterpret_cast<winrt::Windows::Foundation::Collections::MapChangedEventHandler<K, V> const*>(&vhnd)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MapChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D, typename T>
    struct produce<D, winrt::Windows::Foundation::Collections::IObservableVector<T>> : produce_base<D, winrt::Windows::Foundation::Collections::IObservableVector<T>>
    {
        int32_t __stdcall add_VectorChanged(void* vhnd, winrt::event_token* winrt_impl_result) noexcept final try
        {
            zero_abi<winrt::event_token>(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::event_token>(this->shim().VectorChanged(*reinterpret_cast<winrt::Windows::Foundation::Collections::VectorChangedEventHandler<T> const*>(&vhnd)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_VectorChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VectorChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Foundation::Collections::IPropertySet> : produce_base<D, winrt::Windows::Foundation::Collections::IPropertySet>
    {
    };
    template <typename D>
    struct produce<D, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> : produce_base<D, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs>
    {
        int32_t __stdcall get_CollectionChange(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::CollectionChange>(this->shim().CollectionChange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Index(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Index());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename T>
    struct produce<D, winrt::Windows::Foundation::Collections::IVectorView<T>> : produce_base<D, winrt::Windows::Foundation::Collections::IVectorView<T>>
    {
        int32_t __stdcall GetAt(uint32_t index, arg_out<T> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<T>(this->shim().GetAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMany(uint32_t startIndex, uint32_t __itemsSize, arg_out<T> items, uint32_t* winrt_impl_result) noexcept final try
        {
            zero_abi<T>(items, __itemsSize);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(items), reinterpret_cast<T*>(items) + __itemsSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D, typename T>
    struct produce<D, winrt::Windows::Foundation::Collections::IVector<T>> : produce_base<D, winrt::Windows::Foundation::Collections::IVector<T>>
    {
        int32_t __stdcall GetAt(uint32_t index, arg_out<T> winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<T>(this->shim().GetAt(index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(uint32_t* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetView(void** winrt_impl_result) noexcept final try
        {
            clear_abi(winrt_impl_result);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<T>>(this->shim().GetView());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* winrt_impl_result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAt(uint32_t index, arg_in<T> value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAt(index, *reinterpret_cast<T const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InsertAt(uint32_t index, arg_in<T> value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAt(index, *reinterpret_cast<T const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAt(uint32_t index) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAt(index);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Append(arg_in<T> value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<T const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAtEnd() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAtEnd();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Clear() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMany(uint32_t startIndex, uint32_t __itemsSize, arg_out<T> items, uint32_t* winrt_impl_result) noexcept final try
        {
            zero_abi<T>(items, __itemsSize);
            typename D::abi_guard guard(this->shim());
            *winrt_impl_result = detach_from<uint32_t>(this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(items), reinterpret_cast<T*>(items) + __itemsSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReplaceAll(uint32_t __itemsSize, arg_out<T> items) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceAll(array_view<T const>(reinterpret_cast<T const *>(items), reinterpret_cast<T const *>(items) + __itemsSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    inline PropertySet::PropertySet() :
        PropertySet(impl::call_factory_cast<PropertySet(*)(winrt::Windows::Foundation::IActivationFactory const&), PropertySet>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PropertySet>(); }))
    {
    }
    inline StringMap::StringMap() :
        StringMap(impl::call_factory_cast<StringMap(*)(winrt::Windows::Foundation::IActivationFactory const&), StringMap>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StringMap>(); }))
    {
    }
    inline ValueSet::ValueSet() :
        ValueSet(impl::call_factory_cast<ValueSet(*)(winrt::Windows::Foundation::IActivationFactory const&), ValueSet>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ValueSet>(); }))
    {
    }
    template <typename K, typename V> template <typename L> MapChangedEventHandler<K, V>::MapChangedEventHandler(L handler) :
        MapChangedEventHandler(impl::make_delegate<MapChangedEventHandler<K, V>>(std::forward<L>(handler)))
    {
    }
    template <typename K, typename V> template <typename F> MapChangedEventHandler<K, V>::MapChangedEventHandler(F* handler) :
        MapChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename K, typename V> template <typename O, typename M> MapChangedEventHandler<K, V>::MapChangedEventHandler(O* object, M method) :
        MapChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename K, typename V> template <typename O, typename M> MapChangedEventHandler<K, V>::MapChangedEventHandler(com_ptr<O>&& object, M method) :
        MapChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename K, typename V> template <typename O, typename M> MapChangedEventHandler<K, V>::MapChangedEventHandler(weak_ref<O>&& object, M method) :
        MapChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    template <typename K, typename V> auto MapChangedEventHandler<K, V>::operator()(winrt::Windows::Foundation::Collections::IObservableMap<K, V> const& sender, winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K> const& event) const
    {
        check_hresult((*(impl::abi_t<MapChangedEventHandler<K, V>>**)this)->Invoke(*(void**)(&sender), *(void**)(&event)));
    }
    template <typename T> template <typename L> VectorChangedEventHandler<T>::VectorChangedEventHandler(L handler) :
        VectorChangedEventHandler(impl::make_delegate<VectorChangedEventHandler<T>>(std::forward<L>(handler)))
    {
    }
    template <typename T> template <typename F> VectorChangedEventHandler<T>::VectorChangedEventHandler(F* handler) :
        VectorChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename T> template <typename O, typename M> VectorChangedEventHandler<T>::VectorChangedEventHandler(O* object, M method) :
        VectorChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename T> template <typename O, typename M> VectorChangedEventHandler<T>::VectorChangedEventHandler(com_ptr<O>&& object, M method) :
        VectorChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename T> template <typename O, typename M> VectorChangedEventHandler<T>::VectorChangedEventHandler(weak_ref<O>&& object, M method) :
        VectorChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    template <typename T> auto VectorChangedEventHandler<T>::operator()(winrt::Windows::Foundation::Collections::IObservableVector<T> const& sender, winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& event) const
    {
        check_hresult((*(impl::abi_t<VectorChangedEventHandler<T>>**)this)->Invoke(*(void**)(&sender), *(void**)(&event)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<typename T> struct hash<winrt::Windows::Foundation::Collections::IIterable<T>> : winrt::impl::hash_base {};
    template<typename T> struct hash<winrt::Windows::Foundation::Collections::IIterator<T>> : winrt::impl::hash_base {};
    template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>> : winrt::impl::hash_base {};
    template<typename K> struct hash<winrt::Windows::Foundation::Collections::IMapChangedEventArgs<K>> : winrt::impl::hash_base {};
    template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IMapView<K, V>> : winrt::impl::hash_base {};
    template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IMap<K, V>> : winrt::impl::hash_base {};
    template<typename K, typename V> struct hash<winrt::Windows::Foundation::Collections::IObservableMap<K, V>> : winrt::impl::hash_base {};
    template<typename T> struct hash<winrt::Windows::Foundation::Collections::IObservableVector<T>> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Collections::IPropertySet> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Collections::IVectorChangedEventArgs> : winrt::impl::hash_base {};
    template<typename T> struct hash<winrt::Windows::Foundation::Collections::IVectorView<T>> : winrt::impl::hash_base {};
    template<typename T> struct hash<winrt::Windows::Foundation::Collections::IVector<T>> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Collections::PropertySet> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Collections::StringMap> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Collections::ValueSet> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}

namespace winrt::impl
{
    namespace wfc = Windows::Foundation::Collections;

    template <typename D, typename T>
    auto consume_Windows_Foundation_Collections_IIterable<D, T>::begin() const
    {
        return get_begin_iterator(static_cast<D const&>(*this));
    }
    template <typename D, typename T>
    auto consume_Windows_Foundation_Collections_IIterable<D, T>::end() const
    {
        return get_end_iterator(static_cast<D const&>(*this));
    }

    template <typename T>
    struct key_value_pair;

    template <typename K, typename V>
    struct key_value_pair<wfc::IKeyValuePair<K, V>> : implements<key_value_pair<wfc::IKeyValuePair<K, V>>, wfc::IKeyValuePair<K, V>>
    {
        key_value_pair(K key, V value) :
            m_key(std::move(key)),
            m_value(std::move(value))
        {
        }

        K Key() const
        {
            return m_key;
        }

        V Value() const
        {
            return m_value;
        }

    private:

        K const m_key;
        V const m_value;
    };

    template <typename T>
    struct is_key_value_pair : std::false_type {};

    template <typename K, typename V>
    struct is_key_value_pair<wfc::IKeyValuePair<K, V>> : std::true_type {};

    struct input_scope
    {
        void invalidate_scope() noexcept
        {
            m_invalid = true;
        }

        void check_scope() const
        {
            if (m_invalid)
            {
                throw hresult_illegal_method_call();
            }
        }

    private:

        bool m_invalid{};
    };

    struct no_collection_version
    {
        struct iterator_type
        {
            iterator_type(no_collection_version const&) noexcept
            {
            }

            void check_version(no_collection_version const&) const noexcept
            {
            }
        };
    };

    struct collection_version
    {
        struct iterator_type
        {
            iterator_type(collection_version const& version) noexcept :
                m_snapshot(version.get_version())
            {
            }

            void check_version(collection_version const& version) const
            {
                if (version.get_version() != m_snapshot)
                {
                    throw hresult_changed_state();
                }
            }

        private:

            uint32_t const m_snapshot;
        };

        uint32_t get_version() const noexcept
        {
            return m_version;
        }

        void increment_version() noexcept
        {
            ++m_version;
        }

    private:

        std::atomic<uint32_t> m_version{};
    };

    template <typename T>
    struct range_container
    {
        T const first;
        T const last;

        auto begin() const noexcept
        {
            return first;
        }

        auto end() const noexcept
        {
            return last;
        }
    };
}
namespace winrt::impl
{
    struct nop_lock_guard {};

    struct single_threaded_collection_base
    {
        [[nodiscard]] auto acquire_exclusive() const
        {
            return nop_lock_guard{};
        }

        [[nodiscard]] auto acquire_shared() const
        {
            return nop_lock_guard();
        }
    };

    struct multi_threaded_collection_base
    {
        [[nodiscard]] auto acquire_exclusive() const
        {
            return slim_lock_guard{m_mutex};
        }

        [[nodiscard]] auto acquire_shared() const
        {
            return slim_shared_lock_guard{m_mutex};
        }

    private:

        mutable slim_mutex m_mutex;
    };

    template <typename D>
    using container_type_t = std::decay_t<decltype(std::declval<D>().get_container())>;

    template <typename D, typename = void>
    struct removed_values
    {
        void assign(container_type_t<D>& value)
        {
            // Trivially destructible; okay to run destructors under lock and clearing allows potential re-use of buffers
            value.clear();
        }
    };

    template <typename D>
    struct removed_values<D, std::enable_if_t<!std::is_trivially_destructible_v<typename container_type_t<D>::value_type>>>
    {
        container_type_t<D> m_value;

        void assign(container_type_t<D>& value)
        {
            m_value.swap(value);
        }
    };

    template <typename T, typename = void>
    struct removed_value
    {
        // Trivially destructible; okay to run destructor under lock
        template <typename U>
        void assign(U&&) {}
    };

    template <typename T>
    struct removed_value<T, std::enable_if_t<std::is_move_constructible_v<T> && !std::is_trivially_destructible_v<T>>>
    {
        std::optional<T> m_value;

        template <typename U>
        void assign(U&& value)
        {
            m_value.emplace(std::move(value));
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct iterable_base : Version
    {
        template <typename U>
        static constexpr auto const& wrap_value(U const& value) noexcept
        {
            return value;
        }

        template <typename U>
        static constexpr auto const& unwrap_value(U const& value) noexcept
        {
            return value;
        }

        auto acquire_exclusive() const
        {
            return impl::nop_lock_guard{};
        }

        auto acquire_shared() const
        {
            // Support for concurrent "shared" operations is optional
            return static_cast<D const&>(*this).acquire_exclusive();
        }

        auto First()
        {
            // NOTE: iterator's constructor requires shared access
            auto guard = static_cast<D&>(*this).acquire_shared();
            return make<iterator>(static_cast<D*>(this));
        }

    protected:

        template<typename InputIt, typename Size, typename OutputIt>
        auto copy_n(InputIt first, Size count, OutputIt result) const
        {
            if constexpr (std::is_same_v<T, std::decay_t<decltype(*std::declval<D const>().get_container().begin())>> && !impl::is_key_value_pair<T>::value)
            {
                std::copy_n(first, count, result);
            }
            else
            {
                return std::transform(first, std::next(first, count), result, [&](auto&& value)
                {
                    if constexpr (!impl::is_key_value_pair<T>::value)
                    {
                        return static_cast<D const&>(*this).unwrap_value(value);
                    }
                    else
                    {
                        return make<impl::key_value_pair<T>>(static_cast<D const&>(*this).unwrap_value(value.first), static_cast<D const&>(*this).unwrap_value(value.second));
                    }
                });
            }
        }

    private:

        struct iterator : Version::iterator_type, implements<iterator, Windows::Foundation::Collections::IIterator<T>>
        {
            void abi_enter()
            {
                m_owner->abi_enter();
            }

            void abi_exit()
            {
                m_owner->abi_exit();
            }

            explicit iterator(D* const owner) noexcept :
                Version::iterator_type(*owner),
                m_current(owner->get_container().begin()),
                m_end(owner->get_container().end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                auto guard = m_owner->acquire_shared();
                this->check_version(*m_owner);

                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return current_value_withlock();
            }

            bool HasCurrent() const
            {
                auto guard = m_owner->acquire_shared();
                this->check_version(*m_owner);
                return m_current != m_end;
            }

            bool MoveNext()
            {
                auto guard = m_owner->acquire_exclusive();
                this->check_version(*m_owner);
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return m_current != m_end;
            }

            uint32_t GetMany(array_view<T> values)
            {
                auto guard = m_owner->acquire_exclusive();
                this->check_version(*m_owner);
                return GetMany(values, typename std::iterator_traits<iterator_type>::iterator_category());
            }

        private:

            T current_value_withlock() const
            {
                WINRT_ASSERT(m_current != m_end);
                if constexpr (!impl::is_key_value_pair<T>::value)
                {
                    return m_owner->unwrap_value(*m_current);
                }
                else
                {
                    return make<impl::key_value_pair<T>>(m_owner->unwrap_value(m_current->first), m_owner->unwrap_value(m_current->second));
                }
            }

            uint32_t GetMany(array_view<T> values, std::random_access_iterator_tag)
            {
                uint32_t const actual = (std::min)(static_cast<uint32_t>(m_end - m_current), values.size());
                m_owner->copy_n(m_current, actual, values.begin());
                m_current += actual;
                return actual;
            }

            uint32_t GetMany(array_view<T> values, std::input_iterator_tag)
            {
                auto output = values.begin();

                while (output < values.end() && m_current != m_end)
                {
                    *output = current_value_withlock();
                    ++output;
                    ++m_current;
                }

                return static_cast<uint32_t>(output - values.begin());
            }

            using iterator_type = decltype(std::declval<D>().get_container().begin());

            com_ptr<D> m_owner;
            iterator_type m_current;
            iterator_type const m_end;
        };
    };

    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct vector_view_base : iterable_base<D, T, Version>
    {
        T GetAt(uint32_t const index) const
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            if (index >= container_size())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(*std::next(static_cast<D const&>(*this).get_container().begin(), index));
        }

        uint32_t Size() const noexcept
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            return container_size();
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            auto first = std::find_if(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end(), [&](auto&& match)
            {
                return value == static_cast<D const&>(*this).unwrap_value(match);
            });

            index = static_cast<uint32_t>(first - static_cast<D const&>(*this).get_container().begin());
            return index < container_size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            if (startIndex >= container_size())
            {
                return 0;
            }

            uint32_t const actual = (std::min)(container_size() - startIndex, values.size());
            this->copy_n(static_cast<D const&>(*this).get_container().begin() + startIndex, actual, values.begin());
            return actual;
        }

    private:

        uint32_t container_size() const noexcept
        {
            return static_cast<uint32_t>(std::distance(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end()));
        }
    };

    template <typename D, typename T>
    struct vector_base : vector_view_base<D, T, impl::collection_version>
    {
        Windows::Foundation::Collections::IVectorView<T> GetView() const noexcept
        {
            return static_cast<D const&>(*this);
        }

        void SetAt(uint32_t const index, T const& value)
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> oldValue;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            auto&& pos = static_cast<D&>(*this).get_container()[index];
            oldValue.assign(pos);
            pos = static_cast<D const&>(*this).wrap_value(value);
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index > static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container().insert(static_cast<D const&>(*this).get_container().begin() + index, static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAt(uint32_t const index)
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> removedValue;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            auto itr = static_cast<D&>(*this).get_container().begin() + index;
            removedValue.assign(*itr);
            static_cast<D&>(*this).get_container().erase(itr);
        }

        void Append(T const& value)
        {
            auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            static_cast<D&>(*this).get_container().push_back(static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAtEnd()
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> removedValue;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (static_cast<D const&>(*this).get_container().empty())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            removedValue.assign(static_cast<D&>(*this).get_container().back());
            static_cast<D&>(*this).get_container().pop_back();
        }

        void Clear() noexcept
        {
            impl::removed_values<D> oldContainer;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
        }

        void ReplaceAll(array_view<T const> value)
        {
            impl::removed_values<D> oldContainer;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
            assign(value.begin(), value.end());
        }

    private:

        template <typename InputIt>
        void assign(InputIt first, InputIt last)
        {
            if constexpr (std::is_same_v<T, typename impl::container_type_t<D>::value_type>)
            {
                static_cast<D&>(*this).get_container().assign(first, last);
            }
            else
            {
                auto& container = static_cast<D&>(*this).get_container();
                WINRT_ASSERT(container.empty());
                container.reserve(std::distance(first, last));

                std::transform(first, last, std::back_inserter(container), [&](auto&& value)
                {
                    return static_cast<D const&>(*this).wrap_value(value);
                });
            }
        }
    };

    template <typename D, typename T>
    struct observable_vector_base : vector_base<D, T>
    {
        event_token VectorChanged(Windows::Foundation::Collections::VectorChangedEventHandler<T> const& handler)
        {
            return m_changed.add(handler);
        }

        void VectorChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        void SetAt(uint32_t const index, T const& value)
        {
            vector_base<D, T>::SetAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemChanged, index);
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            vector_base<D, T>::InsertAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, index);
        }

        void RemoveAt(uint32_t const index)
        {
            vector_base<D, T>::RemoveAt(index);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, index);
        }

        void Append(T const& value)
        {
            vector_base<D, T>::Append(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, this->Size() - 1);
        }

        void RemoveAtEnd()
        {
            vector_base<D, T>::RemoveAtEnd();
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, this->Size());
        }

        void Clear()
        {
            vector_base<D, T>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

        void ReplaceAll(array_view<T const> value)
        {
            vector_base<D, T>::ReplaceAll(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

    protected:

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, uint32_t const index)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, index));
        }

    private:

        event<Windows::Foundation::Collections::VectorChangedEventHandler<T>> m_changed;

        struct args : implements<args, Windows::Foundation::Collections::IVectorChangedEventArgs>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, uint32_t const index) noexcept :
                m_change(change),
                m_index(index)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            uint32_t Index() const noexcept
            {
                return m_index;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            uint32_t const m_index;
        };
    };

    template <typename D, typename K, typename V, typename Version = impl::no_collection_version>
    struct map_view_base : iterable_base<D, Windows::Foundation::Collections::IKeyValuePair<K, V>, Version>
    {
        V Lookup(K const& key) const
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            auto pair = static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key));

            if (pair == static_cast<D const&>(*this).get_container().end())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(pair->second);
        }

        uint32_t Size() const noexcept
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            return static_cast<uint32_t>(static_cast<D const&>(*this).get_container().size());
        }

        bool HasKey(K const& key) const noexcept
        {
            auto guard = static_cast<D const&>(*this).acquire_shared();
            return static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key)) != static_cast<D const&>(*this).get_container().end();
        }

        void Split(Windows::Foundation::Collections::IMapView<K, V>& first, Windows::Foundation::Collections::IMapView<K, V>& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }
    };

    template <typename D, typename K, typename V>
    struct map_base : map_view_base<D, K, V, impl::collection_version>
    {
        Windows::Foundation::Collections::IMapView<K, V> GetView() const
        {
            return static_cast<D const&>(*this);
        }

        bool Insert(K const& key, V const& value)
        {
            impl::removed_value<typename impl::container_type_t<D>::mapped_type> oldValue;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            auto [itr, added] = static_cast<D&>(*this).get_container().emplace(static_cast<D const&>(*this).wrap_value(key), static_cast<D const&>(*this).wrap_value(value));
            if (!added)
            {
                oldValue.assign(itr->second);
                itr->second = static_cast<D const&>(*this).wrap_value(value);
            }

            return !added;
        }

        void Remove(K const& key)
        {
            typename impl::container_type_t<D>::node_type removedNode;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            auto& container = static_cast<D&>(*this).get_container();
            auto found = container.find(static_cast<D const&>(*this).wrap_value(key));
            if (found == container.end())
            {
                throw hresult_out_of_bounds();
            }
            this->increment_version();
            removedNode = container.extract(found);
        }

        void Clear() noexcept
        {
            impl::removed_values<D> oldContainer;

            auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
        }
    };

    template <typename D, typename K, typename V>
    struct observable_map_base : map_base<D, K, V>
    {
        event_token MapChanged(Windows::Foundation::Collections::MapChangedEventHandler<K, V> const& handler)
        {
            return m_changed.add(handler);
        }

        void MapChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        bool Insert(K const& key, V const& value)
        {
            bool const result = map_base<D, K, V>::Insert(key, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, key);
            return result;
        }

        void Remove(K const& key)
        {
            map_base<D, K, V>::Remove(key);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, key);
        }

        void Clear() noexcept
        {
            map_base<D, K, V>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, impl::empty_value<K>());
        }

    private:

        event<Windows::Foundation::Collections::MapChangedEventHandler<K, V>> m_changed;

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, K const& key)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, key));
        }

        struct args : implements<args, Windows::Foundation::Collections::IMapChangedEventArgs<K>>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, K const& key) noexcept :
                m_change(change),
                m_key(key)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            K Key() const noexcept
            {
                return m_key;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            K const m_key;
        };
    };
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_iterable :
        implements<input_iterable<T, Container>, non_agile, no_weak_ref, wfc::IIterable<T>>,
        iterable_base<input_iterable<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_iterable(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename T, typename InputIt>
    struct scoped_input_iterable :
        input_scope,
        implements<scoped_input_iterable<T, InputIt>, non_agile, no_weak_ref, wfc::IIterable<T>>,
        iterable_base<scoped_input_iterable<T, InputIt>, T>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_iterable(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        auto get_container() const noexcept
        {
            return range_container<InputIt>{ m_begin, m_end };
        }

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
        void use_make_function_to_create_this_object() final
        {
        }
#endif

    private:

        InputIt const m_begin;
        InputIt const m_end;
    };

    template <typename T, typename Container>
    auto make_input_iterable(Container&& values)
    {
        return make<input_iterable<T, Container>>(std::forward<Container>(values));
    }

    template <typename T, typename InputIt>
    auto make_scoped_input_iterable(InputIt first, InputIt last)
    {
        using interface_type = wfc::IIterable<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_iterable<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        iterable(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template <typename U, std::enable_if_t<std::is_convertible_v<U, value_type>, int> = 0>
        iterable(std::initializer_list<U> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_pair.first;
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        iterable(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_pair.first;
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(iterable<T> const& object) noexcept
    {
        return *(void**)(&object);
    }

    template <typename T>
    struct async_iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        async_iterable(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_iterable(std::vector<value_type, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<value_type> values) :
            m_interface(impl::make_input_iterable<value_type>(std::vector<value_type>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct async_iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        async_iterable(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_iterable(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_iterable<value_type>(std::map<K, V>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_iterable<T> const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector_view :
        implements<input_vector_view<T, Container>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_view_base<input_vector_view<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename T, typename InputIt>
    struct scoped_input_vector_view :
        input_scope,
        implements<scoped_input_vector_view<T, InputIt>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_view_base<scoped_input_vector_view<T, InputIt>, T>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_vector_view(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        auto get_container() const noexcept
        {
            return range_container<InputIt>{ m_begin, m_end };
        }

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
        void use_make_function_to_create_this_object() final
        {
        }
#endif

    private:

        InputIt const m_begin;
        InputIt const m_end;
    };

    template <typename T, typename InputIt>
    auto make_scoped_input_vector_view(InputIt first, InputIt last)
    {
        using interface_type = wfc::IVectorView<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_vector_view<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        vector_view(std::nullptr_t) noexcept
        {
        }

        vector_view(vector_view const& values) = delete;
        vector_view& operator=(vector_view const& values) = delete;

        vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        vector_view(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator>&& values) : m_pair(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        vector_view(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        template <typename U, std::enable_if_t<std::is_convertible_v<U, value_type>, int> = 0>
        vector_view(std::initializer_list<U> values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        vector_view(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_vector_view<value_type>(first, last))
        {
        }

        ~vector_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_pair.first;
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector_view<T> const& object) noexcept
    {
        return *(void**)(&object);
    }

    template <typename T>
    struct async_vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        async_vector_view(std::nullptr_t) noexcept
        {
        }

        async_vector_view(async_vector_view const& values) = delete;
        async_vector_view& operator=(async_vector_view const& values) = delete;

        async_vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        async_vector_view(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_vector_view(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        async_vector_view(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type>>>(values))
        {
        }

        ~async_vector_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_vector_view<T> const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map_view :
        implements<input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_view_base<input_map_view<K, V, Container>, K, V>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_map_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename K, typename V, typename Container>
    struct scoped_input_map_view :
        input_scope,
        implements<scoped_input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_view_base<scoped_input_map_view<K, V, Container>, K, V>
    {
        void abi_enter() const
        {
            check_scope();
        }

        explicit scoped_input_map_view(Container const& values) : m_values(values)
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
        void use_make_function_to_create_this_object() final
        {
        }
#endif

    private:

        Container const& m_values;
    };

    template <typename K, typename V, typename Container>
    auto make_input_map_view(Container&& values)
    {
        return make<input_map_view<K, V, Container>>(std::forward<Container>(values));
    }

    template <typename K, typename V, typename Container>
    auto make_scoped_input_map_view(Container const& values)
    {
        using interface_type = wfc::IMapView<K, V>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_map_view<K, V, Container>(values);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        map_view(std::nullptr_t) noexcept
        {
        }

        map_view(map_view const& values) = delete;
        map_view& operator=(map_view const& values) = delete;

        map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        map_view(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        map_view(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_input_map_view<K, V>(std::map<K, V>(values)), nullptr)
        {
        }

        ~map_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_pair.first;
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map_view<K, V> const& object) noexcept
    {
        return *(void**)(&object);
    }

    template <typename K, typename V>
    struct async_map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        async_map_view(std::nullptr_t) noexcept
        {
        }

        async_map_view(async_map_view const& values) = delete;
        async_map_view& operator=(async_map_view const& values) = delete;

        async_map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        async_map_view(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_map_view(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        async_map_view(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map_view<K, V>(std::map<K, V>(values)))
        {
        }

        ~async_map_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(async_map_view<K, V> const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container, typename ThreadingBase>
    struct vector_impl :
        implements<vector_impl<T, Container, ThreadingBase>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_base<vector_impl<T, Container, ThreadingBase>, T>,
        ThreadingBase
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit vector_impl(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

    private:

        Container m_values;
    };

    template <typename T, typename Container>
    using input_vector = vector_impl<T, Container, single_threaded_collection_base>;
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVector<value_type>;

        vector(std::nullptr_t) noexcept
        {
        }

        vector(vector const& values) = delete;
        vector& operator=(vector const& values) = delete;

        vector(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        vector(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        vector(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        vector(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type>>>(values))
        {
        }

        ~vector() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector<T> const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container, typename ThreadingBase>
    struct map_impl :
        implements<map_impl<K, V, Container, ThreadingBase>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_base<map_impl<K, V, Container, ThreadingBase>, K, V>,
        ThreadingBase
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit map_impl(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

    private:

        Container m_values;
    };

    template <typename K, typename V, typename Container>
    using input_map = map_impl<K, V, Container, single_threaded_collection_base>;

    template <typename K, typename V, typename Container>
    auto make_input_map(Container&& values)
    {
        return make<input_map<K, V, Container>>(std::forward<Container>(values));
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMap<K, V>;

        map(std::nullptr_t) noexcept
        {
        }

        map(map const& values) = delete;
        map& operator=(map const& values) = delete;

        map(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>, int> = 0>
        map(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        map(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        map(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map<K, V>(std::map<K, V>(values)))
        {
        }

        ~map() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

        operator interface_type const& () const noexcept
        {
            return m_interface;
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map<K, V> const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    using multi_threaded_vector = vector_impl<T, Container, multi_threaded_collection_base>;

    template <typename Container, typename ThreadingBase = single_threaded_collection_base>
    struct inspectable_observable_vector :
        observable_vector_base<inspectable_observable_vector<Container, ThreadingBase>, Windows::Foundation::IInspectable>,
        implements<inspectable_observable_vector<Container, ThreadingBase>,
        wfc::IObservableVector<Windows::Foundation::IInspectable>, wfc::IVector<Windows::Foundation::IInspectable>, wfc::IVectorView<Windows::Foundation::IInspectable>, wfc::IIterable<Windows::Foundation::IInspectable>>,
        ThreadingBase
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit inspectable_observable_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

    private:

        Container m_values;
    };

    template <typename Container>
    using multi_threaded_inspectable_observable_vector = inspectable_observable_vector<Container, multi_threaded_collection_base>;

    template <typename T, typename Container, typename ThreadingBase = single_threaded_collection_base>
    struct convertible_observable_vector :
        observable_vector_base<convertible_observable_vector<T, Container, ThreadingBase>, T>,
        implements<convertible_observable_vector<T, Container, ThreadingBase>,
        wfc::IObservableVector<T>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>,
        wfc::IObservableVector<Windows::Foundation::IInspectable>, wfc::IVector<Windows::Foundation::IInspectable>, wfc::IVectorView<Windows::Foundation::IInspectable>, wfc::IIterable<Windows::Foundation::IInspectable>>,
        ThreadingBase
    {
        static_assert(!std::is_same_v<T, Windows::Foundation::IInspectable>);
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using container_type = convertible_observable_vector<T, Container, ThreadingBase>;
        using base_type = observable_vector_base<convertible_observable_vector<T, Container, ThreadingBase>, T>;

        explicit convertible_observable_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

        auto First()
        {
            struct result
            {
                container_type* container;

                operator wfc::IIterator<T>()
                {
                    return static_cast<base_type*>(container)->First();
                }

                operator wfc::IIterator<Windows::Foundation::IInspectable>()
                {
                    auto guard = container->acquire_shared();
                    return make<iterator>(container);
                }
            };

            return result{ this };
        }

        auto GetAt(uint32_t const index) const
        {
            struct result
            {
                base_type const* container;
                uint32_t const index;

                operator T() const
                {
                    return container->GetAt(index);
                }

                operator Windows::Foundation::IInspectable() const
                {
                    return box_value(container->GetAt(index));
                }
            };

            return result{ this, index };
        }

        using base_type::IndexOf;

        bool IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const
        {
            if constexpr (is_com_interface_v<T>)
            {
                if (!value)
                {
                    return base_type::IndexOf(nullptr, index);
                }
                else if (auto as = value.try_as<T>())
                {
                    return base_type::IndexOf(as, index);
                }
            }
            else
            {
                if (auto as = value.try_as<T>())
                {
                    return base_type::IndexOf(as.value(), index);
                }
            }

            return false;
        }

        using base_type::GetMany;

        uint32_t GetMany(uint32_t const startIndex, array_view<Windows::Foundation::IInspectable> values) const
        {
            auto guard = this->acquire_shared();
            if (startIndex >= m_values.size())
            {
                return 0;
            }

            uint32_t const actual = (std::min)(static_cast<uint32_t>(m_values.size() - startIndex), values.size());

            std::transform(m_values.begin() + startIndex, m_values.begin() + startIndex + actual, values.begin(), [&](auto && value)
                {
                    return box_value(value);
                });

            return actual;
        }

        auto GetView() const noexcept
        {
            struct result
            {
                container_type const* container;

                operator wfc::IVectorView<T>() const
                {
                    return *container;
                }

                operator wfc::IVectorView<Windows::Foundation::IInspectable>() const
                {
                    return *container;
                }
            };

            return result{ this };
        }

        using base_type::SetAt;

        void SetAt(uint32_t const index, Windows::Foundation::IInspectable const& value)
        {
            SetAt(index, unbox_value<T>(value));
        }

        using base_type::InsertAt;

        void InsertAt(uint32_t const index, Windows::Foundation::IInspectable const& value)
        {
            InsertAt(index, unbox_value<T>(value));
        }

        using base_type::Append;

        void Append(Windows::Foundation::IInspectable const& value)
        {
            Append(unbox_value<T>(value));
        }

        using base_type::ReplaceAll;

        void ReplaceAll(array_view<Windows::Foundation::IInspectable const> values)
        {
            Container new_values;
            new_values.reserve(values.size());

            std::transform(values.begin(), values.end(), std::back_inserter(new_values), [&](auto && value)
                {
                    return unbox_value<T>(value);
                });

            base_type::ReplaceAll(std::move(new_values));
        }

        using base_type::VectorChanged;

        event_token VectorChanged(wfc::VectorChangedEventHandler<Windows::Foundation::IInspectable> const& handler)
        {
            return base_type::VectorChanged([handler](auto && sender, auto && args)
                {
                    handler(sender.template try_as<wfc::IObservableVector<Windows::Foundation::IInspectable>>(), args);
                });
        }

    private:

        struct iterator :
            impl::collection_version::iterator_type,
            implements<iterator, Windows::Foundation::Collections::IIterator<Windows::Foundation::IInspectable>>
        {
            explicit iterator(container_type* const container) noexcept :
                impl::collection_version::iterator_type(*container),
                m_current(container->get_container().begin()),
                m_end(container->get_container().end())
            {
                m_owner.copy_from(container);
            }

            Windows::Foundation::IInspectable Current() const
            {
                auto guard = m_owner->acquire_shared();
                check_version(*m_owner);
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return box_value(*m_current);
            }

            bool HasCurrent() const
            {
                auto guard = m_owner->acquire_shared();
                check_version(*m_owner);
                return m_current != m_end;
            }

            bool MoveNext()
            {
                auto guard = m_owner->acquire_exclusive();
                check_version(*m_owner);
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return m_current != m_end;
            }

            uint32_t GetMany(array_view<Windows::Foundation::IInspectable> values)
            {
                auto guard = m_owner->acquire_exclusive();
                check_version(*m_owner);
                uint32_t const actual = (std::min)(static_cast<uint32_t>(std::distance(m_current, m_end)), values.size());

                std::transform(m_current, m_current + actual, values.begin(), [&](auto && value)
                    {
                        return box_value(value);
                    });

                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<container_type> m_owner;
            decltype(m_owner->get_container().begin()) m_current;
            decltype(m_owner->get_container().end()) const m_end;
        };

        Container m_values;
    };

    template <typename T, typename Container>
    using multi_threaded_convertible_observable_vector = convertible_observable_vector<T, Container, multi_threaded_collection_base>;
}

WINRT_EXPORT namespace winrt
{
    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> single_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::input_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> multi_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::multi_threaded_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IObservableVector<T> single_threaded_observable_vector(std::vector<T, Allocator>&& values = {})
    {
        if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>)
        {
            return make<impl::inspectable_observable_vector<std::vector<T, Allocator>>>(std::move(values));
        }
        else
        {
            return make<impl::convertible_observable_vector<T, std::vector<T, Allocator>>>(std::move(values));
        }
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IObservableVector<T> multi_threaded_observable_vector(std::vector<T, Allocator>&& values = {})
    {
        if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>)
        {
            return make<impl::multi_threaded_inspectable_observable_vector<std::vector<T, Allocator>>>(std::move(values));
        }
        else
        {
            return make<impl::multi_threaded_convertible_observable_vector<T, std::vector<T, Allocator>>>(std::move(values));
        }
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    using multi_threaded_map = map_impl<K, V, Container, multi_threaded_collection_base>;

    template <typename K, typename V, typename Container, typename ThreadingBase>
    struct observable_map_impl :
        implements<observable_map_impl<K, V, Container, ThreadingBase>, wfc::IObservableMap<K, V>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        observable_map_base<observable_map_impl<K, V, Container, ThreadingBase>, K, V>,
        ThreadingBase
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit observable_map_impl(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

    private:

        Container m_values;
    };

    template <typename K, typename V, typename Container>
    using observable_map = observable_map_impl<K, V, Container, single_threaded_collection_base>;

    template <typename K, typename V, typename Container>
    using multi_threaded_observable_map = observable_map_impl<K, V, Container, multi_threaded_collection_base>;
}

WINRT_EXPORT namespace winrt
{
    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map()
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map()
    {
        return make<impl::multi_threaded_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::multi_threaded_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> multi_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::multi_threaded_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map()
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map()
    {
        return make<impl::multi_threaded_observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::multi_threaded_observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> multi_threaded_observable_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::multi_threaded_observable_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }
}

namespace std
{
    template<typename K, typename V>
    struct tuple_size<winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
        : integral_constant<size_t, 2>
    {
    };

    template<size_t Idx, typename K, typename V>
    struct tuple_element<Idx, winrt::Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        static_assert(Idx < 2, "key-value pair index out of bounds");
        using type = conditional_t<Idx == 0, K, V>;
    };
}

namespace winrt::Windows::Foundation::Collections
{
    template<size_t Idx, typename K, typename V>
    std::tuple_element_t<Idx, IKeyValuePair<K, V>> get(IKeyValuePair<K, V> const& kvp)
    {
        static_assert(Idx < 2, "key-value pair index out of bounds");
        if constexpr (Idx == 0)
        {
            return kvp.Key();
        }
        else
        {
            return kvp.Value();
        }
    }
}
#endif
