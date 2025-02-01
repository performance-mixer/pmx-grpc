// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: input_ports.proto
// Protobuf C++ Version: 5.29.2

#ifndef input_5fports_2eproto_2epb_2eh
#define input_5fports_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_input_5fports_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_input_5fports_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_input_5fports_2eproto;
namespace pmx {
namespace grpc {
class ClearInputPortRequest;
struct ClearInputPortRequestDefaultTypeInternal;
extern ClearInputPortRequestDefaultTypeInternal _ClearInputPortRequest_default_instance_;
class SetupInputPortRequest;
struct SetupInputPortRequestDefaultTypeInternal;
extern SetupInputPortRequestDefaultTypeInternal _SetupInputPortRequest_default_instance_;
}  // namespace grpc
}  // namespace pmx
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace pmx {
namespace grpc {

// ===================================================================


// -------------------------------------------------------------------

class SetupInputPortRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:pmx.grpc.SetupInputPortRequest) */ {
 public:
  inline SetupInputPortRequest() : SetupInputPortRequest(nullptr) {}
  ~SetupInputPortRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(SetupInputPortRequest* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(SetupInputPortRequest));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR SetupInputPortRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline SetupInputPortRequest(const SetupInputPortRequest& from) : SetupInputPortRequest(nullptr, from) {}
  inline SetupInputPortRequest(SetupInputPortRequest&& from) noexcept
      : SetupInputPortRequest(nullptr, std::move(from)) {}
  inline SetupInputPortRequest& operator=(const SetupInputPortRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetupInputPortRequest& operator=(SetupInputPortRequest&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetupInputPortRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetupInputPortRequest* internal_default_instance() {
    return reinterpret_cast<const SetupInputPortRequest*>(
        &_SetupInputPortRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(SetupInputPortRequest& a, SetupInputPortRequest& b) { a.Swap(&b); }
  inline void Swap(SetupInputPortRequest* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetupInputPortRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetupInputPortRequest* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<SetupInputPortRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SetupInputPortRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const SetupInputPortRequest& from) { SetupInputPortRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(SetupInputPortRequest* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "pmx.grpc.SetupInputPortRequest"; }

 protected:
  explicit SetupInputPortRequest(::google::protobuf::Arena* arena);
  SetupInputPortRequest(::google::protobuf::Arena* arena, const SetupInputPortRequest& from);
  SetupInputPortRequest(::google::protobuf::Arena* arena, SetupInputPortRequest&& from) noexcept
      : SetupInputPortRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kPortFieldNumber = 1,
    kChannelIdFieldNumber = 2,
  };
  // string port = 1;
  void clear_port() ;
  const std::string& port() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_port(Arg_&& arg, Args_... args);
  std::string* mutable_port();
  PROTOBUF_NODISCARD std::string* release_port();
  void set_allocated_port(std::string* value);

  private:
  const std::string& _internal_port() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_port(
      const std::string& value);
  std::string* _internal_mutable_port();

  public:
  // uint32 channel_id = 2;
  void clear_channel_id() ;
  ::uint32_t channel_id() const;
  void set_channel_id(::uint32_t value);

  private:
  ::uint32_t _internal_channel_id() const;
  void _internal_set_channel_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:pmx.grpc.SetupInputPortRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      43, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const SetupInputPortRequest& from_msg);
    ::google::protobuf::internal::ArenaStringPtr port_;
    ::uint32_t channel_id_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_input_5fports_2eproto;
};
// -------------------------------------------------------------------

class ClearInputPortRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:pmx.grpc.ClearInputPortRequest) */ {
 public:
  inline ClearInputPortRequest() : ClearInputPortRequest(nullptr) {}
  ~ClearInputPortRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(ClearInputPortRequest* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(ClearInputPortRequest));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR ClearInputPortRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline ClearInputPortRequest(const ClearInputPortRequest& from) : ClearInputPortRequest(nullptr, from) {}
  inline ClearInputPortRequest(ClearInputPortRequest&& from) noexcept
      : ClearInputPortRequest(nullptr, std::move(from)) {}
  inline ClearInputPortRequest& operator=(const ClearInputPortRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClearInputPortRequest& operator=(ClearInputPortRequest&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ClearInputPortRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ClearInputPortRequest* internal_default_instance() {
    return reinterpret_cast<const ClearInputPortRequest*>(
        &_ClearInputPortRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(ClearInputPortRequest& a, ClearInputPortRequest& b) { a.Swap(&b); }
  inline void Swap(ClearInputPortRequest* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ClearInputPortRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ClearInputPortRequest* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<ClearInputPortRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ClearInputPortRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const ClearInputPortRequest& from) { ClearInputPortRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(ClearInputPortRequest* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "pmx.grpc.ClearInputPortRequest"; }

 protected:
  explicit ClearInputPortRequest(::google::protobuf::Arena* arena);
  ClearInputPortRequest(::google::protobuf::Arena* arena, const ClearInputPortRequest& from);
  ClearInputPortRequest(::google::protobuf::Arena* arena, ClearInputPortRequest&& from) noexcept
      : ClearInputPortRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kChannelIdFieldNumber = 1,
  };
  // uint32 channel_id = 1;
  void clear_channel_id() ;
  ::uint32_t channel_id() const;
  void set_channel_id(::uint32_t value);

  private:
  ::uint32_t _internal_channel_id() const;
  void _internal_set_channel_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:pmx.grpc.ClearInputPortRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const ClearInputPortRequest& from_msg);
    ::uint32_t channel_id_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_input_5fports_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SetupInputPortRequest

// string port = 1;
inline void SetupInputPortRequest::clear_port() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.port_.ClearToEmpty();
}
inline const std::string& SetupInputPortRequest::port() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:pmx.grpc.SetupInputPortRequest.port)
  return _internal_port();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void SetupInputPortRequest::set_port(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.port_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:pmx.grpc.SetupInputPortRequest.port)
}
inline std::string* SetupInputPortRequest::mutable_port() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_port();
  // @@protoc_insertion_point(field_mutable:pmx.grpc.SetupInputPortRequest.port)
  return _s;
}
inline const std::string& SetupInputPortRequest::_internal_port() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.port_.Get();
}
inline void SetupInputPortRequest::_internal_set_port(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.port_.Set(value, GetArena());
}
inline std::string* SetupInputPortRequest::_internal_mutable_port() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.port_.Mutable( GetArena());
}
inline std::string* SetupInputPortRequest::release_port() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:pmx.grpc.SetupInputPortRequest.port)
  return _impl_.port_.Release();
}
inline void SetupInputPortRequest::set_allocated_port(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.port_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.port_.IsDefault()) {
    _impl_.port_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:pmx.grpc.SetupInputPortRequest.port)
}

