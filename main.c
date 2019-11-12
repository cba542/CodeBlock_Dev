#include<stdio.h>

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

#define TRUE 1
#define FALSE 0
UINT8 stack8[0x20];

INT8 top8 = -1;


void push8(UINT8 x)
{
  stack8[++top8] = x;

}

void push32(UINT32 x)
{
  push8((UINT8) x );
  push8((UINT8)(x>>8));
  push8((UINT8)(x>>16));
  push8((UINT8)(x>>24));
}
UINT8 pop8()
{

  return stack8[top8--];
}

UINT32 pop32()
{
  return ( (((UINT32)pop8())<<24) + (((UINT32)pop8())<<16) + ((((UINT32)pop8()))<<8) + (UINT32)pop8() );
}

UINT32 pop16()
{
  return (((((UINT32)pop8()))<<8) + (UINT32)pop8() );
}



BOOLEAN CompareDpexGuid(EFI_GUID guid)
{

}

UINT8 main()
{
//-------------------------------------------
  CHAR8 exp[0x20];

  //exp[3] = 8;
  CHAR8 *e;
  UINT8 n1,n2,n3;
  UINT32 val1,val2,i;
  UINT32 xx = 0x504030;
  push32(xx);
  for(i = 0 ; i < 0x20 ; i++){
    //exp[i] = 0xFF;
    stack8[i] = 0;
  }
/*
  exp[0] = 0;
  exp[1] = 1;
  exp[2] = 8;
  exp[3] = 6;
  exp[4] = 7;
  exp[5] = 6;
  exp[6] = 7;
  exp[7] = 0x0D;
  exp[8] = 0x0D;
*/

  exp[0] = 0;
  exp[1] = 0x86;
  exp[2] = 0x48;
  exp[3] = 0x1E;
  exp[4] = 0x1A;
  exp[5] = 0x17;
  exp[6] = 0x95;
  exp[7] = 0x0E;
  exp[8] = 0x44;
  exp[9] = 0x9F;
  exp[10] = 0xDE;
  exp[11] = 0x3B;
  exp[12] = 0xE4;
  exp[13] = 0x4C;
  exp[14] = 0xEE;
  exp[15] = 0x21;
  exp[16] = 0x36;
  exp[17] = 0x0D;



  e = exp;
  while((*e <= 0x0D))
  {

    //n1 = pop8();
    switch(*e)
    {
      //1.GetImageInfo()
      //2.pop 16 bytes GUID compare with
      //3.If compare success push ImageInfo->Version to the stack
      case 0x00:
      {

      /*
        EFI_GUID CompGuid;
        INT8 Index;
        for(Index = 0; Index < 16 ;Index ++)
        {
            e++;
            push8(*e);
        }
        pop8();
        for(Index = 7; Index >= 0; Index--)
          CompGuid.Data4[Index] = pop8();

        CompGuid.Data3 = pop16();
        CompGuid.Data2 = pop16();
        CompGuid.Data1 = pop32();
*/

        break;
      }
      //1.GetImageInfo() to get ImageInfo->Version
      //2.push Version to stack
      case 0x01:
      {
        UINT32 version = 0x050403;
        UINT32 p1[1];
        UINT8  *p2;
        p1[0] = version;
        p2 = (UINT8 *)p1;
        for(i = 0; i < 4; i++)
        {
         push8(p2[i]);
        }

        break;
      }
      case 0x02:
      {

        break;
      }
      //AND
      case 0x03:
      {
        n1 = pop8();
        n2 = pop8();
        n3 = n1 & n2;
        push8(n3);
        break;
      }
      //Or
      case 0x04:
      {
        n1 = pop8();
        n2 = pop8();
        n3 = n1 | n2;
        push8(n3);
        break;
      }
      //NOT
      case 0x05:
      {
        n1 = pop8();
        n1 = (!n1);
        push8(n1);
        break;
      }
      //push TURE
      case 0x06:
      {
        push8(TRUE);
        break;
      }
      //push FALSE
      case 0x07:
      {
        push8(FALSE);
        break;
      }
      //EQ
      case 0x08:
      {
        val1 = pop32();
        val2 = pop32();
        if(val1 == val2)
          push8(TRUE);
        else
          push8(FALSE);
#ifdef debugF
        printf("val1 = %x\n",val1);
        printf("val2 = %x\n",val2);
#endif
        break;
      }
      //GT
      case 0x09:
      {

        break;
      }
      //GTE
      case 0x0A:
      {

        break;
      }
      //LT
      case 0x0B:
      {

        break;
      }
      //LTE
      case 0x0C:
      {

        break;
      }
      case 0x0D:
      {
        n3 = pop8();
        if(n3 == TRUE)
        {
          printf("END pop result = TRUE\n");
          return 1;
        }
        if(n3 == FALSE)
        {
          printf("END pop result = FALSE\n");
          return 0;
        }
        break;
      }
    }
    e++;
  }

//---------------------------------------

        for(int i =0; i < 0x20; i++)
        {
          printf("%x ",stack8[i]);
          if(((i+1)%16) ==0 )
                printf("\n");
        }



         return 0;
        }



