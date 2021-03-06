/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_PROXY_HPP_
#define V1_COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_PROXY_HPP_

#include <v1/commonapi/tests/managed/SecondRootProxyBase.hpp>
#include "v1/commonapi/tests/managed/SecondRootDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusProxyManager.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

class SecondRootDBusProxy
    : virtual public SecondRootProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    SecondRootDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~SecondRootDBusProxy() { }




    virtual CommonAPI::ProxyManager& getProxyManagerLeafInterface();

    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   


    CommonAPI::DBus::DBusProxyManager proxyManagerLeafInterface_;
};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_TESTS_MANAGED_Second_Root_DBUS_PROXY_HPP_

