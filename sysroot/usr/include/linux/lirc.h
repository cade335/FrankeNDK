/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_LIRC_H
#define _LINUX_LIRC_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define PULSE_BIT 0x01000000
#define PULSE_MASK 0x00FFFFFF
#define LIRC_MODE2_SPACE 0x00000000
#define LIRC_MODE2_PULSE 0x01000000
#define LIRC_MODE2_FREQUENCY 0x02000000
#define LIRC_MODE2_TIMEOUT 0x03000000
#define LIRC_VALUE_MASK 0x00FFFFFF
#define LIRC_MODE2_MASK 0xFF000000
#define LIRC_SPACE(val) (((val) & LIRC_VALUE_MASK) | LIRC_MODE2_SPACE)
#define LIRC_PULSE(val) (((val) & LIRC_VALUE_MASK) | LIRC_MODE2_PULSE)
#define LIRC_FREQUENCY(val) (((val) & LIRC_VALUE_MASK) | LIRC_MODE2_FREQUENCY)
#define LIRC_TIMEOUT(val) (((val) & LIRC_VALUE_MASK) | LIRC_MODE2_TIMEOUT)
#define LIRC_VALUE(val) ((val) & LIRC_VALUE_MASK)
#define LIRC_MODE2(val) ((val) & LIRC_MODE2_MASK)
#define LIRC_IS_SPACE(val) (LIRC_MODE2(val) == LIRC_MODE2_SPACE)
#define LIRC_IS_PULSE(val) (LIRC_MODE2(val) == LIRC_MODE2_PULSE)
#define LIRC_IS_FREQUENCY(val) (LIRC_MODE2(val) == LIRC_MODE2_FREQUENCY)
#define LIRC_IS_TIMEOUT(val) (LIRC_MODE2(val) == LIRC_MODE2_TIMEOUT)
#define lirc_t int
#define LIRC_MODE2SEND(x) (x)
#define LIRC_SEND2MODE(x) (x)
#define LIRC_MODE2REC(x) ((x) << 16)
#define LIRC_REC2MODE(x) ((x) >> 16)
#define LIRC_MODE_RAW 0x00000001
#define LIRC_MODE_PULSE 0x00000002
#define LIRC_MODE_MODE2 0x00000004
#define LIRC_MODE_LIRCCODE 0x00000010
#define LIRC_CAN_SEND_RAW LIRC_MODE2SEND(LIRC_MODE_RAW)
#define LIRC_CAN_SEND_PULSE LIRC_MODE2SEND(LIRC_MODE_PULSE)
#define LIRC_CAN_SEND_MODE2 LIRC_MODE2SEND(LIRC_MODE_MODE2)
#define LIRC_CAN_SEND_LIRCCODE LIRC_MODE2SEND(LIRC_MODE_LIRCCODE)
#define LIRC_CAN_SEND_MASK 0x0000003f
#define LIRC_CAN_SET_SEND_CARRIER 0x00000100
#define LIRC_CAN_SET_SEND_DUTY_CYCLE 0x00000200
#define LIRC_CAN_SET_TRANSMITTER_MASK 0x00000400
#define LIRC_CAN_REC_RAW LIRC_MODE2REC(LIRC_MODE_RAW)
#define LIRC_CAN_REC_PULSE LIRC_MODE2REC(LIRC_MODE_PULSE)
#define LIRC_CAN_REC_MODE2 LIRC_MODE2REC(LIRC_MODE_MODE2)
#define LIRC_CAN_REC_LIRCCODE LIRC_MODE2REC(LIRC_MODE_LIRCCODE)
#define LIRC_CAN_REC_MASK LIRC_MODE2REC(LIRC_CAN_SEND_MASK)
#define LIRC_CAN_SET_REC_CARRIER (LIRC_CAN_SET_SEND_CARRIER << 16)
#define LIRC_CAN_SET_REC_DUTY_CYCLE (LIRC_CAN_SET_SEND_DUTY_CYCLE << 16)
#define LIRC_CAN_SET_REC_DUTY_CYCLE_RANGE 0x40000000
#define LIRC_CAN_SET_REC_CARRIER_RANGE 0x80000000
#define LIRC_CAN_GET_REC_RESOLUTION 0x20000000
#define LIRC_CAN_SET_REC_TIMEOUT 0x10000000
#define LIRC_CAN_SET_REC_FILTER 0x08000000
#define LIRC_CAN_MEASURE_CARRIER 0x02000000
#define LIRC_CAN_USE_WIDEBAND_RECEIVER 0x04000000
#define LIRC_CAN_SEND(x) ((x) & LIRC_CAN_SEND_MASK)
#define LIRC_CAN_REC(x) ((x) & LIRC_CAN_REC_MASK)
#define LIRC_CAN_NOTIFY_DECODE 0x01000000
#define LIRC_GET_FEATURES _IOR('i', 0x00000000, __u32)
#define LIRC_GET_SEND_MODE _IOR('i', 0x00000001, __u32)
#define LIRC_GET_REC_MODE _IOR('i', 0x00000002, __u32)
#define LIRC_GET_REC_RESOLUTION _IOR('i', 0x00000007, __u32)
#define LIRC_GET_MIN_TIMEOUT _IOR('i', 0x00000008, __u32)
#define LIRC_GET_MAX_TIMEOUT _IOR('i', 0x00000009, __u32)
#define LIRC_GET_LENGTH _IOR('i', 0x0000000f, __u32)
#define LIRC_SET_SEND_MODE _IOW('i', 0x00000011, __u32)
#define LIRC_SET_REC_MODE _IOW('i', 0x00000012, __u32)
#define LIRC_SET_SEND_CARRIER _IOW('i', 0x00000013, __u32)
#define LIRC_SET_REC_CARRIER _IOW('i', 0x00000014, __u32)
#define LIRC_SET_SEND_DUTY_CYCLE _IOW('i', 0x00000015, __u32)
#define LIRC_SET_TRANSMITTER_MASK _IOW('i', 0x00000017, __u32)
#define LIRC_SET_REC_TIMEOUT _IOW('i', 0x00000018, __u32)
#define LIRC_SET_REC_TIMEOUT_REPORTS _IOW('i', 0x00000019, __u32)
#define LIRC_SET_MEASURE_CARRIER_MODE _IOW('i', 0x0000001d, __u32)
#define LIRC_SET_REC_CARRIER_RANGE _IOW('i', 0x0000001f, __u32)
#define LIRC_SET_WIDEBAND_RECEIVER _IOW('i', 0x00000023, __u32)
#endif