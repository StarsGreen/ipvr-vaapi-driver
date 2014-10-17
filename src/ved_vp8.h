/*
 * Copyright (c) 2011, 2014 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


/*
 * Authors:
 *    Li Zeng <li.zeng@intel.com>
 *    Mingruo Sun <mingruo.sun@intel.com>
 *    Yao Cheng <yao.cheng@intel.com>
 *
 */

#ifndef _VED_VP8_H_
#define _VED_VP8_H_

#include "ipvr_drv_video.h"
#include <va/va_dec_vp8.h>
#include "hwdefs/img_types.h"

extern struct format_vtable_s tng_VP8_vtable;

#define BLOCK_SIZE              64
#define SCAN_ORDER_BANDS        16

typedef IMG_UINT8   Probability;

extern const Probability b_mode_prob[10][10][9];

#endif /* _PNW_VP8_H_ */
