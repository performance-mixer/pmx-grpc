// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: stereo_port.proto
// Protobuf C++ Version: 6.30.1

#include "stereo_port.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace pmx {
namespace grpc {

inline constexpr StereoPort::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        left_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        right_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()) {}

template <typename>
PROTOBUF_CONSTEXPR StereoPort::StereoPort(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(StereoPort_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct StereoPortDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StereoPortDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~StereoPortDefaultTypeInternal() {}
  union {
    StereoPort _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StereoPortDefaultTypeInternal _StereoPort_default_instance_;
}  // namespace grpc
}  // namespace pmx
static constexpr const ::_pb::EnumDescriptor *PROTOBUF_NONNULL *PROTOBUF_NULLABLE
    file_level_enum_descriptors_stereo_5fport_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor *PROTOBUF_NONNULL *PROTOBUF_NULLABLE
    file_level_service_descriptors_stereo_5fport_2eproto = nullptr;
const ::uint32_t
    TableStruct_stereo_5fport_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::pmx::grpc::StereoPort, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::pmx::grpc::StereoPort, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::pmx::grpc::StereoPort, _impl_.left_),
        PROTOBUF_FIELD_OFFSET(::pmx::grpc::StereoPort, _impl_.right_),
        0,
        1,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::pmx::grpc::StereoPort)},
};
static const ::_pb::Message* PROTOBUF_NONNULL const file_default_instances[] = {
    &::pmx::grpc::_StereoPort_default_instance_._instance,
};
const char descriptor_table_protodef_stereo_5fport_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\021stereo_port.proto\022\010pmx.grpc\")\n\nStereoP"
    "ort\022\014\n\004left\030\001 \001(\t\022\r\n\005right\030\002 \001(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_stereo_5fport_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_stereo_5fport_2eproto = {
    false,
    false,
    80,
    descriptor_table_protodef_stereo_5fport_2eproto,
    "stereo_port.proto",
    &descriptor_table_stereo_5fport_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_stereo_5fport_2eproto::offsets,
    file_level_enum_descriptors_stereo_5fport_2eproto,
    file_level_service_descriptors_stereo_5fport_2eproto,
};
namespace pmx {
namespace grpc {
// ===================================================================

class StereoPort::_Internal {
 public:
  using HasBits =
      decltype(std::declval<StereoPort>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(StereoPort, _impl_._has_bits_);
};

StereoPort::StereoPort(::google::protobuf::Arena* PROTOBUF_NULLABLE arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, StereoPort_class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:pmx.grpc.StereoPort)
}
PROTOBUF_NDEBUG_INLINE StereoPort::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* PROTOBUF_NULLABLE arena, const Impl_& from,
    const ::pmx::grpc::StereoPort& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        left_(arena, from.left_),
        right_(arena, from.right_) {}

StereoPort::StereoPort(
    ::google::protobuf::Arena* PROTOBUF_NULLABLE arena,
    const StereoPort& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, StereoPort_class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  StereoPort* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:pmx.grpc.StereoPort)
}
PROTOBUF_NDEBUG_INLINE StereoPort::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* PROTOBUF_NULLABLE arena)
      : _cached_size_{0},
        left_(arena),
        right_(arena) {}

inline void StereoPort::SharedCtor(::_pb::Arena* PROTOBUF_NULLABLE arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
StereoPort::~StereoPort() {
  // @@protoc_insertion_point(destructor:pmx.grpc.StereoPort)
  SharedDtor(*this);
}
inline void StereoPort::SharedDtor(MessageLite& self) {
  StereoPort& this_ = static_cast<StereoPort&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.left_.Destroy();
  this_._impl_.right_.Destroy();
  this_._impl_.~Impl_();
}

inline void* PROTOBUF_NONNULL StereoPort::PlacementNew_(
    const void* PROTOBUF_NONNULL, void* PROTOBUF_NONNULL mem,
    ::google::protobuf::Arena* PROTOBUF_NULLABLE arena) {
  return ::new (mem) StereoPort(arena);
}
constexpr auto StereoPort::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(StereoPort),
                                            alignof(StereoPort));
}
constexpr auto StereoPort::InternalGenerateClassData_() {
  return ::google::protobuf::internal::ClassDataFull{
      ::google::protobuf::internal::ClassData{
          &_StereoPort_default_instance_._instance,
          &_table_.header,
          nullptr,  // OnDemandRegisterArenaDtor
          nullptr,  // IsInitialized
          &StereoPort::MergeImpl,
          ::google::protobuf::Message::GetNewImpl<StereoPort>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
          &StereoPort::SharedDtor,
          ::google::protobuf::Message::GetClearImpl<StereoPort>(), &StereoPort::ByteSizeLong,
              &StereoPort::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
          PROTOBUF_FIELD_OFFSET(StereoPort, _impl_._cached_size_),
          false,
      },
      &StereoPort::kDescriptorMethods,
      &descriptor_table_stereo_5fport_2eproto,
      nullptr,  // tracker
  };
}

PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::google::protobuf::internal::ClassDataFull
        StereoPort_class_data_ =
            StereoPort::InternalGenerateClassData_();

const ::google::protobuf::internal::ClassData* PROTOBUF_NONNULL StereoPort::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&StereoPort_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(StereoPort_class_data_.tc_table);
  return StereoPort_class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 37, 2>
StereoPort::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(StereoPort, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    StereoPort_class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::pmx::grpc::StereoPort>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string right = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 1, 0, PROTOBUF_FIELD_OFFSET(StereoPort, _impl_.right_)}},
    // string left = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(StereoPort, _impl_.left_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string left = 1;
    {PROTOBUF_FIELD_OFFSET(StereoPort, _impl_.left_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string right = 2;
    {PROTOBUF_FIELD_OFFSET(StereoPort, _impl_.right_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\23\4\5\0\0\0\0\0"
    "pmx.grpc.StereoPort"
    "left"
    "right"
  }},
};
PROTOBUF_NOINLINE void StereoPort::Clear() {
// @@protoc_insertion_point(message_clear_start:pmx.grpc.StereoPort)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if ((cached_has_bits & 0x00000003u) != 0) {
    if ((cached_has_bits & 0x00000001u) != 0) {
      _impl_.left_.ClearNonDefaultToEmpty();
    }
    if ((cached_has_bits & 0x00000002u) != 0) {
      _impl_.right_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* PROTOBUF_NONNULL StereoPort::_InternalSerialize(
    const ::google::protobuf::MessageLite& base, ::uint8_t* PROTOBUF_NONNULL target,
    ::google::protobuf::io::EpsCopyOutputStream* PROTOBUF_NONNULL stream) {
  const StereoPort& this_ = static_cast<const StereoPort&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* PROTOBUF_NONNULL StereoPort::_InternalSerialize(
    ::uint8_t* PROTOBUF_NONNULL target,
    ::google::protobuf::io::EpsCopyOutputStream* PROTOBUF_NONNULL stream) const {
  const StereoPort& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
  // @@protoc_insertion_point(serialize_to_array_start:pmx.grpc.StereoPort)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string left = 1;
  if ((this_._impl_._has_bits_[0] & 0x00000001u) != 0) {
    if (!this_._internal_left().empty()) {
      const std::string& _s = this_._internal_left();
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "pmx.grpc.StereoPort.left");
      target = stream->WriteStringMaybeAliased(1, _s, target);
    }
  }

  // string right = 2;
  if ((this_._impl_._has_bits_[0] & 0x00000002u) != 0) {
    if (!this_._internal_right().empty()) {
      const std::string& _s = this_._internal_right();
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "pmx.grpc.StereoPort.right");
      target = stream->WriteStringMaybeAliased(2, _s, target);
    }
  }

  if (ABSL_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pmx.grpc.StereoPort)
  return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t StereoPort::ByteSizeLong(const MessageLite& base) {
  const StereoPort& this_ = static_cast<const StereoPort&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t StereoPort::ByteSizeLong() const {
  const StereoPort& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
  // @@protoc_insertion_point(message_byte_size_start:pmx.grpc.StereoPort)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(&this_);
  cached_has_bits = this_._impl_._has_bits_[0];
  if ((cached_has_bits & 0x00000003u) != 0) {
    // string left = 1;
    if ((cached_has_bits & 0x00000001u) != 0) {
      if (!this_._internal_left().empty()) {
        total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                        this_._internal_left());
      }
    }
    // string right = 2;
    if ((cached_has_bits & 0x00000002u) != 0) {
      if (!this_._internal_right().empty()) {
        total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                        this_._internal_right());
      }
    }
  }
  return this_.MaybeComputeUnknownFieldsSize(total_size,
                                             &this_._impl_._cached_size_);
}

void StereoPort::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<StereoPort*>(&to_msg);
  auto& from = static_cast<const StereoPort&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pmx.grpc.StereoPort)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if ((cached_has_bits & 0x00000003u) != 0) {
    if ((cached_has_bits & 0x00000001u) != 0) {
      if (!from._internal_left().empty()) {
        _this->_internal_set_left(from._internal_left());
      } else {
        if (_this->_impl_.left_.IsDefault()) {
          _this->_internal_set_left("");
        }
      }
    }
    if ((cached_has_bits & 0x00000002u) != 0) {
      if (!from._internal_right().empty()) {
        _this->_internal_set_right(from._internal_right());
      } else {
        if (_this->_impl_.right_.IsDefault()) {
          _this->_internal_set_right("");
        }
      }
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void StereoPort::CopyFrom(const StereoPort& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pmx.grpc.StereoPort)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void StereoPort::InternalSwap(StereoPort* PROTOBUF_RESTRICT PROTOBUF_NONNULL other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.left_, &other->_impl_.left_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.right_, &other->_impl_.right_, arena);
}

::google::protobuf::Metadata StereoPort::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace grpc
}  // namespace pmx
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ [[maybe_unused]] =
        (::_pbi::AddDescriptors(&descriptor_table_stereo_5fport_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
