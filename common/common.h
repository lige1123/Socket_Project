/*************************************************************************
	> File Name: common.h
	> Author: suyelu
	> Mail: suyelu@haizeix.com
	> Created Time: Sat 28 Mar 2020 08:43:27 PM CST
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H
void make_nonblock_ioctl(int fd);
void make_block_ioctl(int fd);
void make_nonblock(int fd);
void make_block(int fd);
#endif
