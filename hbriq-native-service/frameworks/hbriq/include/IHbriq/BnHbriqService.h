#ifndef AIDL_GENERATED_IHBRIQ_BN_HBRIQ_SERVICE_H_
#define AIDL_GENERATED_IHBRIQ_BN_HBRIQ_SERVICE_H_

#include <binder/IInterface.h>
#include <IHbriq/IHbriqService.h>

namespace IHbriq {

class BnHbriqService : public ::android::BnInterface<IHbriqService> {
public:
::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags = 0) override;
};  // class BnHbriqService

}  // namespace IHbriq

#endif  // AIDL_GENERATED_IHBRIQ_BN_HBRIQ_SERVICE_H_
