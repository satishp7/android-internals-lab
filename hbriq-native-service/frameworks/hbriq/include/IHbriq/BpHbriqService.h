#ifndef AIDL_GENERATED_IHBRIQ_BP_HBRIQ_SERVICE_H_
#define AIDL_GENERATED_IHBRIQ_BP_HBRIQ_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <IHbriq/IHbriqService.h>

namespace IHbriq {

class BpHbriqService : public ::android::BpInterface<IHbriqService> {
public:
explicit BpHbriqService(const ::android::sp<::android::IBinder>& _aidl_impl);
virtual ~BpHbriqService() = default;
::android::binder::Status openDevice(const ::android::String16& dev, int32_t* _aidl_return) override;
::android::binder::Status getValue(int32_t* _aidl_return) override;
::android::binder::Status setValue(int32_t val, int32_t* _aidl_return) override;
};  // class BpHbriqService

}  // namespace IHbriq

#endif  // AIDL_GENERATED_IHBRIQ_BP_HBRIQ_SERVICE_H_
