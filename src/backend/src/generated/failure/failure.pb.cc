// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: failure/failure.proto

#include "failure/failure.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_failure_2ffailure_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FailureResult_failure_2ffailure_2eproto;
namespace mavsdk {
namespace rpc {
namespace failure {
class InjectRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InjectRequest> _instance;
} _InjectRequest_default_instance_;
class InjectResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<InjectResponse> _instance;
} _InjectResponse_default_instance_;
class FailureResultDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FailureResult> _instance;
} _FailureResult_default_instance_;
}  // namespace failure
}  // namespace rpc
}  // namespace mavsdk
static void InitDefaultsscc_info_FailureResult_failure_2ffailure_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mavsdk::rpc::failure::_FailureResult_default_instance_;
    new (ptr) ::mavsdk::rpc::failure::FailureResult();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mavsdk::rpc::failure::FailureResult::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FailureResult_failure_2ffailure_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_FailureResult_failure_2ffailure_2eproto}, {}};

static void InitDefaultsscc_info_InjectRequest_failure_2ffailure_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mavsdk::rpc::failure::_InjectRequest_default_instance_;
    new (ptr) ::mavsdk::rpc::failure::InjectRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mavsdk::rpc::failure::InjectRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_InjectRequest_failure_2ffailure_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_InjectRequest_failure_2ffailure_2eproto}, {}};

static void InitDefaultsscc_info_InjectResponse_failure_2ffailure_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mavsdk::rpc::failure::_InjectResponse_default_instance_;
    new (ptr) ::mavsdk::rpc::failure::InjectResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mavsdk::rpc::failure::InjectResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_InjectResponse_failure_2ffailure_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_InjectResponse_failure_2ffailure_2eproto}, {
      &scc_info_FailureResult_failure_2ffailure_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_failure_2ffailure_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_failure_2ffailure_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_failure_2ffailure_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_failure_2ffailure_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectRequest, failure_unit_),
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectRequest, failure_type_),
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectRequest, instance_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::InjectResponse, failure_result_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::FailureResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::FailureResult, result_),
  PROTOBUF_FIELD_OFFSET(::mavsdk::rpc::failure::FailureResult, result_str_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mavsdk::rpc::failure::InjectRequest)},
  { 8, -1, sizeof(::mavsdk::rpc::failure::InjectResponse)},
  { 14, -1, sizeof(::mavsdk::rpc::failure::FailureResult)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mavsdk::rpc::failure::_InjectRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mavsdk::rpc::failure::_InjectResponse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mavsdk::rpc::failure::_FailureResult_default_instance_),
};

