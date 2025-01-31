// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: stereo_port.proto
// Protobuf C++ Version: 5.29.2

#ifndef stereo_5fport_2eproto_2epb_2eh
#define stereo_5fport_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_stereo_5fport_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_stereo_5fport_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_stereo_5fport_2eproto;
namespace pmx {
namespace grpc {
class StereoPort;
struct StereoPortDefaultTypeInternal;
extern StereoPortDefaultTypeInternal _StereoPort_default_instance_;
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

class StereoPort final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:pmx.grpc.StereoPort) */ {
 public:
  inline StereoPort() : StereoPort(nullptr) {}
  ~StereoPort() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(StereoPort* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(StereoPort));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR StereoPort(
      ::google::protobuf::internal::ConstantInitialized);

  inline StereoPort(const StereoPort& from) : StereoPort(nullptr, from) {}
  inline StereoPort(StereoPort&& from) noexcept
      : StereoPort(nullptr, std::move(from)) {}
  inline StereoPort& operator=(const StereoPort& from) {
    CopyFrom(from);
    return *this;
  }
  inline StereoPort& operator=(StereoPort&& from) noexcept {
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
  static const StereoPort& default_instance() {
    return *internal_default_instance();
  }
  static inline const StereoPort* internal_default_instance() {
    return reinterpret_cast<const StereoPort*>(
        &_StereoPort_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(StereoPort& a, StereoPort& b) { a.Swap(&b); }
  inline void Swap(StereoPort* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StereoPort* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StereoPort* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<StereoPort>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const StereoPort& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const StereoPort& from) { StereoPort::MergeImpl(*this, from); }

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
  void InternalSwap(StereoPort* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "pmx.grpc.StereoPort"; }

 protected:
  explicit StereoPort(::google::protobuf::Arena* arena);
  StereoPort(::google::protobuf::Arena* arena, const StereoPort& from);
  StereoPort(::google::protobuf::Arena* arena, StereoPort&& from) noexcept
      : StereoPort(arena) {
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
    kLeftFieldNumber = 1,
    kRightFieldNumber = 2,
  };
  // string left = 1;
  void clear_left() ;
  const std::string& left() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_left(Arg_&& arg, Args_... args);
  std::string* mutable_left();
  PROTOBUF_NODISCARD std::string* release_left();
  void set_allocated_left(std::string* value);

  private:
  const std::string& _internal_left() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_left(
      const std::string& value);
  std::string* _internal_mutable_left();

  public:
  // string right = 2;
  void clear_right() ;
  const std::string& right() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_right(Arg_&& arg, Args_... args);
  std::string* mutable_right();
  PROTOBUF_NODISCARD std::string* release_right();
  void set_allocated_right(std::string* value);

  private:
  const std::string& _internal_right() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_right(
      const std::string& value);
  std::string* _internal_mutable_right();

  public:
  // @@protoc_insertion_point(class_scope:pmx.grpc.StereoPort)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      37, 2>
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
                          const StereoPort& from_msg);
    ::google::protobuf::internal::ArenaStringPtr left_;
    ::google::protobuf::internal::ArenaStringPtr right_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_stereo_5fport_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// StereoPort

// string left = 1;
inline void StereoPort::clear_left() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.left_.ClearToEmpty();
}
inline const std::string& StereoPort::left() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:pmx.grpc.StereoPort.left)
  return _internal_left();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void StereoPort::set_left(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.left_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:pmx.grpc.StereoPort.left)
}
inline std::string* StereoPort::mutable_left() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_left();
  // @@protoc_insertion_point(field_mutable:pmx.grpc.StereoPort.left)
  return _s;
}
inline const std::string& StereoPort::_internal_left() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.left_.Get();
}
inline void StereoPort::_internal_set_left(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.left_.Set(value, GetArena());
}
inline std::string* StereoPort::_internal_mutable_left() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.left_.Mutable( GetArena());
}
inline std::string* StereoPort::release_left() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:pmx.grpc.StereoPort.left)
  return _impl_.left_.Release();
}
inline void StereoPort::set_allocated_left(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.left_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.left_.IsDefault()) {
    _impl_.left_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:pmx.grpc.StereoPort.left)
}

// string right = 2;
inline void StereoPort::clear_right() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.right_.ClearToEmpty();
}
inline const std::string& StereoPort::right() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:pmx.grpc.StereoPort.right)
  return _internal_right();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void StereoPort::set_right(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.right_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:pmx.grpc.StereoPort.right)
}
inline std::string* StereoPort::mutable_right() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_right();
  // @@protoc_insertion_point(field_mutable:pmx.grpc.StereoPort.right)
  return _s;
}
inline const std::string& StereoPort::_internal_right() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.right_.Get();
}
inline void StereoPort::_internal_set_right(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.right_.Set(value, GetArena());
}
inline std::string* StereoPort::_internal_mutable_right() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.right_.Mutable( GetArena());
}
inline std::string* StereoPort::release_right() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:pmx.grpc.StereoPort.right)
  return _impl_.right_.Release();
}
inline void StereoPort::set_allocated_right(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.right_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.right_.IsDefault()) {
    _impl_.right_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:pmx.grpc.StereoPort.right)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpc
}  // namespace pmx


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // stereo_5fport_2eproto_2epb_2eh