// uint32 channel_id = 2;
inline void SetupInputPortRequest::clear_channel_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.channel_id_ = 0u;
}
inline ::uint32_t SetupInputPortRequest::channel_id() const {
  // @@protoc_insertion_point(field_get:pmx.grpc.SetupInputPortRequest.channel_id)
  return _internal_channel_id();
}
inline void SetupInputPortRequest::set_channel_id(::uint32_t value) {
  _internal_set_channel_id(value);
  // @@protoc_insertion_point(field_set:pmx.grpc.SetupInputPortRequest.channel_id)
}
inline ::uint32_t SetupInputPortRequest::_internal_channel_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.channel_id_;
}
inline void SetupInputPortRequest::_internal_set_channel_id(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.channel_id_ = value;
}

// -------------------------------------------------------------------

// ClearInputPortRequest

// uint32 channel_id = 1;
inline void ClearInputPortRequest::clear_channel_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.channel_id_ = 0u;
}
inline ::uint32_t ClearInputPortRequest::channel_id() const {
  // @@protoc_insertion_point(field_get:pmx.grpc.ClearInputPortRequest.channel_id)
  return _internal_channel_id();
}
inline void ClearInputPortRequest::set_channel_id(::uint32_t value) {
  _internal_set_channel_id(value);
  // @@protoc_insertion_point(field_set:pmx.grpc.ClearInputPortRequest.channel_id)
}
inline ::uint32_t ClearInputPortRequest::_internal_channel_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.channel_id_;
}
inline void ClearInputPortRequest::_internal_set_channel_id(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.channel_id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpc
}  // namespace pmx


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // input_5fports_2eproto_2epb_2eh
