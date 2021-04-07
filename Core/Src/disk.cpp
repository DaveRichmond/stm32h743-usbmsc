/*
 * disk.cpp
 *
 *  Created on: Apr 7, 2021
 *      Author: msn
 */

#include "disk.h"
#include <stdio.h>
#include "fatfs.h"

bool usbd_disk_init(){
	printf("USBD Disk Init\n");
	if (BSP_SD_IsDetected() != SD_PRESENT){
		printf("USBD Disk Missing!\n");
		return 0;
	}

	if(f_mount(&SDFatFS, (const TCHAR *)&SDPath, 0) != FR_OK){
		printf("USBD Disk Mount Failed!\n");
		return 0;
	}

	printf("USBD Disk Mounted\n");

	return 0;
}
bool usbd_disk_open(int disk){
	return 0;
}

bool usbd_disk_ok(int disk){
	return 0;
}

bool usbd_disk_write(int f, int offset, int len, char *buffer){
	return 0;
}
bool usbd_disk_read(int f, int offset, int len, char *buffer){
	return 0;
}


