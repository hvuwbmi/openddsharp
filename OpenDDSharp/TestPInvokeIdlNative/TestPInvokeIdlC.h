// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p15
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:152

#ifndef _TAO_IDL_TESTPINVOKEIDLC_01Y85B_H_
#define _TAO_IDL_TESTPINVOKEIDLC_01Y85B_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TestPInvokeIdlIDL_Export.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/BooleanSeqC.h"
#include "tao/CharSeqC.h"
#include "tao/DoubleSeqC.h"
#include "tao/FloatSeqC.h"
#include "tao/LongDoubleSeqC.h"
#include "tao/LongSeqC.h"
#include "tao/OctetSeqC.h"
#include "tao/ShortSeqC.h"
#include "tao/StringSeqC.h"
#include "tao/ULongSeqC.h"
#include "tao/UShortSeqC.h"
#include "tao/WCharSeqC.h"
#include "tao/WStringSeqC.h"
#include "tao/LongLongSeqC.h"
#include "tao/ULongLongSeqC.h"
#include "tao/PolicyC.h"
#include "tao/Policy_ManagerC.h"
#include "tao/Policy_CurrentC.h"
#include "tao/ServicesC.h"
#include "tao/ParameterModeC.h"
#include "tao/orb_typesC.h"
#include "tao/Typecode_typesC.h"
#include "tao/WrongTransactionC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TestPInvokeIdlIDL_Export

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:38

namespace Test
{

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:261

  struct NestedTestStruct;

  typedef
    ::TAO_Var_Var_T<
        NestedTestStruct
      >
    NestedTestStruct_var;

  typedef
    ::TAO_Out_T<
        NestedTestStruct
      >
    NestedTestStruct_out;

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:51

  struct TestPInvokeIdlIDL_Export NestedTestStruct
  {

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef NestedTestStruct_var _var_type;
    typedef NestedTestStruct_out _out_type;
    
    ::CORBA::Long Id;
    ::TAO::String_Manager Message;
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_TEST_LONGLIST_CH_)
#define _TEST_LONGLIST_CH_

  class LongList;

  typedef
    ::TAO_FixedSeq_Var_T<
        LongList
      >
    LongList_var;

  typedef
    ::TAO_Seq_Out_T<
        LongList
      >
    LongList_out;

  class TestPInvokeIdlIDL_Export LongList
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Long
          >
  {
  public:
    LongList (void);
    LongList ( ::CORBA::ULong max);
    LongList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Long* buffer,
      ::CORBA::Boolean release = false);
    LongList (const LongList &);
    virtual ~LongList (void);
    

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef LongList_var _var_type;
    typedef LongList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_TEST_STRINGLIST_CH_)
#define _TEST_STRINGLIST_CH_

  class StringList;

  typedef
    ::TAO_VarSeq_Var_T<
        StringList
      >
    StringList_var;

  typedef
    ::TAO_Seq_Out_T<
        StringList
      >
    StringList_out;

  class TestPInvokeIdlIDL_Export StringList
    : public
        ::TAO::unbounded_basic_string_sequence<char>
  {
  public:
    StringList (void);
    StringList ( ::CORBA::ULong max);
    StringList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Char ** buffer,
      ::CORBA::Boolean release = false);
    StringList (const StringList &);
    virtual ~StringList (void);
    

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef StringList_var _var_type;
    typedef StringList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_TEST_WSTRINGLIST_CH_)
#define _TEST_WSTRINGLIST_CH_

  class WStringList;

  typedef
    ::TAO_VarSeq_Var_T<
        WStringList
      >
    WStringList_var;

  typedef
    ::TAO_Seq_Out_T<
        WStringList
      >
    WStringList_out;

  class TestPInvokeIdlIDL_Export WStringList
    : public
        ::TAO::unbounded_basic_string_sequence<CORBA::WChar>
  {
  public:
    WStringList (void);
    WStringList ( ::CORBA::ULong max);
    WStringList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::WChar ** buffer,
      ::CORBA::Boolean release = false);
    WStringList (const WStringList &);
    virtual ~WStringList (void);
    

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef WStringList_var _var_type;
    typedef WStringList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:102

