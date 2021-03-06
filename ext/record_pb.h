/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_record_2eproto__INCLUDED
#define PROTOBUF_C_record_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Argument Argument;
typedef struct _Record Record;


/* --- enums --- */

typedef enum _Record__RecordType {
  RECORD__RECORD_TYPE__CALL = 0,
  RECORD__RECORD_TYPE__RETURN = 1,
  RECORD__RECORD_TYPE__EXCEPTION = 2,
  RECORD__RECORD_TYPE__LOG = 3,
  RECORD__RECORD_TYPE__OVERFLOW = 4
} Record__RecordType;

/* --- messages --- */

struct  _Argument
{
  ProtobufCMessage base;
  ProtobufCBinaryData name;
  ProtobufCBinaryData type;
  ProtobufCBinaryData value;
};
#define ARGUMENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&argument__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL} }


struct  _Record
{
  ProtobufCMessage base;
  Record__RecordType type;
  double time;
  int64_t tid;
  int32_t depth;
  ProtobufCBinaryData module;
  ProtobufCBinaryData function;
  int32_t lineno;
  size_t n_arguments;
  Argument **arguments;
};
#define RECORD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&record__descriptor) \
    , 0, 0, 0, 0, {0,NULL}, {0,NULL}, 0, 0,NULL }


/* Argument methods */
void   argument__init
                     (Argument         *message);
size_t argument__get_packed_size
                     (const Argument   *message);
size_t argument__pack
                     (const Argument   *message,
                      uint8_t             *out);
size_t argument__pack_to_buffer
                     (const Argument   *message,
                      ProtobufCBuffer     *buffer);
Argument *
       argument__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   argument__free_unpacked
                     (Argument *message,
                      ProtobufCAllocator *allocator);
/* Record methods */
void   record__init
                     (Record         *message);
size_t record__get_packed_size
                     (const Record   *message);
size_t record__pack
                     (const Record   *message,
                      uint8_t             *out);
size_t record__pack_to_buffer
                     (const Record   *message,
                      ProtobufCBuffer     *buffer);
Record *
       record__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   record__free_unpacked
                     (Record *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Argument_Closure)
                 (const Argument *message,
                  void *closure_data);
typedef void (*Record_Closure)
                 (const Record *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor argument__descriptor;
extern const ProtobufCMessageDescriptor record__descriptor;
extern const ProtobufCEnumDescriptor    record__record_type__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_record_2eproto__INCLUDED */
