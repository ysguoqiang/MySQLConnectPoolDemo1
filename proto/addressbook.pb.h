// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#ifndef PROTOBUF_addressbook_2eproto__INCLUDED
#define PROTOBUF_addressbook_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_addressbook_2eproto();
void protobuf_AssignDesc_addressbook_2eproto();
void protobuf_ShutdownFile_addressbook_2eproto();

class Person;
class Person_PhoneNumber;
class AddressBook;

enum Person_PhoneType {
  Person_PhoneType_MOBILE = 0,
  Person_PhoneType_HOME = 1,
  Person_PhoneType_WORK = 2
};
bool Person_PhoneType_IsValid(int value);
const Person_PhoneType Person_PhoneType_PhoneType_MIN = Person_PhoneType_MOBILE;
const Person_PhoneType Person_PhoneType_PhoneType_MAX = Person_PhoneType_WORK;
const int Person_PhoneType_PhoneType_ARRAYSIZE = Person_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor();
inline const ::std::string& Person_PhoneType_Name(Person_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_PhoneType_descriptor(), value);
}
inline bool Person_PhoneType_Parse(
    const ::std::string& name, Person_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_PhoneType>(
    Person_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Person_PhoneNumber : public ::google::protobuf::Message {
 public:
  Person_PhoneNumber();
  virtual ~Person_PhoneNumber();
  
  Person_PhoneNumber(const Person_PhoneNumber& from);
  
  inline Person_PhoneNumber& operator=(const Person_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Person_PhoneNumber& default_instance();
  
  void Swap(Person_PhoneNumber* other);
  
  // implements Message ----------------------------------------------
  
  Person_PhoneNumber* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person_PhoneNumber& from);
  void MergeFrom(const Person_PhoneNumber& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  
  // optional .Person.PhoneType type = 2 [default = HOME];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::Person_PhoneType type() const;
  inline void set_type(::Person_PhoneType value);
  
  // @@protoc_insertion_point(class_scope:Person.PhoneNumber)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* number_;
  int type_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();
  
  void InitAsDefaultInstance();
  static Person_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();
  
  Person(const Person& from);
  
  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();
  
  void Swap(Person* other);
  
  // implements Message ----------------------------------------------
  
  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef Person_PhoneNumber PhoneNumber;
  
  typedef Person_PhoneType PhoneType;
  static const PhoneType MOBILE = Person_PhoneType_MOBILE;
  static const PhoneType HOME = Person_PhoneType_HOME;
  static const PhoneType WORK = Person_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return Person_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Person_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Person_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Person_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Person_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Person_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Person_PhoneType_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional string email = 3;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 3;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  
  // repeated .Person.PhoneNumber phone = 4;
  inline int phone_size() const;
  inline void clear_phone();
  static const int kPhoneFieldNumber = 4;
  inline const ::Person_PhoneNumber& phone(int index) const;
  inline ::Person_PhoneNumber* mutable_phone(int index);
  inline ::Person_PhoneNumber* add_phone();
  inline const ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >&
      phone() const;
  inline ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >*
      mutable_phone();
  
  // required bytes unsure = 5;
  inline bool has_unsure() const;
  inline void clear_unsure();
  static const int kUnsureFieldNumber = 5;
  inline const ::std::string& unsure() const;
  inline void set_unsure(const ::std::string& value);
  inline void set_unsure(const char* value);
  inline void set_unsure(const void* value, size_t size);
  inline ::std::string* mutable_unsure();
  inline ::std::string* release_unsure();
  
  // @@protoc_insertion_point(class_scope:Person)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_email();
  inline void clear_has_email();
  inline void set_has_unsure();
  inline void clear_has_unsure();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* email_;
  ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber > phone_;
  ::std::string* unsure_;
  ::google::protobuf::int32 id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();
  
  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// -------------------------------------------------------------------

class AddressBook : public ::google::protobuf::Message {
 public:
  AddressBook();
  virtual ~AddressBook();
  
  AddressBook(const AddressBook& from);
  
  inline AddressBook& operator=(const AddressBook& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const AddressBook& default_instance();
  
  void Swap(AddressBook* other);
  
  // implements Message ----------------------------------------------
  
  AddressBook* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .Person person = 1;
  inline int person_size() const;
  inline void clear_person();
  static const int kPersonFieldNumber = 1;
  inline const ::Person& person(int index) const;
  inline ::Person* mutable_person(int index);
  inline ::Person* add_person();
  inline const ::google::protobuf::RepeatedPtrField< ::Person >&
      person() const;
  inline ::google::protobuf::RepeatedPtrField< ::Person >*
      mutable_person();
  
  // @@protoc_insertion_point(class_scope:AddressBook)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Person > person_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();
  
  void InitAsDefaultInstance();
  static AddressBook* default_instance_;
};
// ===================================================================


// ===================================================================

// Person_PhoneNumber

// required string number = 1;
inline bool Person_PhoneNumber::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person_PhoneNumber::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person_PhoneNumber::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person_PhoneNumber::clear_number() {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& Person_PhoneNumber::number() const {
  return *number_;
}
inline void Person_PhoneNumber::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Person_PhoneNumber::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Person_PhoneNumber::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person_PhoneNumber::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  return number_;
}
inline ::std::string* Person_PhoneNumber::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .Person.PhoneType type = 2 [default = HOME];
inline bool Person_PhoneNumber::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person_PhoneNumber::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person_PhoneNumber::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person_PhoneNumber::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::Person_PhoneType Person_PhoneNumber::type() const {
  return static_cast< ::Person_PhoneType >(type_);
}
inline void Person_PhoneNumber::set_type(::Person_PhoneType value) {
  GOOGLE_DCHECK(::Person_PhoneType_IsValid(value));
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// Person

// required string name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  return *name_;
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Person::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 id = 2;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Person::id() const {
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string email = 3;
inline bool Person::has_email() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_email() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_email() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Person::email() const {
  return *email_;
}
inline void Person::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Person::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* Person::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated .Person.PhoneNumber phone = 4;
inline int Person::phone_size() const {
  return phone_.size();
}
inline void Person::clear_phone() {
  phone_.Clear();
}
inline const ::Person_PhoneNumber& Person::phone(int index) const {
  return phone_.Get(index);
}
inline ::Person_PhoneNumber* Person::mutable_phone(int index) {
  return phone_.Mutable(index);
}
inline ::Person_PhoneNumber* Person::add_phone() {
  return phone_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >&
Person::phone() const {
  return phone_;
}
inline ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >*
Person::mutable_phone() {
  return &phone_;
}

// required bytes unsure = 5;
inline bool Person::has_unsure() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Person::set_has_unsure() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Person::clear_has_unsure() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Person::clear_unsure() {
  if (unsure_ != &::google::protobuf::internal::kEmptyString) {
    unsure_->clear();
  }
  clear_has_unsure();
}
inline const ::std::string& Person::unsure() const {
  return *unsure_;
}
inline void Person::set_unsure(const ::std::string& value) {
  set_has_unsure();
  if (unsure_ == &::google::protobuf::internal::kEmptyString) {
    unsure_ = new ::std::string;
  }
  unsure_->assign(value);
}
inline void Person::set_unsure(const char* value) {
  set_has_unsure();
  if (unsure_ == &::google::protobuf::internal::kEmptyString) {
    unsure_ = new ::std::string;
  }
  unsure_->assign(value);
}
inline void Person::set_unsure(const void* value, size_t size) {
  set_has_unsure();
  if (unsure_ == &::google::protobuf::internal::kEmptyString) {
    unsure_ = new ::std::string;
  }
  unsure_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Person::mutable_unsure() {
  set_has_unsure();
  if (unsure_ == &::google::protobuf::internal::kEmptyString) {
    unsure_ = new ::std::string;
  }
  return unsure_;
}
inline ::std::string* Person::release_unsure() {
  clear_has_unsure();
  if (unsure_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = unsure_;
    unsure_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// AddressBook

// repeated .Person person = 1;
inline int AddressBook::person_size() const {
  return person_.size();
}
inline void AddressBook::clear_person() {
  person_.Clear();
}
inline const ::Person& AddressBook::person(int index) const {
  return person_.Get(index);
}
inline ::Person* AddressBook::mutable_person(int index) {
  return person_.Mutable(index);
}
inline ::Person* AddressBook::add_person() {
  return person_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Person >&
AddressBook::person() const {
  return person_;
}
inline ::google::protobuf::RepeatedPtrField< ::Person >*
AddressBook::mutable_person() {
  return &person_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Person_PhoneType>() {
  return ::Person_PhoneType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_addressbook_2eproto__INCLUDED