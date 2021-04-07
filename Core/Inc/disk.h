#ifndef _DISK_H
#define _DISK_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

extern bool usbd_disk_init();
extern bool usbd_disk_open(int f);
extern bool usbd_disk_ok(int f);
extern bool usbd_disk_write(int f, int offset, int len, char *buffer);
extern bool usbd_disk_read(int f, int offset, int len, char *buffer);

#ifdef __cplusplus
};
#endif

#endif
