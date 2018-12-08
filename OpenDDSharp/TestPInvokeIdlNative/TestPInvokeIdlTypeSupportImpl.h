/* -*- C++ -*- */
/* Generated by E:\PROJECTS\OPENDDS\ext\OpenDDS\bin\opendds_idl version 3.13 (ACE version 6.2a_p15) running on input file TestPInvokeIdl.idl */
#ifndef OPENDDS_IDL_GENERATED_TESTPINVOKEIDLTYPESUPPORTIMPL_H_YFIRF4
#define OPENDDS_IDL_GENERATED_TESTPINVOKEIDLTYPESUPPORTIMPL_H_YFIRF4
#include "TestPInvokeIdlC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "TestPInvokeIdlTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: BooleanSeq */


/* End TYPEDEF: BooleanSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: CharSeq */


/* End TYPEDEF: CharSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: DoubleSeq */


/* End TYPEDEF: DoubleSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: FloatSeq */


/* End TYPEDEF: FloatSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongDoubleSeq */


/* End TYPEDEF: LongDoubleSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongSeq */


/* End TYPEDEF: LongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: OctetSeq */


/* End TYPEDEF: OctetSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ShortSeq */


/* End TYPEDEF: ShortSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: StringSeq */


/* End TYPEDEF: StringSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ULongSeq */


/* End TYPEDEF: ULongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: UShortSeq */


/* End TYPEDEF: UShortSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: WCharSeq */


/* End TYPEDEF: WCharSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: WStringSeq */


/* End TYPEDEF: WStringSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongLongSeq */


/* End TYPEDEF: LongLongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ULongLongSeq */


/* End TYPEDEF: ULongLongSeq */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: Current */


/* End INTERFACE: Current */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: PolicyType */


/* End TYPEDEF: PolicyType */


/* Begin INTERFACE-FWD: Policy */


/* End INTERFACE-FWD: Policy */


/* Begin TYPEDEF: PolicyList */


/* End TYPEDEF: PolicyList */


/* Begin TYPEDEF: PolicyTypeSeq */


/* End TYPEDEF: PolicyTypeSeq */


/* Begin INTERFACE-FWD: PolicyCurrent */


/* End INTERFACE-FWD: PolicyCurrent */


/* Begin ENUM: SetOverrideType */


/* End ENUM: SetOverrideType */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: PolicyErrorCode */


/* End TYPEDEF: PolicyErrorCode */


/* Begin CONST: BAD_POLICY */


/* End CONST: BAD_POLICY */


/* Begin CONST: UNSUPPORTED_POLICY */


/* End CONST: UNSUPPORTED_POLICY */


/* Begin CONST: BAD_POLICY_TYPE */


/* End CONST: BAD_POLICY_TYPE */


/* Begin CONST: BAD_POLICY_VALUE */


/* End CONST: BAD_POLICY_VALUE */


/* Begin CONST: UNSUPPORTED_POLICY_VALUE */


/* End CONST: UNSUPPORTED_POLICY_VALUE */


/* Begin INTERFACE: Policy */


/* End INTERFACE: Policy */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: PolicyManager */


/* End INTERFACE: PolicyManager */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin INTERFACE: PolicyCurrent */


/* End INTERFACE: PolicyCurrent */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ServiceType */


/* End TYPEDEF: ServiceType */


/* Begin TYPEDEF: ServiceOption */


/* End TYPEDEF: ServiceOption */


/* Begin TYPEDEF: ServiceDetailType */


/* End TYPEDEF: ServiceDetailType */


/* Begin TYPEDEF: ServiceDetailData */


/* End TYPEDEF: ServiceDetailData */


/* Begin TYPEDEF: ServiceOptionSeq */


/* End TYPEDEF: ServiceOptionSeq */


/* Begin CONST: Security */


/* End CONST: Security */


/* Begin STRUCT: ServiceDetail */


/* End STRUCT: ServiceDetail */


/* Begin TYPEDEF: ServiceDetailSeq */


/* End TYPEDEF: ServiceDetailSeq */


/* Begin STRUCT: ServiceInformation */


/* End STRUCT: ServiceInformation */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin ENUM: ParameterMode */


/* End ENUM: ParameterMode */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ORBid */


/* End TYPEDEF: ORBid */


/* Begin TYPEDEF: Flags */


