#ifndef AIDL_GENERATED_IHBRIQ_I_HBRIQ_SERVICE_H_
#define AIDL_GENERATED_IHBRIQ_I_HBRIQ_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace IHbriq {

class IHbriqService : public ::android::IInterface {
public:
DECLARE_META_INTERFACE(HbriqService)
virtual ::android::binder::Status openDevice(const ::android::String16& dev, int32_t* _aidl_return) = 0;
enum Call {
  OPENDEVICE = ::android::IBinder::FIRST_CALL_TRANSACTION + 0,
};
};  // class IHbriqService

}  // namespace IHbriq

#endif  // AIDL_GENERATED_IHBRIQ_I_HBRIQ_SERVICE_H_