const char descriptor_table_protodef_failure_2ffailure_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025failure/failure.proto\022\022mavsdk.rpc.fail"
  "ure\032\024mavsdk_options.proto\"\217\001\n\rInjectRequ"
  "est\0225\n\014failure_unit\030\001 \001(\0162\037.mavsdk.rpc.f"
  "ailure.FailureUnit\0225\n\014failure_type\030\002 \001(\016"
  "2\037.mavsdk.rpc.failure.FailureType\022\020\n\010ins"
  "tance\030\003 \001(\005\"K\n\016InjectResponse\0229\n\016failure"
  "_result\030\001 \001(\0132!.mavsdk.rpc.failure.Failu"
  "reResult\"\227\002\n\rFailureResult\0228\n\006result\030\001 \001"
  "(\0162(.mavsdk.rpc.failure.FailureResult.Re"
  "sult\022\022\n\nresult_str\030\002 \001(\t\"\267\001\n\006Result\022\022\n\016R"
  "ESULT_UNKNOWN\020\000\022\022\n\016RESULT_SUCCESS\020\001\022\024\n\020R"
  "ESULT_NO_SYSTEM\020\002\022\033\n\027RESULT_CONNECTION_E"
  "RROR\020\003\022\026\n\022RESULT_UNSUPPORTED\020\004\022\021\n\rRESULT"
  "_DENIED\020\005\022\023\n\017RESULT_DISABLED\020\006\022\022\n\016RESULT"
  "_TIMEOUT\020\007*\375\003\n\013FailureUnit\022\034\n\030FAILURE_UN"
  "IT_SENSOR_GYRO\020\000\022\035\n\031FAILURE_UNIT_SENSOR_"
  "ACCEL\020\001\022\033\n\027FAILURE_UNIT_SENSOR_MAG\020\002\022\034\n\030"
  "FAILURE_UNIT_SENSOR_BARO\020\003\022\033\n\027FAILURE_UN"
  "IT_SENSOR_GPS\020\004\022$\n FAILURE_UNIT_SENSOR_O"
  "PTICAL_FLOW\020\005\022\033\n\027FAILURE_UNIT_SENSOR_VIO"
  "\020\006\022\'\n#FAILURE_UNIT_SENSOR_DISTANCE_SENSO"
  "R\020\007\022 \n\034FAILURE_UNIT_SENSOR_AIRSPEED\020\010\022\037\n"
  "\033FAILURE_UNIT_SYSTEM_BATTERY\020d\022\035\n\031FAILUR"
  "E_UNIT_SYSTEM_MOTOR\020e\022\035\n\031FAILURE_UNIT_SY"
  "STEM_SERVO\020f\022!\n\035FAILURE_UNIT_SYSTEM_AVOI"
  "DANCE\020g\022!\n\035FAILURE_UNIT_SYSTEM_RC_SIGNAL"
  "\020h\022&\n\"FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL"
  "\020i*\322\001\n\013FailureType\022\023\n\017FAILURE_TYPE_OK\020\000\022"
  "\024\n\020FAILURE_TYPE_OFF\020\001\022\026\n\022FAILURE_TYPE_ST"
  "UCK\020\002\022\030\n\024FAILURE_TYPE_GARBAGE\020\003\022\026\n\022FAILU"
  "RE_TYPE_WRONG\020\004\022\025\n\021FAILURE_TYPE_SLOW\020\005\022\030"
  "\n\024FAILURE_TYPE_DELAYED\020\006\022\035\n\031FAILURE_TYPE"
  "_INTERMITTENT\020\0072g\n\016FailureService\022U\n\006Inj"
  "ect\022!.mavsdk.rpc.failure.InjectRequest\032\""
  ".mavsdk.rpc.failure.InjectResponse\"\004\200\265\030\001"
  "B!\n\021io.mavsdk.failureB\014FailureProtob\006pro"
  "to3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_failure_2ffailure_2eproto_deps[1] = {
  &::descriptor_table_mavsdk_5foptions_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_failure_2ffailure_2eproto_sccs[3] = {
  &scc_info_FailureResult_failure_2ffailure_2eproto.base,
  &scc_info_InjectRequest_failure_2ffailure_2eproto.base,
  &scc_info_InjectResponse_failure_2ffailure_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_failure_2ffailure_2eproto_once;
static bool descriptor_table_failure_2ffailure_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_failure_2ffailure_2eproto = {
  &descriptor_table_failure_2ffailure_2eproto_initialized, descriptor_table_protodef_failure_2ffailure_2eproto, "failure/failure.proto", 1443,
  &descriptor_table_failure_2ffailure_2eproto_once, descriptor_table_failure_2ffailure_2eproto_sccs, descriptor_table_failure_2ffailure_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_failure_2ffailure_2eproto::offsets,
  file_level_metadata_failure_2ffailure_2eproto, 3, file_level_enum_descriptors_failure_2ffailure_2eproto, file_level_service_descriptors_failure_2ffailure_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_failure_2ffailure_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_failure_2ffailure_2eproto), true);
namespace mavsdk {
namespace rpc {
namespace failure {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FailureResult_Result_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_failure_2ffailure_2eproto);
  return file_level_enum_descriptors_failure_2ffailure_2eproto[0];
}
bool FailureResult_Result_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr FailureResult_Result FailureResult::RESULT_UNKNOWN;
constexpr FailureResult_Result FailureResult::RESULT_SUCCESS;
constexpr FailureResult_Result FailureResult::RESULT_NO_SYSTEM;
constexpr FailureResult_Result FailureResult::RESULT_CONNECTION_ERROR;
constexpr FailureResult_Result FailureResult::RESULT_UNSUPPORTED;
constexpr FailureResult_Result FailureResult::RESULT_DENIED;
constexpr FailureResult_Result FailureResult::RESULT_DISABLED;
constexpr FailureResult_Result FailureResult::RESULT_TIMEOUT;
constexpr FailureResult_Result FailureResult::Result_MIN;
constexpr FailureResult_Result FailureResult::Result_MAX;
constexpr int FailureResult::Result_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FailureUnit_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_failure_2ffailure_2eproto);
  return file_level_enum_descriptors_failure_2ffailure_2eproto[1];
}
bool FailureUnit_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FailureType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_failure_2ffailure_2eproto);
  return file_level_enum_descriptors_failure_2ffailure_2eproto[2];
}
bool FailureType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void InjectRequest::InitAsDefaultInstance() {
}
class InjectRequest::_Internal {
 public:
};

InjectRequest::InjectRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mavsdk.rpc.failure.InjectRequest)
}
InjectRequest::InjectRequest(const InjectRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&failure_unit_, &from.failure_unit_,
    static_cast<size_t>(reinterpret_cast<char*>(&instance_) -
    reinterpret_cast<char*>(&failure_unit_)) + sizeof(instance_));
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.failure.InjectRequest)
}

