// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: school.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_school_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_school_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_school_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_school_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_school_2eproto;
namespace school {
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
struct StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace school
PROTOBUF_NAMESPACE_OPEN
template<> ::school::FullName* Arena::CreateMaybeMessage<::school::FullName>(Arena*);
template<> ::school::Student* Arena::CreateMaybeMessage<::school::Student>(Arena*);
template<> ::school::StudentsGroup* Arena::CreateMaybeMessage<::school::StudentsGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace school {

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:school.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "school.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kFamilyNameFieldNumber = 2,
    kPatronymicFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string familyName = 2;
  void clear_familyname();
  const std::string& familyname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_familyname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_familyname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_familyname();
  void set_allocated_familyname(std::string* familyname);
  private:
  const std::string& _internal_familyname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_familyname(const std::string& value);
  std::string* _internal_mutable_familyname();
  public:

  // optional string patronymic = 3;
  bool has_patronymic() const;
  private:
  bool _internal_has_patronymic() const;
  public:
  void clear_patronymic();
  const std::string& patronymic() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_patronymic(ArgT0&& arg0, ArgT... args);
  std::string* mutable_patronymic();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_patronymic();
  void set_allocated_patronymic(std::string* patronymic);
  private:
  const std::string& _internal_patronymic() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_patronymic(const std::string& value);
  std::string* _internal_mutable_patronymic();
  public:

  // @@protoc_insertion_point(class_scope:school.FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr familyname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr patronymic_;
  friend struct ::TableStruct_school_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:school.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "school.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAppraisalsFieldNumber = 2,
    kFullnameFieldNumber = 1,
    kAverangeAppraisalsFieldNumber = 3,
  };
  // repeated int32 appraisals = 2;
  int appraisals_size() const;
  private:
  int _internal_appraisals_size() const;
  public:
  void clear_appraisals();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_appraisals(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_appraisals() const;
  void _internal_add_appraisals(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_appraisals();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 appraisals(int index) const;
  void set_appraisals(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_appraisals(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      appraisals() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_appraisals();

  // .school.FullName fullname = 1;
  bool has_fullname() const;
  private:
  bool _internal_has_fullname() const;
  public:
  void clear_fullname();
  const ::school::FullName& fullname() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::school::FullName* release_fullname();
  ::school::FullName* mutable_fullname();
  void set_allocated_fullname(::school::FullName* fullname);
  private:
  const ::school::FullName& _internal_fullname() const;
  ::school::FullName* _internal_mutable_fullname();
  public:
  void unsafe_arena_set_allocated_fullname(
      ::school::FullName* fullname);
  ::school::FullName* unsafe_arena_release_fullname();

  // double averangeAppraisals = 3;
  void clear_averangeappraisals();
  double averangeappraisals() const;
  void set_averangeappraisals(double value);
  private:
  double _internal_averangeappraisals() const;
  void _internal_set_averangeappraisals(double value);
  public:

  // @@protoc_insertion_point(class_scope:school.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > appraisals_;
  mutable std::atomic<int> _appraisals_cached_byte_size_;
  ::school::FullName* fullname_;
  double averangeappraisals_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_school_2eproto;
};
// -------------------------------------------------------------------

class StudentsGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:school.StudentsGroup) */ {
 public:
  inline StudentsGroup() : StudentsGroup(nullptr) {}
  ~StudentsGroup() override;
  explicit constexpr StudentsGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentsGroup(const StudentsGroup& from);
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StudentsGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentsGroup* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentsGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return new StudentsGroup();
  }

  StudentsGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "school.StudentsGroup";
  }
  protected:
  explicit StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentFieldNumber = 1,
  };
  // repeated .school.Student student = 1;
  int student_size() const;
  private:
  int _internal_student_size() const;
  public:
  void clear_student();
  ::school::Student* mutable_student(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::school::Student >*
      mutable_student();
  private:
  const ::school::Student& _internal_student(int index) const;
  ::school::Student* _internal_add_student();
  public:
  const ::school::Student& student(int index) const;
  ::school::Student* add_student();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::school::Student >&
      student() const;

  // @@protoc_insertion_point(class_scope:school.StudentsGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::school::Student > student_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_school_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string name = 1;
inline void FullName::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:school.FullName.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:school.FullName.name)
}
inline std::string* FullName::mutable_name() {
  // @@protoc_insertion_point(field_mutable:school.FullName.name)
  return _internal_mutable_name();
}
inline const std::string& FullName::_internal_name() const {
  return name_.Get();
}
inline void FullName::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:school.FullName.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:school.FullName.name)
}

