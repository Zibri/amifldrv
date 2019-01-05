extern struct file_operations amifldrv_fops;
#define CMD_ALLOC	0x4160
#define CMD_FREE	0x4161
#define CMD_LOCK_KB	0x4162
#define CMD_UNLOCK_KB	0x4163
#define CMD_OUTPORT_PORT	0x4164
#define CMD_OUTPORTBYTE_VALUE	0x4165
#define CMD_OUTPORT_INTRBUFPHYADDR	0x4166
#define CMD_OUTPORT_INTRBUFPHYADDR_ESI	0x4167
#define CMD_PORTWRITEBYTE    0x4168
#define CMD_SETWSMT_PHYADDR  0x4169
#pragma pack(1)
typedef struct tagAMIFLDRV_PORTWRITEBYTE
{
  unsigned short Port;
  unsigned char Value;
  unsigned long Edi;
  unsigned long Esi;
  unsigned long Ebp;
  unsigned long Ebx;
  unsigned long Edx;
  unsigned long Ecx;
  unsigned long Eax;
} AMIFLDRV_PORTWRITEBYTE;
#pragma pack()
typedef struct tagAMIFLDRV_ALLOC
{
  long size;
  unsigned long kvirtlen;
  void *kmallocptr;
  void *kvirtadd;
  void *kphysadd;
} AMIFLDRV_ALLOC;