void InjectRequest::SharedCtor() {
  ::memset(&failure_unit_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&instance_) -
      reinterpret_cast<char*>(&failure_unit_)) + sizeof(instance_));
}

InjectRequest::~InjectRequest() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.failure.InjectRequest)
  SharedDtor();
}

void InjectRequest::SharedDtor() {
}

void InjectRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InjectRequest& InjectRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InjectRequest_failure_2ffailure_2eproto.base);
  return *internal_default_instance();
}


void InjectRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.failure.InjectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&failure_unit_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&instance_) -
      reinterpret_cast<char*>(&failure_unit_)) + sizeof(instance_));
  _internal_metadata_.Clear();
}

const char* InjectRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .mavsdk.rpc.failure.FailureUnit failure_unit = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_failure_unit(static_cast<::mavsdk::rpc::failure::FailureUnit>(val));
        } else goto handle_unusual;
        continue;
      // .mavsdk.rpc.failure.FailureType failure_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_failure_type(static_cast<::mavsdk::rpc::failure::FailureType>(val));
        } else goto handle_unusual;
        continue;
      // int32 instance = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          instance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* InjectRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.failure.InjectRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.failure.FailureUnit failure_unit = 1;
  if (this->failure_unit() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_failure_unit(), target);
  }

  // .mavsdk.rpc.failure.FailureType failure_type = 2;
  if (this->failure_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_failure_type(), target);
  }

  // int32 instance = 3;
  if (this->instance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_instance(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.failure.InjectRequest)
  return target;
}

size_t InjectRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.failure.InjectRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .mavsdk.rpc.failure.FailureUnit failure_unit = 1;
  if (this->failure_unit() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_failure_unit());
  }

  // .mavsdk.rpc.failure.FailureType failure_type = 2;
  if (this->failure_type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_failure_type());
  }

  // int32 instance = 3;
  if (this->instance() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_instance());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InjectRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mavsdk.rpc.failure.InjectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const InjectRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InjectRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mavsdk.rpc.failure.InjectRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mavsdk.rpc.failure.InjectRequest)
    MergeFrom(*source);
  }
}

void InjectRequest::MergeFrom(const InjectRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.failure.InjectRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.failure_unit() != 0) {
    _internal_set_failure_unit(from._internal_failure_unit());
  }
  if (from.failure_type() != 0) {
    _internal_set_failure_type(from._internal_failure_type());
  }
  if (from.instance() != 0) {
    _internal_set_instance(from._internal_instance());
  }
}

void InjectRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mavsdk.rpc.failure.InjectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InjectRequest::CopyFrom(const InjectRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.failure.InjectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InjectRequest::IsInitialized() const {
  return true;
}

void InjectRequest::InternalSwap(InjectRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(failure_unit_, other->failure_unit_);
  swap(failure_type_, other->failure_type_);
  swap(instance_, other->instance_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InjectRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void InjectResponse::InitAsDefaultInstance() {
  ::mavsdk::rpc::failure::_InjectResponse_default_instance_._instance.get_mutable()->failure_result_ = const_cast< ::mavsdk::rpc::failure::FailureResult*>(
      ::mavsdk::rpc::failure::FailureResult::internal_default_instance());
}
class InjectResponse::_Internal {
 public:
  static const ::mavsdk::rpc::failure::FailureResult& failure_result(const InjectResponse* msg);
};

const ::mavsdk::rpc::failure::FailureResult&
InjectResponse::_Internal::failure_result(const InjectResponse* msg) {
  return *msg->failure_result_;
}
InjectResponse::InjectResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mavsdk.rpc.failure.InjectResponse)
}
InjectResponse::InjectResponse(const InjectResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_failure_result()) {
    failure_result_ = new ::mavsdk::rpc::failure::FailureResult(*from.failure_result_);
  } else {
    failure_result_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.failure.InjectResponse)
}

void InjectResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_InjectResponse_failure_2ffailure_2eproto.base);
  failure_result_ = nullptr;
}

InjectResponse::~InjectResponse() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.failure.InjectResponse)
  SharedDtor();
}

void InjectResponse::SharedDtor() {
  if (this != internal_default_instance()) delete failure_result_;
}

void InjectResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InjectResponse& InjectResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_InjectResponse_failure_2ffailure_2eproto.base);
  return *internal_default_instance();
}


void InjectResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.failure.InjectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && failure_result_ != nullptr) {
    delete failure_result_;
  }
  failure_result_ = nullptr;
  _internal_metadata_.Clear();
}

const char* InjectResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .mavsdk.rpc.failure.FailureResult failure_result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_failure_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* InjectResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.failure.InjectResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.failure.FailureResult failure_result = 1;
  if (this->has_failure_result()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::failure_result(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.failure.InjectResponse)
  return target;
}

