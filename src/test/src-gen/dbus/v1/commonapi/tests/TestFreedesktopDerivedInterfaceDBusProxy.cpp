/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/tests/TestFreedesktopDerivedInterfaceDBusProxy.hpp>

namespace v1 {
namespace commonapi {
namespace tests {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createTestFreedesktopDerivedInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<TestFreedesktopDerivedInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerTestFreedesktopDerivedInterfaceDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		TestFreedesktopDerivedInterface::getInterface(),
		&createTestFreedesktopDerivedInterfaceDBusProxy);
}

TestFreedesktopDerivedInterfaceDBusProxy::TestFreedesktopDerivedInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection),
		TestFreedesktopInterfaceDBusProxy(_address, _connection)
,		testAttributedFromDerivedInterface_(*this, getAddress().getInterface(), "TestAttributedFromDerivedInterface", static_cast<CommonAPI::EmptyDeployment*>(nullptr))
{
}

      TestFreedesktopDerivedInterfaceDBusProxy::TestAttributedFromDerivedInterfaceAttribute& TestFreedesktopDerivedInterfaceDBusProxy::getTestAttributedFromDerivedInterfaceAttribute() {
          return testAttributedFromDerivedInterface_;
      }

    


void TestFreedesktopDerivedInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace tests
      } // namespace commonapi
      } // namespace v1