// string familyName = 2;
inline void FullName::clear_familyname() {
  familyname_.ClearToEmpty();
}
inline const std::string& FullName::familyname() const {
  // @@protoc_insertion_point(field_get:school.FullName.familyName)
  return _internal_familyname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_familyname(ArgT0&& arg0, ArgT... args) {
 
 familyname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:school.FullName.familyName)
}
inline std::string* FullName::mutable_familyname() {
  // @@protoc_insertion_point(field_mutable:school.FullName.familyName)
  return _internal_mutable_familyname();
}
inline const std::string& FullName::_internal_familyname() const {
  return familyname_.Get();
}
inline void FullName::_internal_set_familyname(const std::string& value) {
  
  familyname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_familyname() {
  
  return familyname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_familyname() {
  // @@protoc_insertion_point(field_release:school.FullName.familyName)
  return familyname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_familyname(std::string* familyname) {
  if (familyname != nullptr) {
    
  } else {
    
  }
  familyname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), familyname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:school.FullName.familyName)
}

// optional string patronymic = 3;
inline bool FullName::_internal_has_patronymic() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FullName::has_patronymic() const {
  return _internal_has_patronymic();
}
inline void FullName::clear_patronymic() {
  patronymic_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FullName::patronymic() const {
  // @@protoc_insertion_point(field_get:school.FullName.patronymic)
  return _internal_patronymic();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_patronymic(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 patronymic_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:school.FullName.patronymic)
}
inline std::string* FullName::mutable_patronymic() {
  // @@protoc_insertion_point(field_mutable:school.FullName.patronymic)
  return _internal_mutable_patronymic();
}
inline const std::string& FullName::_internal_patronymic() const {
  return patronymic_.Get();
}
inline void FullName::_internal_set_patronymic(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  patronymic_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_patronymic() {
  _has_bits_[0] |= 0x00000001u;
  return patronymic_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_patronymic() {
  // @@protoc_insertion_point(field_release:school.FullName.patronymic)
  if (!_internal_has_patronymic()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return patronymic_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_patronymic(std::string* patronymic) {
  if (patronymic != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  patronymic_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), patronymic,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:school.FullName.patronymic)
}

// -------------------------------------------------------------------

// Student

// .school.FullName fullname = 1;
inline bool Student::_internal_has_fullname() const {
  return this != internal_default_instance() && fullname_ != nullptr;
}
inline bool Student::has_fullname() const {
  return _internal_has_fullname();
}
inline void Student::clear_fullname() {
  if (GetArenaForAllocation() == nullptr && fullname_ != nullptr) {
    delete fullname_;
  }
  fullname_ = nullptr;
}
inline const ::school::FullName& Student::_internal_fullname() const {
  const ::school::FullName* p = fullname_;
  return p != nullptr ? *p : reinterpret_cast<const ::school::FullName&>(
      ::school::_FullName_default_instance_);
}
inline const ::school::FullName& Student::fullname() const {
  // @@protoc_insertion_point(field_get:school.Student.fullname)
  return _internal_fullname();
}
inline void Student::unsafe_arena_set_allocated_fullname(
    ::school::FullName* fullname) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(fullname_);
  }
  fullname_ = fullname;
  if (fullname) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:school.Student.fullname)
}
inline ::school::FullName* Student::release_fullname() {
  
  ::school::FullName* temp = fullname_;
  fullname_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::school::FullName* Student::unsafe_arena_release_fullname() {
  // @@protoc_insertion_point(field_release:school.Student.fullname)
  
  ::school::FullName* temp = fullname_;
  fullname_ = nullptr;
  return temp;
}
inline ::school::FullName* Student::_internal_mutable_fullname() {
  
  if (fullname_ == nullptr) {
    auto* p = CreateMaybeMessage<::school::FullName>(GetArenaForAllocation());
    fullname_ = p;
  }
  return fullname_;
}
inline ::school::FullName* Student::mutable_fullname() {
  // @@protoc_insertion_point(field_mutable:school.Student.fullname)
  return _internal_mutable_fullname();
}
inline void Student::set_allocated_fullname(::school::FullName* fullname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete fullname_;
  }
  if (fullname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::school::FullName>::GetOwningArena(fullname);
    if (message_arena != submessage_arena) {
      fullname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fullname, submessage_arena);
    }
    
  } else {
    
  }
  fullname_ = fullname;
  // @@protoc_insertion_point(field_set_allocated:school.Student.fullname)
}

// repeated int32 appraisals = 2;
inline int Student::_internal_appraisals_size() const {
  return appraisals_.size();
}
inline int Student::appraisals_size() const {
  return _internal_appraisals_size();
}
inline void Student::clear_appraisals() {
  appraisals_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_appraisals(int index) const {
  return appraisals_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::appraisals(int index) const {
  // @@protoc_insertion_point(field_get:school.Student.appraisals)
  return _internal_appraisals(index);
}
inline void Student::set_appraisals(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  appraisals_.Set(index, value);
  // @@protoc_insertion_point(field_set:school.Student.appraisals)
}
inline void Student::_internal_add_appraisals(::PROTOBUF_NAMESPACE_ID::int32 value) {
  appraisals_.Add(value);
}
inline void Student::add_appraisals(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_appraisals(value);
  // @@protoc_insertion_point(field_add:school.Student.appraisals)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_appraisals() const {
  return appraisals_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::appraisals() const {
  // @@protoc_insertion_point(field_list:school.Student.appraisals)
  return _internal_appraisals();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_appraisals() {
  return &appraisals_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_appraisals() {
  // @@protoc_insertion_point(field_mutable_list:school.Student.appraisals)
  return _internal_mutable_appraisals();
}

// double averangeAppraisals = 3;
inline void Student::clear_averangeappraisals() {
  averangeappraisals_ = 0;
}
inline double Student::_internal_averangeappraisals() const {
  return averangeappraisals_;
}
inline double Student::averangeappraisals() const {
  // @@protoc_insertion_point(field_get:school.Student.averangeAppraisals)
  return _internal_averangeappraisals();
}
inline void Student::_internal_set_averangeappraisals(double value) {
  
  averangeappraisals_ = value;
}
inline void Student::set_averangeappraisals(double value) {
  _internal_set_averangeappraisals(value);
  // @@protoc_insertion_point(field_set:school.Student.averangeAppraisals)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .school.Student student = 1;
inline int StudentsGroup::_internal_student_size() const {
  return student_.size();
}
inline int StudentsGroup::student_size() const {
  return _internal_student_size();
}
inline void StudentsGroup::clear_student() {
  student_.Clear();
}
inline ::school::Student* StudentsGroup::mutable_student(int index) {
  // @@protoc_insertion_point(field_mutable:school.StudentsGroup.student)
  return student_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::school::Student >*
StudentsGroup::mutable_student() {
  // @@protoc_insertion_point(field_mutable_list:school.StudentsGroup.student)
  return &student_;
}
inline const ::school::Student& StudentsGroup::_internal_student(int index) const {
  return student_.Get(index);
}
inline const ::school::Student& StudentsGroup::student(int index) const {
  // @@protoc_insertion_point(field_get:school.StudentsGroup.student)
  return _internal_student(index);
}
inline ::school::Student* StudentsGroup::_internal_add_student() {
  return student_.Add();
}
inline ::school::Student* StudentsGroup::add_student() {
  // @@protoc_insertion_point(field_add:school.StudentsGroup.student)
  return _internal_add_student();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::school::Student >&
StudentsGroup::student() const {
  // @@protoc_insertion_point(field_list:school.StudentsGroup.student)
  return student_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace school

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_school_2eproto
