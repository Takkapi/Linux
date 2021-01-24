#ifndef _CONFIG_H
#define _CONFIG_H

#define LINUS_HD

#if       defined(LINUS_HD)
#define   HIGHT_MEMORY (0x800000)
#elif     defined(LASU_HD)
#define   HIGHT_MEMORY (0x400000)
#else
#error "must define hd"
#endif

#if       (HIGHT_MEMORY>=0x600000)
#define   BUFFER_END 0x200000
#else
#defined  BUFFER_END 0xA000
#endif

#if       defined(LINUS_HD)
#define   ROOT_DEV 0x306
#elif     defined(LASU_HD)
#else
#error "must define hd"
#endif

#if       defined(LASU_HD)
#define   HD_TYPE { 7,35,915,65536,920,0 }
#elif     defined(LINUS_HD)
#define   HD_TYPE { 5,17,980,300,980,0 },{ 5,17,980,300,980,0 }
#else
#error "must define a hard_disk type"
#endif

#endif