size_t InjectResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.failure.InjectResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .mavsdk.rpc.failure.FailureResult failure_result = 1;
  if (this->has_failure_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *failure_result_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InjectResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mavsdk.rpc.failure.InjectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const InjectResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InjectResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mavsdk.rpc.failure.InjectResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mavsdk.rpc.failure.InjectResponse)
    MergeFrom(*source);
  }
}

void InjectResponse::MergeFrom(const InjectResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.failure.InjectResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_failure_result()) {
    _internal_mutable_failure_result()->::mavsdk::rpc::failure::FailureResult::MergeFrom(from._internal_failure_result());
  }
}

void InjectResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mavsdk.rpc.failure.InjectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InjectResponse::CopyFrom(const InjectResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.failure.InjectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InjectResponse::IsInitialized() const {
  return true;
}

void InjectResponse::InternalSwap(InjectResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(failure_result_, other->failure_result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InjectResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void FailureResult::InitAsDefaultInstance() {
}
class FailureResult::_Internal {
 public:
};

FailureResult::FailureResult()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mavsdk.rpc.failure.FailureResult)
}
FailureResult::FailureResult(const FailureResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_str_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_result_str().empty()) {
    result_str_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.result_str_);
  }
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:mavsdk.rpc.failure.FailureResult)
}

void FailureResult::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FailureResult_failure_2ffailure_2eproto.base);
  result_str_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
}

FailureResult::~FailureResult() {
  // @@protoc_insertion_point(destructor:mavsdk.rpc.failure.FailureResult)
  SharedDtor();
}

void FailureResult::SharedDtor() {
  result_str_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FailureResult::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FailureResult& FailureResult::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FailureResult_failure_2ffailure_2eproto.base);
  return *internal_default_instance();
}


void FailureResult::Clear() {
// @@protoc_insertion_point(message_clear_start:mavsdk.rpc.failure.FailureResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_str_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
  _internal_metadata_.Clear();
}

const char* FailureResult::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .mavsdk.rpc.failure.FailureResult.Result result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_result(static_cast<::mavsdk::rpc::failure::FailureResult_Result>(val));
        } else goto handle_unusual;
        continue;
      // string result_str = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_result_str();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mavsdk.rpc.failure.FailureResult.result_str"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* FailureResult::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mavsdk.rpc.failure.FailureResult)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mavsdk.rpc.failure.FailureResult.Result result = 1;
  if (this->result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_result(), target);
  }

  // string result_str = 2;
  if (this->result_str().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result_str().data(), static_cast<int>(this->_internal_result_str().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mavsdk.rpc.failure.FailureResult.result_str");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_result_str(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mavsdk.rpc.failure.FailureResult)
  return target;
}

size_t FailureResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mavsdk.rpc.failure.FailureResult)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result_str = 2;
  if (this->result_str().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result_str());
  }

  // .mavsdk.rpc.failure.FailureResult.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_result());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FailureResult::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mavsdk.rpc.failure.FailureResult)
  GOOGLE_DCHECK_NE(&from, this);
  const FailureResult* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FailureResult>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mavsdk.rpc.failure.FailureResult)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mavsdk.rpc.failure.FailureResult)
    MergeFrom(*source);
  }
}

void FailureResult::MergeFrom(const FailureResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mavsdk.rpc.failure.FailureResult)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result_str().size() > 0) {

    result_str_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.result_str_);
  }
  if (from.result() != 0) {
    _internal_set_result(from._internal_result());
  }
}

void FailureResult::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mavsdk.rpc.failure.FailureResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FailureResult::CopyFrom(const FailureResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mavsdk.rpc.failure.FailureResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FailureResult::IsInitialized() const {
  return true;
}

void FailureResult::InternalSwap(FailureResult* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  result_str_.Swap(&other->result_str_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FailureResult::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace failure
}  // namespace rpc
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::failure::InjectRequest* Arena::CreateMaybeMessage< ::mavsdk::rpc::failure::InjectRequest >(Arena* arena) {
  return Arena::CreateInternal< ::mavsdk::rpc::failure::InjectRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::failure::InjectResponse* Arena::CreateMaybeMessage< ::mavsdk::rpc::failure::InjectResponse >(Arena* arena) {
  return Arena::CreateInternal< ::mavsdk::rpc::failure::InjectResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::mavsdk::rpc::failure::FailureResult* Arena::CreateMaybeMessage< ::mavsdk::rpc::failure::FailureResult >(Arena* arena) {
  return Arena::CreateInternal< ::mavsdk::rpc::failure::FailureResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>