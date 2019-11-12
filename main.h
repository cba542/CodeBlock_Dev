


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

  typedef unsigned long long  UINT64;
  typedef long long           INT64;
  typedef unsigned int        UINT32;
  typedef int                 INT32;
  typedef unsigned short      UINT16;
  typedef unsigned short      CHAR16;
  typedef short               INT16;
  typedef unsigned char       BOOLEAN;
  typedef unsigned char       UINT8;
  typedef char                CHAR8;
  typedef signed char         INT8;

typedef struct {
  UINT32  Data1;
  UINT16  Data2;
  UINT16  Data3;
  UINT8   Data4[8];
} EFI_GUID;

#define IN
#define OUT

#define TRUE	1
#define FALSE	0

//
// Dependency Expression Opcode
//
#define CAPSULE_DEP_PUSH_GUID        0x00
#define CAPSULE_DEP_PUSH_VERSION     0x01
#define CAPSULE_DEP_VERSION_STR      0x02
#define CAPSULE_DEP_AND              0x03
#define CAPSULE_DEP_OR               0x04
#define CAPSULE_DEP_NOT              0x05
#define CAPSULE_DEP_TRUE             0x06
#define CAPSULE_DEP_FALSE            0x07
#define CAPSULE_DEP_EQ               0x08
#define CAPSULE_DEP_GT               0x09
#define CAPSULE_DEP_GTE              0x0A
#define CAPSULE_DEP_LT               0x0B
#define CAPSULE_DEP_LTE              0x0C
#define CAPSULE_DEP_END              0x0D
