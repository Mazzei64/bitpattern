#ifndef __BIT_PATTERN__
#define __BIT_PATTERN__

#define qword unsigned long int
#define dword unsigned int
#define word unsigned short
#define byte unsigned char

#define CAST_REAL_TO_QWORD(real_unit)   \
    *((qword*)&real_unit)
#define CAST_REAL_TO_DWORD(real_unit)   \
    *((dword*)&real_unit)
#define CAST_REAL_TO_WORD(real_unit)   \
    *((word*)&real_unit)
#define CAST_REAL_TO_BYTE(real_unit)   \
    *((byte*)&real_unit)

#define BYTE_TO_8_BIT_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY8(byte)      \
  (byte & 0x80 ? '1' : '0'),  \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

#define BYTE_TO_16_BIT_PATTERN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY16(word)  \
  (word & 0x8000 ? '1' : '0'), \
  (word & 0x4000 ? '1' : '0'), \
  (word & 0x2000 ? '1' : '0'), \
  (word & 0x1000 ? '1' : '0'), \
  (word & 0x800 ? '1' : '0'), \
  (word & 0x400 ? '1' : '0'), \
  (word & 0x200 ? '1' : '0'), \
  (word & 0x100 ? '1' : '0'), \
  (word & 0x80 ? '1' : '0'), \
  (word & 0x40 ? '1' : '0'), \
  (word & 0x20 ? '1' : '0'), \
  (word & 0x10 ? '1' : '0'), \
  (word & 0x08 ? '1' : '0'), \
  (word & 0x04 ? '1' : '0'), \
  (word & 0x02 ? '1' : '0'), \
  (word & 0x01 ? '1' : '0')   

#define BYTE_TO_32_BIT_PATTERN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY32(dword)  \
  (dword & 0x80000000 ? '1' : '0'), \
  (dword & 0x40000000 ? '1' : '0'), \
  (dword & 0x20000000 ? '1' : '0'), \
  (dword & 0x10000000 ? '1' : '0'), \
  (dword & 0x8000000 ? '1' : '0'), \
  (dword & 0x4000000 ? '1' : '0'), \
  (dword & 0x2000000 ? '1' : '0'), \
  (dword & 0x1000000 ? '1' : '0'), \
  (dword & 0x800000 ? '1' : '0'), \
  (dword & 0x400000 ? '1' : '0'), \
  (dword & 0x200000 ? '1' : '0'), \
  (dword & 0x100000 ? '1' : '0'), \
  (dword & 0x80000 ? '1' : '0'), \
  (dword & 0x40000 ? '1' : '0'), \
  (dword & 0x20000 ? '1' : '0'), \
  (dword & 0x10000 ? '1' : '0'), \
  (dword & 0x8000 ? '1' : '0'), \
  (dword & 0x4000 ? '1' : '0'), \
  (dword & 0x2000 ? '1' : '0'), \
  (dword & 0x1000 ? '1' : '0'), \
  (dword & 0x800 ? '1' : '0'), \
  (dword & 0x400 ? '1' : '0'), \
  (dword & 0x200 ? '1' : '0'), \
  (dword & 0x100 ? '1' : '0'), \
  (dword & 0x80 ? '1' : '0'), \
  (dword & 0x40 ? '1' : '0'), \
  (dword & 0x20 ? '1' : '0'), \
  (dword & 0x10 ? '1' : '0'), \
  (dword & 0x08 ? '1' : '0'), \
  (dword & 0x04 ? '1' : '0'), \
  (dword & 0x02 ? '1' : '0'), \
  (dword & 0x01 ? '1' : '0')         

#define BYTE_TO_64_BIT_PATTERN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY64(qword)  \
  (qword & 0x8000000000000000 ? '1' : '0'), \
  (qword & 0x4000000000000000 ? '1' : '0'), \
  (qword & 0x2000000000000000 ? '1' : '0'), \
  (qword & 0x1000000000000000 ? '1' : '0'), \
  (qword & 0x800000000000000 ? '1' : '0'), \
  (qword & 0x400000000000000 ? '1' : '0'), \
  (qword & 0x200000000000000 ? '1' : '0'), \
  (qword & 0x100000000000000 ? '1' : '0'), \
  \
  (qword & 0x80000000000000 ? '1' : '0'), \
  (qword & 0x40000000000000 ? '1' : '0'), \
  (qword & 0x20000000000000? '1' : '0'), \
  (qword & 0x10000000000000 ? '1' : '0'), \
  (qword & 0x8000000000000 ? '1' : '0'), \
  (qword & 0x4000000000000 ? '1' : '0'), \
  (qword & 0x2000000000000 ? '1' : '0'), \
  (qword & 0x1000000000000 ? '1' : '0'), \
  \
  (qword & 0x800000000000 ? '1' : '0'), \
  (qword & 0x400000000000 ? '1' : '0'), \
  (qword & 0x200000000000 ? '1' : '0'), \
  (qword & 0x100000000000 ? '1' : '0'), \
  (qword & 0x80000000000 ? '1' : '0'), \
  (qword & 0x40000000000 ? '1' : '0'), \
  (qword & 0x20000000000 ? '1' : '0'), \
  (qword & 0x10000000000 ? '1' : '0'), \
  \
  (qword & 0x8000000000 ? '1' : '0'), \
  (qword & 0x4000000000 ? '1' : '0'), \
  (qword & 0x2000000000 ? '1' : '0'), \
  (qword & 0x1000000000 ? '1' : '0'), \
  (qword & 0x800000000 ? '1' : '0'), \
  (qword & 0x400000000 ? '1' : '0'), \
  (qword & 0x200000000 ? '1' : '0'), \
  (qword & 0x100000000 ? '1' : '0'),  \
  \
  (qword & 0x80000000 ? '1' : '0'), \
  (qword & 0x40000000 ? '1' : '0'), \
  (qword & 0x20000000 ? '1' : '0'), \
  (qword & 0x10000000 ? '1' : '0'), \
  (qword & 0x8000000 ? '1' : '0'), \
  (qword & 0x4000000 ? '1' : '0'), \
  (qword & 0x2000000 ? '1' : '0'), \
  (qword & 0x1000000 ? '1' : '0'), \
  \
  (qword & 0x800000 ? '1' : '0'), \
  (qword & 0x400000 ? '1' : '0'), \
  (qword & 0x200000 ? '1' : '0'), \
  (qword & 0x100000 ? '1' : '0'), \
  (qword & 0x80000 ? '1' : '0'), \
  (qword & 0x40000 ? '1' : '0'), \
  (qword & 0x20000 ? '1' : '0'), \
  (qword & 0x10000 ? '1' : '0'), \
  \
  (qword & 0x8000 ? '1' : '0'), \
  (qword & 0x4000 ? '1' : '0'), \
  (qword & 0x2000 ? '1' : '0'), \
  (qword & 0x1000 ? '1' : '0'), \
  (qword & 0x800 ? '1' : '0'), \
  (qword & 0x400 ? '1' : '0'), \
  (qword & 0x200 ? '1' : '0'), \
  (qword & 0x100 ? '1' : '0'), \
  \
  (qword & 0x80 ? '1' : '0'), \
  (qword & 0x40 ? '1' : '0'), \
  (qword & 0x20 ? '1' : '0'), \
  (qword & 0x10 ? '1' : '0'), \
  (qword & 0x08 ? '1' : '0'), \
  (qword & 0x04 ? '1' : '0'), \
  (qword & 0x02 ? '1' : '0'), \
  (qword & 0x01 ? '1' : '0')
  
#endif