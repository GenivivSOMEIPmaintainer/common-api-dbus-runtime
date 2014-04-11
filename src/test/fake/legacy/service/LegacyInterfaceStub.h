/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.5.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef FAKE_LEGACY_SERVICE_Legacy_Interface_STUB_H_
#define FAKE_LEGACY_SERVICE_Legacy_Interface_STUB_H_




#include "LegacyInterface.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace fake {
namespace legacy {
namespace service {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service LegacyInterface. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class LegacyInterfaceStubAdapter: virtual public CommonAPI::StubAdapter, public LegacyInterface {
 public:



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for LegacyInterface.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LegacyInterfaceStubRemoteEvent {
 public:
    virtual ~LegacyInterfaceStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service LegacyInterface to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LegacyInterfaceStub: public virtual CommonAPI::Stub<LegacyInterfaceStubAdapter, LegacyInterfaceStubRemoteEvent> {
public:
    virtual ~LegacyInterfaceStub() { }
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /// This is the method that will be called on remote calls on the method TestMethod.
    virtual void TestMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t input, int32_t& val1, int32_t& val2) = 0;
    /// This is the method that will be called on remote calls on the method OtherTestMethod.
    virtual void OtherTestMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& greeting, int32_t& identifier) = 0;
    /// This is the method that will be called on remote calls on the method finish.
    virtual void finish(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    using CommonAPI::Stub<LegacyInterfaceStubAdapter, LegacyInterfaceStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<LegacyInterfaceStubAdapter, LegacyInterfaceStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<LegacyInterfaceStubAdapter, LegacyInterfaceStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef LegacyInterfaceStubRemoteEvent RemoteEventType;
    typedef LegacyInterface StubInterface;
};

} // namespace service
} // namespace legacy
} // namespace fake

#endif // FAKE_LEGACY_SERVICE_Legacy_Interface_STUB_H_