/* End TYPEDEF: Flags */


/* Begin TYPEDEF: Identifier */


/* End TYPEDEF: Identifier */


/* Begin TYPEDEF: RepositoryId */


/* End TYPEDEF: RepositoryId */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin ENUM: TCKind */


/* End ENUM: TCKind */

/* End MODULE: CORBA */


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin STRUCT: NamedValue */


/* End STRUCT: NamedValue */


/* Begin ENUM: exception_type */


/* End ENUM: exception_type */


/* Begin NATIVE: ValueFactory */


/* End NATIVE: ValueFactory */

/* End MODULE: CORBA */


/* Begin MODULE: Test */



/* Begin TYPEDEF: LongList */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

TestPInvokeIdlIDL_Export
void gen_find_size(const Test::LongList& seq, size_t& size, size_t& padding);

TestPInvokeIdlIDL_Export
bool operator<<(Serializer& strm, const Test::LongList& seq);

TestPInvokeIdlIDL_Export
bool operator>>(Serializer& strm, Test::LongList& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

TestPInvokeIdlIDL_Export
bool gen_skip_over(Serializer& ser, Test::LongList*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: LongList */


/* Begin STRUCT: BasicTestStruct */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

TestPInvokeIdlIDL_Export
void gen_find_size(const Test::BasicTestStruct& stru, size_t& size, size_t& padding);

TestPInvokeIdlIDL_Export
bool operator<<(Serializer& strm, const Test::BasicTestStruct& stru);

TestPInvokeIdlIDL_Export
bool operator>>(Serializer& strm, Test::BasicTestStruct& stru);

TestPInvokeIdlIDL_Export
size_t gen_max_marshaled_size(const Test::BasicTestStruct& stru, bool align);

TestPInvokeIdlIDL_Export
size_t gen_max_marshaled_size(KeyOnly<const Test::BasicTestStruct> stru, bool align);

TestPInvokeIdlIDL_Export
void gen_find_size(KeyOnly<const Test::BasicTestStruct> stru, size_t& size, size_t& padding);

TestPInvokeIdlIDL_Export
bool operator<<(Serializer& strm, KeyOnly<const Test::BasicTestStruct> stru);

TestPInvokeIdlIDL_Export
bool operator>>(Serializer& strm, KeyOnly<Test::BasicTestStruct> stru);

template <>
struct MarshalTraits<Test::BasicTestStruct> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct TestPInvokeIdlIDL_Export BasicTestStruct_OpenDDS_KeyLessThan {
  bool operator()(const Test::BasicTestStruct&, const Test::BasicTestStruct&) const
  {
    // Eith no DCPS_DATA_KEYs, return false
    // to allow use of map with just one entry
    return false;
  }
};
}


namespace Test {
class BasicTestStructTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<Test::BasicTestStruct> {
  typedef Test::BasicTestStruct MessageType;
  typedef Test::BasicTestStructSeq MessageSequenceType;
  typedef Test::BasicTestStructTypeSupport TypeSupportType;
  typedef Test::BasicTestStructTypeSupportImpl TypeSupportTypeImpl;
  typedef Test::BasicTestStructDataWriter DataWriterType;
  typedef Test::BasicTestStructDataReader DataReaderType;
  typedef Test::BasicTestStruct_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "Test::BasicTestStruct"; }
  static bool gen_has_key () { return false; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Test {
class TestPInvokeIdlIDL_Export BasicTestStructTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<BasicTestStructTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<BasicTestStruct> TraitsType;
  typedef BasicTestStructTypeSupport TypeSupportType;
  typedef BasicTestStructTypeSupport::_var_type _var_type;
  typedef BasicTestStructTypeSupport::_ptr_type _ptr_type;

  BasicTestStructTypeSupportImpl() {}
  virtual ~BasicTestStructTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static BasicTestStructTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
TestPInvokeIdlIDL_Export
const MetaStruct& getMetaStruct<Test::BasicTestStruct>();
TestPInvokeIdlIDL_Export
bool gen_skip_over(Serializer& ser, Test::BasicTestStruct*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: BasicTestStruct */

/* End MODULE: Test */
#endif /* OPENDDS_IDL_GENERATED_TESTPINVOKEIDLTYPESUPPORTIMPL_H_YFIRF4 */