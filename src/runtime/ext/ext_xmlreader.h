/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_XMLREADER_H__
#define __EXT_XMLREADER_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <libxml/tree.h>
#include <libxml/xmlreader.h>
#include <libxml/uri.h>
#include <runtime/base/file/file.h>

typedef int (*xmlreader_read_int_t)(xmlTextReaderPtr reader);
typedef unsigned char *(*xmlreader_read_char_t)(xmlTextReaderPtr reader);
typedef const unsigned char *(*xmlreader_read_const_char_t)(xmlTextReaderPtr reader);
typedef unsigned char *(*xmlreader_read_one_char_t)(xmlTextReaderPtr reader, const unsigned char *);
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64 q_XMLReader_NONE;
extern const int64 q_XMLReader_ELEMENT;
extern const int64 q_XMLReader_ATTRIBUTE;
extern const int64 q_XMLReader_TEXT;
extern const int64 q_XMLReader_CDATA;
extern const int64 q_XMLReader_ENTITY_REF;
extern const int64 q_XMLReader_ENTITY;
extern const int64 q_XMLReader_PI;
extern const int64 q_XMLReader_COMMENT;
extern const int64 q_XMLReader_DOC;
extern const int64 q_XMLReader_DOC_TYPE;
extern const int64 q_XMLReader_DOC_FRAGMENT;
extern const int64 q_XMLReader_NOTATION;
extern const int64 q_XMLReader_WHITESPACE;
extern const int64 q_XMLReader_SIGNIFICANT_WHITESPACE;
extern const int64 q_XMLReader_END_ELEMENT;
extern const int64 q_XMLReader_END_ENTITY;
extern const int64 q_XMLReader_XML_DECLARATION;
extern const int64 q_XMLReader_LOADDTD;
extern const int64 q_XMLReader_DEFAULTATTRS;
extern const int64 q_XMLReader_VALIDATE;
extern const int64 q_XMLReader_SUBST_ENTITIES;

///////////////////////////////////////////////////////////////////////////////
// class XMLReader

FORWARD_DECLARE_CLASS_BUILTIN(XMLReader);
class c_XMLReader : public ExtObjectDataFlags<ObjectData::UseGet>, public Sweepable {
 public:
  DECLARE_CLASS(XMLReader, XMLReader, ObjectData)

  // need to implement
  public: c_XMLReader();
  public: ~c_XMLReader();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: bool t_open(CStrRef uri, CStrRef encoding = null_string, int64 options = 0);
  DECLARE_METHOD_INVOKE_HELPERS(open);
  public: bool t_xml(CStrRef source, CStrRef encoding = null_string, int64 options = 0);
  DECLARE_METHOD_INVOKE_HELPERS(xml);
  public: bool t_close();
  DECLARE_METHOD_INVOKE_HELPERS(close);
  public: bool t_read();
  DECLARE_METHOD_INVOKE_HELPERS(read);
  public: bool t_next(CStrRef localname = null_string);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  public: String t_readstring();
  DECLARE_METHOD_INVOKE_HELPERS(readstring);
  public: String t_readinnerxml();
  DECLARE_METHOD_INVOKE_HELPERS(readinnerxml);
  public: String t_readouterxml();
  DECLARE_METHOD_INVOKE_HELPERS(readouterxml);
  public: bool t_movetonextattribute();
  DECLARE_METHOD_INVOKE_HELPERS(movetonextattribute);
  public: Variant t_getattribute(CStrRef name);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  public: Variant t_getattributeno(int64 index);
  DECLARE_METHOD_INVOKE_HELPERS(getattributeno);
  public: Variant t_getattributens(CStrRef name, CStrRef namespaceURI);
  DECLARE_METHOD_INVOKE_HELPERS(getattributens);
  public: bool t_movetoattribute(CStrRef name);
  DECLARE_METHOD_INVOKE_HELPERS(movetoattribute);
  public: bool t_movetoattributeno(int64 index);
  DECLARE_METHOD_INVOKE_HELPERS(movetoattributeno);
  public: bool t_movetoattributens(CStrRef name, CStrRef namespaceURI);
  DECLARE_METHOD_INVOKE_HELPERS(movetoattributens);
  public: bool t_movetoelement();
  DECLARE_METHOD_INVOKE_HELPERS(movetoelement);
  public: bool t_movetofirstattribute();
  DECLARE_METHOD_INVOKE_HELPERS(movetofirstattribute);
  public: bool t_isvalid();
  DECLARE_METHOD_INVOKE_HELPERS(isvalid);
  public: bool t_expand();
  DECLARE_METHOD_INVOKE_HELPERS(expand);
  public: Variant t___get(Variant name);
  DECLARE_METHOD_INVOKE_HELPERS(__get);
  public: bool t_getparserproperty(int64 property);
  DECLARE_METHOD_INVOKE_HELPERS(getparserproperty);
  public: Variant t_lookupnamespace(CStrRef prefix);
  DECLARE_METHOD_INVOKE_HELPERS(lookupnamespace);
  public: bool t_setschema(CStrRef source);
  DECLARE_METHOD_INVOKE_HELPERS(setschema);
  public: bool t_setparserproperty(int64 property, bool value);
  DECLARE_METHOD_INVOKE_HELPERS(setparserproperty);
  public: bool t_setrelaxngschema(CStrRef filename);
  DECLARE_METHOD_INVOKE_HELPERS(setrelaxngschema);
  public: bool t_setrelaxngschemasource(CStrRef source);
  DECLARE_METHOD_INVOKE_HELPERS(setrelaxngschemasource);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_XMLReader *create();
  public: void dynConstruct(CArrRef Params);
  public: void getConstructor(MethodCallPackage &mcp);


  private: String read_string_func(xmlreader_read_char_t internal_function);
  private: bool bool_func_no_arg(xmlreader_read_int_t internal_function);
  private: Variant string_func_string_arg(String value, xmlreader_read_one_char_t internal_function);
  private: bool set_relaxng_schema(String source, int type);

 public:
  SmartObject<File>  m_uri;
 private:
  xmlTextReaderPtr        m_ptr;
  xmlParserInputBufferPtr m_input;
  void*                   m_schema;
  void close_impl();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_XMLREADER_H__