#if !defined (_TEST_STRUCTLIST_CH_)
#define _TEST_STRUCTLIST_CH_

  class StructList;

  typedef
    ::TAO_VarSeq_Var_T<
        StructList
      >
    StructList_var;

  typedef
    ::TAO_Seq_Out_T<
        StructList
      >
    StructList_out;

  class TestPInvokeIdlIDL_Export StructList
    : public
        ::TAO::unbounded_value_sequence<
            NestedTestStruct
          >
  {
  public:
    StructList (void);
    StructList ( ::CORBA::ULong max);
    StructList (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      NestedTestStruct* buffer,
      ::CORBA::Boolean release = false);
    StructList (const StructList &);
    virtual ~StructList (void);
    

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef StructList_var _var_type;
    typedef StructList_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::CORBA::Long ArrayLong[5];
  typedef ::CORBA::Long ArrayLong_slice;
  struct ArrayLong_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        ArrayLong,
        ArrayLong_slice,
        ArrayLong_tag
      >
    ArrayLong_var;

  typedef
    ArrayLong
    ArrayLong_out;

  typedef
    TAO_Array_Forany_T<
        ArrayLong,
        ArrayLong_slice,
        ArrayLong_tag
      >
    ArrayLong_forany;

  TAO_NAMESPACE_STORAGE_CLASS ArrayLong_slice *
  ArrayLong_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayLong_free (
      ArrayLong_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ArrayLong_slice *
  ArrayLong_dup (
      const ArrayLong_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayLong_copy (
      ArrayLong_slice *_tao_to,
      const ArrayLong_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::TAO::String_Manager ArrayString[10];
  typedef ::TAO::String_Manager ArrayString_slice;
  struct ArrayString_tag {};
  

  typedef
    TAO_VarArray_Var_T<
        ArrayString,
        ArrayString_slice,
        ArrayString_tag
      >
    ArrayString_var;

  typedef
    TAO_Array_Out_T<
        ArrayString,
        ArrayString_var,
        ArrayString_slice,
        ArrayString_tag
      >
    ArrayString_out;

  typedef
    TAO_Array_Forany_T<
        ArrayString,
        ArrayString_slice,
        ArrayString_tag
      >
    ArrayString_forany;

  TAO_NAMESPACE_STORAGE_CLASS ArrayString_slice *
  ArrayString_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayString_free (
      ArrayString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ArrayString_slice *
  ArrayString_dup (
      const ArrayString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayString_copy (
      ArrayString_slice *_tao_to,
      const ArrayString_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::TAO::WString_Manager ArrayWString[4];
  typedef ::TAO::WString_Manager ArrayWString_slice;
  struct ArrayWString_tag {};
  

  typedef
    TAO_VarArray_Var_T<
        ArrayWString,
        ArrayWString_slice,
        ArrayWString_tag
      >
    ArrayWString_var;

  typedef
    TAO_Array_Out_T<
        ArrayWString,
        ArrayWString_var,
        ArrayWString_slice,
        ArrayWString_tag
      >
    ArrayWString_out;

  typedef
    TAO_Array_Forany_T<
        ArrayWString,
        ArrayWString_slice,
        ArrayWString_tag
      >
    ArrayWString_forany;

  TAO_NAMESPACE_STORAGE_CLASS ArrayWString_slice *
  ArrayWString_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayWString_free (
      ArrayWString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ArrayWString_slice *
  ArrayWString_dup (
      const ArrayWString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayWString_copy (
      ArrayWString_slice *_tao_to,
      const ArrayWString_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef NestedTestStruct ArrayStruct[5];
  typedef NestedTestStruct ArrayStruct_slice;
  struct ArrayStruct_tag {};
  

  typedef
    TAO_VarArray_Var_T<
        ArrayStruct,
        ArrayStruct_slice,
        ArrayStruct_tag
      >
    ArrayStruct_var;

  typedef
    TAO_Array_Out_T<
        ArrayStruct,
        ArrayStruct_var,
        ArrayStruct_slice,
        ArrayStruct_tag
      >
    ArrayStruct_out;

  typedef
    TAO_Array_Forany_T<
        ArrayStruct,
        ArrayStruct_slice,
        ArrayStruct_tag
      >
    ArrayStruct_forany;

  TAO_NAMESPACE_STORAGE_CLASS ArrayStruct_slice *
  ArrayStruct_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayStruct_free (
      ArrayStruct_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS ArrayStruct_slice *
  ArrayStruct_dup (
      const ArrayStruct_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  ArrayStruct_copy (
      ArrayStruct_slice *_tao_to,
      const ArrayStruct_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::CORBA::Long MultiArrayLong[3][4][2];
  typedef ::CORBA::Long MultiArrayLong_slice[4][2];
  struct MultiArrayLong_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        MultiArrayLong,
        MultiArrayLong_slice,
        MultiArrayLong_tag
      >
    MultiArrayLong_var;

  typedef
    MultiArrayLong
    MultiArrayLong_out;

  typedef
    TAO_Array_Forany_T<
        MultiArrayLong,
        MultiArrayLong_slice,
        MultiArrayLong_tag
      >
    MultiArrayLong_forany;

  TAO_NAMESPACE_STORAGE_CLASS MultiArrayLong_slice *
  MultiArrayLong_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayLong_free (
      MultiArrayLong_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS MultiArrayLong_slice *
  MultiArrayLong_dup (
      const MultiArrayLong_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayLong_copy (
      MultiArrayLong_slice *_tao_to,
      const MultiArrayLong_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::TAO::String_Manager MultiArrayString[3][4][2];
  typedef ::TAO::String_Manager MultiArrayString_slice[4][2];
  struct MultiArrayString_tag {};
  

  typedef
    TAO_VarArray_Var_T<
        MultiArrayString,
        MultiArrayString_slice,
        MultiArrayString_tag
      >
    MultiArrayString_var;

  typedef
    TAO_Array_Out_T<
        MultiArrayString,
        MultiArrayString_var,
        MultiArrayString_slice,
        MultiArrayString_tag
      >
    MultiArrayString_out;

  typedef
    TAO_Array_Forany_T<
        MultiArrayString,
        MultiArrayString_slice,
        MultiArrayString_tag
      >
    MultiArrayString_forany;

  TAO_NAMESPACE_STORAGE_CLASS MultiArrayString_slice *
  MultiArrayString_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayString_free (
      MultiArrayString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS MultiArrayString_slice *
  MultiArrayString_dup (
      const MultiArrayString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayString_copy (
      MultiArrayString_slice *_tao_to,
      const MultiArrayString_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\array_ch.cpp:54

  typedef ::TAO::WString_Manager MultiArrayWString[3][4][2];
  typedef ::TAO::WString_Manager MultiArrayWString_slice[4][2];
  struct MultiArrayWString_tag {};
  

  typedef
    TAO_VarArray_Var_T<
        MultiArrayWString,
        MultiArrayWString_slice,
        MultiArrayWString_tag
      >
    MultiArrayWString_var;

  typedef
    TAO_Array_Out_T<
        MultiArrayWString,
        MultiArrayWString_var,
        MultiArrayWString_slice,
        MultiArrayWString_tag
      >
    MultiArrayWString_out;

  typedef
    TAO_Array_Forany_T<
        MultiArrayWString,
        MultiArrayWString_slice,
        MultiArrayWString_tag
      >
    MultiArrayWString_forany;

  TAO_NAMESPACE_STORAGE_CLASS MultiArrayWString_slice *
  MultiArrayWString_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayWString_free (
      MultiArrayWString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS MultiArrayWString_slice *
  MultiArrayWString_dup (
      const MultiArrayWString_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  MultiArrayWString_copy (
      MultiArrayWString_slice *_tao_to,
      const MultiArrayWString_slice *_tao_from);

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:261

  struct BasicTestStruct;

  typedef
    ::TAO_Var_Var_T<
        BasicTestStruct
      >
    BasicTestStruct_var;

  typedef
    ::TAO_Out_T<
        BasicTestStruct
      >
    BasicTestStruct_out;

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_ch.cpp:51

  struct TestPInvokeIdlIDL_Export BasicTestStruct
  {

    // TAO_IDL - Generated from
    // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_type.cpp:307

    
    typedef BasicTestStruct_var _var_type;
    typedef BasicTestStruct_out _out_type;
    
    ::CORBA::Long Id;
    ::TAO::String_Manager Message;
    ::TAO::WString_Manager WMessage;
    Test::LongList LongSequence;
    Test::StringList StringSequence;
    Test::WStringList WStringSequence;
    Test::ArrayLong LongArray;
    Test::ArrayString StringArray;
    Test::ArrayWString WStringArray;
    Test::NestedTestStruct StructTest;
    Test::StructList StructSequence;
    Test::ArrayStruct StructArray;
    Test::MultiArrayLong LongMultiArray;
    Test::MultiArrayString StringMultiArray;
    Test::MultiArrayWString WStringMultiArray;
  };

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:67

} // module Test

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Test::NestedTestStruct>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedTestStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::Test::LongList>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::LongList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::Test::StringList>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::StringList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::Test::WStringList>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::WStringList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:685

  template<>
  class Arg_Traits< ::Test::StructList>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::StructList,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::ArrayLong_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Test::ArrayLong_var,
            ::Test::ArrayLong_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::ArrayString_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::ArrayString_out,
            ::Test::ArrayString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::ArrayWString_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::ArrayWString_out,
            ::Test::ArrayWString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::ArrayStruct_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::ArrayStruct_out,
            ::Test::ArrayStruct_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::MultiArrayLong_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Test::MultiArrayLong_var,
            ::Test::MultiArrayLong_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::MultiArrayString_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::MultiArrayString_out,
            ::Test::MultiArrayString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::MultiArrayWString_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::MultiArrayWString_out,
            ::Test::MultiArrayWString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:947

  template<>
  class Arg_Traits< ::Test::BasicTestStruct>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::BasicTestStruct,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::ArrayLong_forany
    >
  {
    static void free (
        Test::ArrayLong_slice * _tao_slice);
    static Test::ArrayLong_slice * dup (
        const Test::ArrayLong_slice * _tao_slice);
    static void copy (
        Test::ArrayLong_slice * _tao_to,
        const Test::ArrayLong_slice * _tao_from);
    static Test::ArrayLong_slice * alloc (void);
    static void zero (
        Test::ArrayLong_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::ArrayString_forany
    >
  {
    static void free (
        Test::ArrayString_slice * _tao_slice);
    static Test::ArrayString_slice * dup (
        const Test::ArrayString_slice * _tao_slice);
    static void copy (
        Test::ArrayString_slice * _tao_to,
        const Test::ArrayString_slice * _tao_from);
    static Test::ArrayString_slice * alloc (void);
    static void zero (
        Test::ArrayString_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::ArrayWString_forany
    >
  {
    static void free (
        Test::ArrayWString_slice * _tao_slice);
    static Test::ArrayWString_slice * dup (
        const Test::ArrayWString_slice * _tao_slice);
    static void copy (
        Test::ArrayWString_slice * _tao_to,
        const Test::ArrayWString_slice * _tao_from);
    static Test::ArrayWString_slice * alloc (void);
    static void zero (
        Test::ArrayWString_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::ArrayStruct_forany
    >
  {
    static void free (
        Test::ArrayStruct_slice * _tao_slice);
    static Test::ArrayStruct_slice * dup (
        const Test::ArrayStruct_slice * _tao_slice);
    static void copy (
        Test::ArrayStruct_slice * _tao_to,
        const Test::ArrayStruct_slice * _tao_from);
    static Test::ArrayStruct_slice * alloc (void);
    static void zero (
        Test::ArrayStruct_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::MultiArrayLong_forany
    >
  {
    static void free (
        Test::MultiArrayLong_slice * _tao_slice);
    static Test::MultiArrayLong_slice * dup (
        const Test::MultiArrayLong_slice * _tao_slice);
    static void copy (
        Test::MultiArrayLong_slice * _tao_to,
        const Test::MultiArrayLong_slice * _tao_from);
    static Test::MultiArrayLong_slice * alloc (void);
    static void zero (
        Test::MultiArrayLong_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::MultiArrayString_forany
    >
  {
    static void free (
        Test::MultiArrayString_slice * _tao_slice);
    static Test::MultiArrayString_slice * dup (
        const Test::MultiArrayString_slice * _tao_slice);
    static void copy (
        Test::MultiArrayString_slice * _tao_to,
        const Test::MultiArrayString_slice * _tao_from);
    static Test::MultiArrayString_slice * alloc (void);
    static void zero (
        Test::MultiArrayString_slice * _tao_slice);
  };
  template<>
  struct TestPInvokeIdlIDL_Export Array_Traits<
      Test::MultiArrayWString_forany
    >
  {
    static void free (
        Test::MultiArrayWString_slice * _tao_slice);
    static Test::MultiArrayWString_slice * dup (
        const Test::MultiArrayWString_slice * _tao_slice);
    static void copy (
        Test::MultiArrayWString_slice * _tao_to,
        const Test::MultiArrayWString_slice * _tao_from);
    static Test::MultiArrayWString_slice * alloc (void);
    static void zero (
        Test::MultiArrayWString_slice * _tao_slice);
  };
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::NestedTestStruct &);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::NestedTestStruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_Test_LongList_H_
#define _TAO_CDR_OP_Test_LongList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::LongList &_tao_sequence);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::LongList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_LongList_H_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_Test_StringList_H_
#define _TAO_CDR_OP_Test_StringList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::StringList &_tao_sequence);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::StringList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_StringList_H_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_Test_WStringList_H_
#define _TAO_CDR_OP_Test_WStringList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::WStringList &_tao_sequence);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::WStringList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_WStringList_H_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\cdr_op_ch.cpp:68

#if !defined _TAO_CDR_OP_Test_StructList_H_
#define _TAO_CDR_OP_Test_StructList_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::StructList &_tao_sequence);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::StructList &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_StructList_H_ */

// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::ArrayLong_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::ArrayLong_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::ArrayString_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::ArrayString_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::ArrayWString_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::ArrayWString_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::ArrayStruct_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::ArrayStruct_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::MultiArrayLong_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::MultiArrayLong_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::MultiArrayString_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::MultiArrayString_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_array\cdr_op_ch.cpp:102


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::MultiArrayWString_forany &_tao_array);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::MultiArrayWString_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_ch.cpp:46


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TestPInvokeIdlIDL_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::BasicTestStruct &);
TestPInvokeIdlIDL_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::BasicTestStruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\projects\opendds\ext\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "TestPInvokeIdlC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

