/* arch/arm/mach-msm/lge/lge_qc_lcdc_luts.c
 * Copyright (c) 2011, LG Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/module.h>

/* pixel order : RBG */
const unsigned int p_lg_qc_lcdc_lut[256] = {
#if defined(CONFIG_MACH_MSM8960_D1LV) && defined(CONFIG_LGE_BACKLIGHT_CABC) \
	|| defined(CONFIG_MACH_MSM8960_D1L_KR) && defined(CONFIG_LGE_BACKLIGHT_CABC)
	0x00000000, 0x00010101, 0x00010101, 0x00020202,
	0x00030303, 0x00040404, 0x00040404, 0x00050505,
	0x00060606, 0x00060606, 0x00070707, 0x00080808,
	0x00090908, 0x00090909, 0x000a0a0a, 0x000b0b0b,
	0x000c0c0b, 0x000c0c0c, 0x000d0d0d, 0x000e0e0e,
	0x000f0f0e, 0x000f0f0f, 0x00101010, 0x00111110,
	0x00121211, 0x00121212, 0x00131313, 0x00141413,
	0x00151514, 0x00151515, 0x00161616, 0x00171716,
	0x00181817, 0x00181818, 0x00191919, 0x001a1a1a,
	0x001b1b1a, 0x001c1c1b, 0x001c1c1c, 0x001d1d1d,
	0x001e1e1e, 0x001f1f1e, 0x0020201f, 0x00212120,
	0x00212121, 0x00222222, 0x00232322, 0x00242423,
	0x00252524, 0x00262625, 0x00272726, 0x00272727,
	0x00282828, 0x00292928, 0x002a2a29, 0x002b2b2a,
	0x002c2c2b, 0x002d2d2c, 0x002e2e2d, 0x002f2f2e,
	0x0030302f, 0x00313130, 0x00313130, 0x00323231,
	0x00333332, 0x00343433, 0x00353534, 0x00363635,
	0x00373736, 0x00383837, 0x00393938, 0x003a3a39,
	0x003b3b3a, 0x003c3c3b, 0x003d3d3c, 0x003e3e3d,
	0x003f3f3e, 0x0040403f, 0x00414140, 0x00424241,
	0x00434342, 0x00444443, 0x00454544, 0x00464645,
	0x00484846, 0x00494947, 0x004a4a48, 0x004b4b49,
	0x004c4c4a, 0x004d4d4b, 0x004e4e4c, 0x004f4f4e,
	0x0050504f, 0x00515150, 0x00525251, 0x00545452,
	0x00555553, 0x00565654, 0x00575755, 0x00585856,
	0x00595958, 0x005a5a59, 0x005c5c5a, 0x005d5d5b,
	0x005e5e5c, 0x005f5f5d, 0x0060605e, 0x0061615f,
	0x00636361, 0x00646462, 0x00656563, 0x00666664,
	0x00676765, 0x00686866, 0x006a6a68, 0x006b6b69,
	0x006c6c6a, 0x006d6d6b, 0x006e6e6c, 0x0070706d,
	0x0071716f, 0x00727270, 0x00737371, 0x00757572,
	0x00767673, 0x00777775, 0x00787876, 0x00797977,
	0x007a7a78, 0x007c7c7a, 0x007e7e7b, 0x007f7f7d,
	0x0081817f, 0x00838380, 0x00848482, 0x00868683,
	0x00888885, 0x00898987, 0x008b8b88, 0x008d8d8a,
	0x008e8e8c, 0x0090908d, 0x0092928f, 0x00939390,
	0x00959592, 0x00969693, 0x00979794, 0x00989895,
	0x009a9a97, 0x009b9b98, 0x009c9c99, 0x009d9d9a,
	0x009e9e9b, 0x00a0a09d, 0x00a1a19e, 0x00a2a29f,
	0x00a3a3a0, 0x00a4a4a1, 0x00a5a5a2, 0x00a6a6a3,
	0x00a8a8a4, 0x00a9a9a5, 0x00aaaaa6, 0x00ababa7,
	0x00acaca8, 0x00adadaa, 0x00aeaeab, 0x00afafac,
	0x00b0b0ad, 0x00b1b1ae, 0x00b2b2af, 0x00b3b3b0,
	0x00b4b4b1, 0x00b5b5b2, 0x00b6b6b3, 0x00b7b7b4,
	0x00b8b8b5, 0x00b9b9b6, 0x00babab7, 0x00bbbbb8,
	0x00bcbcb9, 0x00bdbdba, 0x00bebebb, 0x00bfbfbc,
	0x00c0c0bd, 0x00c1c1be, 0x00c2c2bf, 0x00c3c3c0,
	0x00c4c4c0, 0x00c5c5c1, 0x00c6c6c2, 0x00c7c7c3,
	0x00c8c8c4, 0x00c9c9c5, 0x00cacac6, 0x00cacac6,
	0x00cbcbc7, 0x00ccccc8, 0x00ccccc8, 0x00cdcdc9,
	0x00cececa, 0x00cfcfcb, 0x00cfcfcb, 0x00d0d0cc,
	0x00d1d1cd, 0x00d2d2ce, 0x00d3d3cf, 0x00d4d4d0,
	0x00d5d5d1, 0x00d6d6d2, 0x00d7d7d2, 0x00d7d7d3,
	0x00d8d8d4, 0x00d9d9d5, 0x00dadad6, 0x00dbdbd7,
	0x00dcdcd8, 0x00ddddd9, 0x00dededa, 0x00dfdfdb,
	0x00e1e1dc, 0x00e2e2dd, 0x00e3e3de, 0x00e4e4e0,
	0x00e5e5e0, 0x00e6e6e1, 0x00e7e7e2, 0x00e7e7e3,
	0x00e8e8e4, 0x00e9e9e5, 0x00eaeae5, 0x00ebebe6,
	0x00ecece7, 0x00edede8, 0x00eeeee9, 0x00efefea,
	0x00f0f0eb, 0x00f1f1ec, 0x00f2f2ed, 0x00f3f3ee,
	0x00f4f4ef, 0x00f5f5f0, 0x00f6f6f1, 0x00f7f7f2,
	0x00f8f8f3, 0x00f9f9f4, 0x00fafaf5, 0x00fbfbf6,
	0x00fcfcf7, 0x00fdfdf8, 0x00fefef9, 0x00fffffb,
	0x00fffffc, 0x00fffffd, 0x00fffffe, 0x00ffffff
#elif defined (CONFIG_MACH_MSM8960_D1LSK) \
	|| defined(CONFIG_MACH_MSM8960_D1LKT) \
	|| defined(CONFIG_MACH_MSM8960_D1LU) \
	|| defined(CONFIG_MACH_MSM8960_D1LV) 
	0x00000000, 0x00010101, 0x00020202, 0x00020202,
	0x00030303, 0x00040404, 0x00050505, 0x00050606,
	0x00060706, 0x00070707, 0x00080808, 0x00090909,
	0x00090a0a, 0x000a0b0a, 0x000b0b0b, 0x000c0c0c,
	0x000c0d0d, 0x000d0e0e, 0x000e0f0e, 0x000f100f,
	0x00101010, 0x00101111, 0x00111212, 0x00121313,
	0x00131413, 0x00141514, 0x00141515, 0x00151616,
	0x00161717, 0x00171817, 0x00181918, 0x00181a19,
	0x00191b1a, 0x001a1b1b, 0x001b1c1c, 0x001c1d1d,
	0x001c1e1d, 0x001d1f1e, 0x001e201f, 0x001f2120,
	0x00202121, 0x00212222, 0x00212323, 0x00222423,
	0x00232524, 0x00242625, 0x00252726, 0x00262827,
	0x00272928, 0x00272929, 0x00282a2a, 0x00292b2a,
	0x002a2c2b, 0x002b2d2c, 0x002c2e2d, 0x002d2f2e,
	0x002e302f, 0x002e3130, 0x002f3231, 0x00303332,
	0x00313433, 0x00323534, 0x00333634, 0x00343635,
	0x00353736, 0x00363837, 0x00373938, 0x00373a39,
	0x00383b3a, 0x00393c3b, 0x003a3d3c, 0x003b3e3d,
	0x003c3f3e, 0x003d403f, 0x003e4140, 0x003f4241,
	0x00404342, 0x00414443, 0x00424544, 0x00434645,
	0x00444746, 0x00454847, 0x00464948, 0x00474a49,
	0x00484b4a, 0x00494c4b, 0x004a4d4c, 0x004b4e4d,
	0x004b4f4e, 0x004c514f, 0x004d5250, 0x004e5351,
	0x004f5452, 0x00505553, 0x00515654, 0x00525755,
	0x00545856, 0x00555957, 0x00565a58, 0x00575b59,
	0x00585c5a, 0x00595d5b, 0x005a5e5c, 0x005b5f5e,
	0x005c615f, 0x005d6260, 0x005e6361, 0x005f6462,
	0x00606563, 0x00616664, 0x00626765, 0x00636866,
	0x00646967, 0x00656a68, 0x00666b69, 0x00676d6a,
	0x00686e6c, 0x00696f6d, 0x006a706e, 0x006b716f,
	0x006c7270, 0x006e7371, 0x006f7472, 0x00707673,
	0x00717774, 0x00727875, 0x00737976, 0x00747a78,
	0x00757b79, 0x00767c7a, 0x00777d7b, 0x00787f7c,
	0x007a807d, 0x007b817f, 0x007c8280, 0x007d8481,
	0x007e8582, 0x00808684, 0x00818785, 0x00828986,
	0x00838a87, 0x00848b88, 0x00858c8a, 0x00878e8b,
	0x00888f8c, 0x0089908d, 0x008a918e, 0x008b9290,
	0x008c9491, 0x008d9592, 0x008f9693, 0x00909794,
	0x00919895, 0x00929a97, 0x00939b98, 0x00949c99,
	0x00959d9a, 0x00969e9b, 0x00979f9c, 0x0099a19d,
	0x009aa29e, 0x009ba3a0, 0x009ca4a1, 0x009da5a2,
	0x009ea6a3, 0x009fa7a4, 0x00a0a8a5, 0x00a1a9a6,
	0x00a2aaa7, 0x00a3aca8, 0x00a4ada9, 0x00a5aeaa,
	0x00a6afab, 0x00a7b0ac, 0x00a8b1ad, 0x00a9b2ae,
	0x00aab3af, 0x00abb4b0, 0x00acb5b1, 0x00adb6b2,
	0x00aeb7b3, 0x00afb8b4, 0x00b0b9b5, 0x00b0bab6,
	0x00b1bbb7, 0x00b2bcb8, 0x00b3bdb9, 0x00b4beba,
	0x00b5bfbb, 0x00b6c0bc, 0x00b7c1bd, 0x00b8c1be,
	0x00b9c2bf, 0x00bac4c0, 0x00bbc5c1, 0x00bcc6c2,
	0x00bdc7c3, 0x00bec8c4, 0x00bfc9c5, 0x00c0cac6,
	0x00c1cbc7, 0x00c2ccc8, 0x00c3cdc9, 0x00c3ceca,
	0x00c4cfcb, 0x00c5d0cc, 0x00c6d1cd, 0x00c7d2ce,
	0x00c8d3cf, 0x00c9d4d0, 0x00cad5d0, 0x00cbd6d1,
	0x00ccd7d2, 0x00cdd8d3, 0x00ced9d4, 0x00cfdad5,
	0x00d0dbd6, 0x00d1dcd7, 0x00d2ddd8, 0x00d2ded9,
	0x00d3deda, 0x00d4dfdb, 0x00d5e0dc, 0x00d6e1dd,
	0x00d7e2de, 0x00d8e3df, 0x00d9e4e0, 0x00dae5e1,
	0x00dbe6e1, 0x00dbe7e2, 0x00dce8e3, 0x00dde9e4,
	0x00deeae5, 0x00dfebe6, 0x00e0ece7, 0x00e1ede8,
	0x00e2eee9, 0x00e3eeea, 0x00e3efeb, 0x00e4f0ec,
	0x00e5f1ec, 0x00e6f2ed, 0x00e7f3ee, 0x00e8f4ef,
	0x00e9f5f0, 0x00eaf6f1, 0x00eaf7f2, 0x00ebf8f3,
	0x00ecf9f4, 0x00edfaf5, 0x00eefaf5, 0x00effbf6,
	0x00f0fcf7, 0x00f1fdf8, 0x00f1fef9, 0x00f2fffa
#elif defined (CONFIG_FB_MSM_MIPI_HITACHI_DX11D_VIDEO_HD_PT_PANEL)
	0x00000000, 0x00010101, 0x00020202, 0x00020202,
	0x00030303, 0x00040404, 0x00050505, 0x00050505,
	0x00060606, 0x00070707, 0x00080808, 0x00080808,
	0x00090909, 0x000a0a0a, 0x000b0b0b, 0x000b0b0b,
	0x000c0c0c, 0x000d0d0d, 0x000e0e0e, 0x000e0e0e,
	0x000f0f0f, 0x00101010, 0x00111111, 0x00121212,
	0x00121212, 0x00131313, 0x00141414, 0x00151515,
	0x00161616, 0x00161616, 0x00171717, 0x00181818,
	0x00191919, 0x001a1a1a, 0x001b1b1b, 0x001b1b1b,
	0x001c1c1c, 0x001d1d1d, 0x001e1e1e, 0x001f1f1f,
	0x00202020, 0x00212121, 0x00212121, 0x00222222,
	0x00232323, 0x00242424, 0x00252525, 0x00262626,
	0x00272727, 0x00282828, 0x00292929, 0x00292929,
	0x002a2a2a, 0x002b2b2b, 0x002c2c2c, 0x002d2d2d,
	0x002e2e2e, 0x002f2f2f, 0x00303030, 0x00313131,
	0x00323232, 0x00333333, 0x00343434, 0x00353535,
	0x00363636, 0x00373737, 0x00383838, 0x00393939,
	0x003a3a3a, 0x003b3b3b, 0x003c3c3c, 0x003d3d3d,
	0x003e3e3e, 0x003f3f3f, 0x00404040, 0x00414141,
	0x00424242, 0x00444444, 0x00454545, 0x00464646,
	0x00474747, 0x00484848, 0x00494949, 0x004a4a4a,
	0x004b4b4b, 0x004c4c4c, 0x004e4e4e, 0x004f4f4f,
	0x00505050, 0x00515151, 0x00525252, 0x00535353,
	0x00545454, 0x00565656, 0x00575757, 0x00585858,
	0x00595959, 0x005a5a5a, 0x005b5b5b, 0x005d5d5d,
	0x005e5e5e, 0x005f5f5f, 0x00606060, 0x00616161,
	0x00636363, 0x00646464, 0x00656565, 0x00666666,
	0x00676767, 0x00696969, 0x006a6a6a, 0x006b6b6b,
	0x006c6c6c, 0x006e6e6e, 0x006f6f6f, 0x00707070,
	0x00717171, 0x00737373, 0x00747474, 0x00757575,
	0x00767676, 0x00787878, 0x00797979, 0x007a7a7a,
	0x007b7b7b, 0x007d7d7d, 0x007e7e7e, 0x007f7f7f,
	0x00808080, 0x00818181, 0x00828282, 0x00848484,
	0x00858585, 0x00868686, 0x00878787, 0x00898989,
	0x008a8a8a, 0x008b8b8b, 0x008c8c8c, 0x008e8e8e,
	0x008f8f8f, 0x00909090, 0x00919191, 0x00939393,
	0x00949494, 0x00959595, 0x00969696, 0x00989898,
	0x00999999, 0x009a9a9a, 0x009b9b9b, 0x009c9c9c,
	0x009e9e9e, 0x009f9f9f, 0x00a0a0a0, 0x00a1a1a1,
	0x00a2a2a2, 0x00a4a4a4, 0x00a5a5a5, 0x00a6a6a6,
	0x00a7a7a7, 0x00a8a8a8, 0x00a9a9a9, 0x00ababab,
	0x00acacac, 0x00adadad, 0x00aeaeae, 0x00afafaf,
	0x00b0b0b0, 0x00b1b1b1, 0x00b3b3b3, 0x00b4b4b4,
	0x00b5b5b5, 0x00b6b6b6, 0x00b7b7b7, 0x00b8b8b8,
	0x00b9b9b9, 0x00bababa, 0x00bbbbbb, 0x00bdbdbd,
	0x00bebebe, 0x00bfbfbf, 0x00c0c0c0, 0x00c1c1c1,
	0x00c2c2c2, 0x00c3c3c3, 0x00c4c4c4, 0x00c5c5c5,
	0x00c6c6c6, 0x00c7c7c7, 0x00c8c8c8, 0x00c9c9c9,
	0x00cacaca, 0x00cbcbcb, 0x00cccccc, 0x00cdcdcd,
	0x00cecece, 0x00cfcfcf, 0x00d0d0d0, 0x00d1d1d1,
	0x00d2d2d2, 0x00d3d3d3, 0x00d4d4d4, 0x00d5d5d5,
	0x00d6d6d6, 0x00d6d6d6, 0x00d7d7d7, 0x00d8d8d8,
	0x00d9d9d9, 0x00dadada, 0x00dbdbdb, 0x00dcdcdc,
	0x00dddddd, 0x00dedede, 0x00dedede, 0x00dfdfdf,
	0x00e0e0e0, 0x00e1e1e1, 0x00e2e2e2, 0x00e3e3e3,
	0x00e4e4e4, 0x00e4e4e4, 0x00e5e5e5, 0x00e6e6e6,
	0x00e7e7e7, 0x00e8e8e8, 0x00e9e9e9, 0x00e9e9e9,
	0x00eaeaea, 0x00ebebeb, 0x00ececec, 0x00ededed,
	0x00ededed, 0x00eeeeee, 0x00efefef, 0x00f0f0f0,
	0x00f1f1f1, 0x00f1f1f1, 0x00f2f2f2, 0x00f3f3f3,
	0x00f4f4f4, 0x00f4f4f4, 0x00f5f5f5, 0x00f6f6f6,
	0x00f7f7f7, 0x00f7f7f7, 0x00f8f8f8, 0x00f9f9f9,
	0x00fafafa, 0x00fafafa, 0x00fbfbfb, 0x00fcfcfc,
	0x00fdfdfd, 0x00fdfdfd, 0x00fefefe, 0x00ffffff
#elif defined (CONFIG_FB_MSM_MIPI_LGD_VIDEO_QHD_PT_PANEL)
	0x00000000, 0x00010101, 0x00010101, 0x00020202,
	0x00020202, 0x00030303, 0x00040404, 0x00040404,
	0x00050505, 0x00060606, 0x00060606, 0x00070707,
	0x00080808, 0x00080808, 0x00090909, 0x000a0a0a,
	0x000a0a0a, 0x000b0b0b, 0x000c0c0c, 0x000d0d0d,
	0x000d0d0d, 0x000e0e0e, 0x000f0f0f, 0x00101010,
	0x00111111, 0x00111111, 0x00121212, 0x00131313,
	0x00141414, 0x00151515, 0x00161616, 0x00171717,
	0x00181818, 0x00191919, 0x001a1a1a, 0x001b1b1b,
	0x001c1c1c, 0x001d1d1d, 0x001e1e1e, 0x001f1f1f,
	0x00202020, 0x00212121, 0x00222222, 0x00242424,
	0x00252525, 0x00262626, 0x00272727, 0x00282828,
	0x002a2a2a, 0x002b2b2b, 0x002c2c2c, 0x002d2d2d,
	0x002f2f2f, 0x00303030, 0x00313131, 0x00323232,
	0x00343434, 0x00353535, 0x00363636, 0x00383838,
	0x00393939, 0x003a3a3a, 0x003c3c3c, 0x003d3d3d,
	0x003e3e3e, 0x003f3f3f, 0x00404040, 0x00404040,
	0x00414141, 0x00424242, 0x00434343, 0x00444444,
	0x00454545, 0x00464646, 0x00464646, 0x00474747,
	0x00484848, 0x00494949, 0x004a4a4a, 0x004b4b4b,
	0x004c4c4c, 0x004d4d4d, 0x004e4e4e, 0x004f4f4f,
	0x004f4f4f, 0x00505050, 0x00515151, 0x00525252,
	0x00535353, 0x00545454, 0x00555555, 0x00565656,
	0x00575757, 0x00585858, 0x00595959, 0x005a5a5a,
	0x005c5c5c, 0x005d5d5d, 0x005e5e5e, 0x005f5f5f,
	0x00606060, 0x00616161, 0x00626262, 0x00636363,
	0x00646464, 0x00656565, 0x00666666, 0x00686868,
	0x00696969, 0x006a6a6a, 0x006b6b6b, 0x006c6c6c,
	0x006d6d6d, 0x006e6e6e, 0x006f6f6f, 0x00707070,
	0x00717171, 0x00727272, 0x00737373, 0x00747474,
	0x00757575, 0x00767676, 0x00777777, 0x00787878,
	0x00797979, 0x007a7a7a, 0x007b7b7b, 0x007c7c7c,
	0x007d7d7d, 0x007e7e7e, 0x007f7f7f, 0x00808080,
	0x00818181, 0x00828282, 0x00838383, 0x00848484,
	0x00858585, 0x00868686, 0x00878787, 0x00888888,
	0x00898989, 0x008a8a8a, 0x008b8b8b, 0x008c8c8c,
	0x008d8d8d, 0x008e8e8e, 0x008f8f8f, 0x00909090,
	0x00919191, 0x00929292, 0x00939393, 0x00949494,
	0x00959595, 0x00969696, 0x00979797, 0x00989898,
	0x00999999, 0x009a9a9a, 0x009b9b9b, 0x009c9c9c,
	0x009d9d9d, 0x009e9e9e, 0x009f9f9f, 0x00a0a0a0,
	0x00a1a1a1, 0x00a2a2a2, 0x00a3a3a3, 0x00a4a4a4,
	0x00a5a5a5, 0x00a6a6a6, 0x00a7a7a7, 0x00a8a8a8,
	0x00a9a9a9, 0x00aaaaaa, 0x00ababab, 0x00acacac,
	0x00aeaeae, 0x00afafaf, 0x00b0b0b0, 0x00b1b1b1,
	0x00b2b2b2, 0x00b3b3b3, 0x00b4b4b4, 0x00b5b5b5,
	0x00b6b6b6, 0x00b7b7b7, 0x00b8b8b8, 0x00b9b9b9,
	0x00bababa, 0x00bbbbbb, 0x00bcbcbc, 0x00bdbdbd,
	0x00bebebe, 0x00bfbfbf, 0x00c0c0c0, 0x00c1c1c1,
	0x00c2c2c2, 0x00c3c3c3, 0x00c4c4c4, 0x00c5c5c5,
	0x00c6c6c6, 0x00c7c7c7, 0x00c8c8c8, 0x00c9c9c9,
	0x00cacaca, 0x00cbcbcb, 0x00cccccc, 0x00cdcdcd,
	0x00cecece, 0x00cfcfcf, 0x00d0d0d0, 0x00d1d1d1,
	0x00d2d2d2, 0x00d4d4d4, 0x00d5d5d5, 0x00d6d6d6,
	0x00d7d7d7, 0x00d8d8d8, 0x00d9d9d9, 0x00dadada,
	0x00dbdbdb, 0x00dcdcdc, 0x00dddddd, 0x00dedede,
	0x00dfdfdf, 0x00e0e0e0, 0x00e1e1e1, 0x00e2e2e2,
	0x00e3e3e3, 0x00e4e4e4, 0x00e5e5e5, 0x00e6e6e6,
	0x00e7e7e7, 0x00e8e8e8, 0x00e9e9e9, 0x00eaeaea,
	0x00ebebeb, 0x00ececec, 0x00ededed, 0x00eeeeee,
	0x00efefef, 0x00f0f0f0, 0x00f2f2f2, 0x00f3f3f3,
	0x00f4f4f4, 0x00f5f5f5, 0x00f6f6f6, 0x00f7f7f7,
	0x00f8f8f8, 0x00f9f9f9, 0x00fafafa, 0x00fbfbfb,
	0x00fcfcfc, 0x00fdfdfd, 0x00fefefe, 0x00ffffff
#elif defined(CONFIG_FB_MSM_MIPI_R61529_VIDEO_HVGA_PT)
	0x00000000, 0x00010101, 0x00020202, 0x00030303,
	0x00040404, 0x00050505, 0x00060606, 0x00070707,
	0x00080808, 0x00090909, 0x000a0a0a, 0x000b0b0b,
	0x000c0c0c, 0x000d0d0d, 0x000e0e0e, 0x000f0f0f,
	0x00101010, 0x00111111, 0x00121212, 0x00121312,
	0x00131413, 0x00141614, 0x00151715, 0x00161816,
	0x00171917, 0x00181a18, 0x00191b19, 0x001a1c1a,
	0x001b1d1b, 0x001c1e1c, 0x001d1f1d, 0x001e201e,
	0x001f211f, 0x00202220, 0x00212321, 0x00222422,
	0x00232523, 0x00242624, 0x00252725, 0x00262826,
	0x00272927, 0x00282a28, 0x00292b29, 0x002a2c2a,
	0x002b2d2b, 0x002c2e2c, 0x002d2f2d, 0x002e302e,
	0x002f312f, 0x00303230, 0x00313331, 0x00323432,
	0x00333533, 0x00343634, 0x00343734, 0x00353835,
	0x00363936, 0x00373a37, 0x00383b38, 0x00393c39,
	0x003a3d3a, 0x003b3e3b, 0x003c3f3c, 0x003d403d,
	0x003e413e, 0x003f423f, 0x00404340, 0x00414441,
	0x00424542, 0x00434743, 0x00444844, 0x00454945,
	0x00464a46, 0x00474b47, 0x00484c48, 0x00494d49,
	0x004a4e4a, 0x004b4f4b, 0x004c504c, 0x004d514d,
	0x004e524e, 0x004f534f, 0x00505450, 0x00505550,
	0x00515651, 0x00525752, 0x00535853, 0x00545954,
	0x00555a55, 0x00565b56, 0x00575c57, 0x00585d58,
	0x00595e59, 0x005a5f5a, 0x005b605b, 0x005c615c,
	0x005d625d, 0x005e635e, 0x005f645f, 0x00606560,
	0x00616661, 0x00626762, 0x00636863, 0x00646964,
	0x00656a65, 0x00666b66, 0x00676c67, 0x00676d67,
	0x00686e68, 0x00696f69, 0x006a706a, 0x006b716b,
	0x006c726c, 0x006d736d, 0x006e746e, 0x006f756f,
	0x00707670, 0x00717771, 0x00727872, 0x00737973,
	0x00747a74, 0x00757b75, 0x00767c76, 0x00777d77,
	0x00787e78, 0x00797f79, 0x007a807a, 0x007b817b,
	0x007b827b, 0x007c837c, 0x007d847d, 0x007e857e,
	0x007f867f, 0x00808780, 0x00818881, 0x00828982,
	0x00838a83, 0x00848b84, 0x00858c85, 0x00868d86,
	0x00878e87, 0x00888f88, 0x00899089, 0x008a918a,
	0x008b928b, 0x008c938c, 0x008d948d, 0x008d958d,
	0x008e968e, 0x008f978f, 0x00909890, 0x00919991,
	0x00929a92, 0x00939b93, 0x00949c94, 0x00959d95,
	0x00969e96, 0x00979f97, 0x0098a098, 0x0099a199,
	0x009aa29a, 0x009ba39b, 0x009ca49c, 0x009da59d,
	0x009ea69e, 0x009ea79e, 0x009fa89f, 0x00a0a9a0,
	0x00a1aaa1, 0x00a2aba2, 0x00a3aca3, 0x00a4ada4,
	0x00a5aea5, 0x00a6afa6, 0x00a7b0a7, 0x00a8b1a8,
	0x00a9b2a9, 0x00aab3aa, 0x00abb4ab, 0x00acb5ac,
	0x00adb6ad, 0x00adb7ad, 0x00aeb8ae, 0x00afb9af,
	0x00b0bab0, 0x00b1bbb1, 0x00b2bcb2, 0x00b3bcb3,
	0x00b4bdb4, 0x00b5beb5, 0x00b6bfb6, 0x00b7c0b7,
	0x00b8c1b8, 0x00b9c2b9, 0x00bac3ba, 0x00bbc4bb,
	0x00bbc5bb, 0x00bcc6bc, 0x00bdc7bd, 0x00bec8be,
	0x00bfc9bf, 0x00c0cac0, 0x00c1cbc1, 0x00c2ccc2,
	0x00c3cdc3, 0x00c4cec4, 0x00c5cfc5, 0x00c6d0c6,
	0x00c7d1c7, 0x00c8d2c8, 0x00c9d3c9, 0x00c9d4c9,
	0x00cad5ca, 0x00cbd6cb, 0x00ccd7cc, 0x00cdd8cd,
	0x00ced9ce, 0x00cfdacf, 0x00d0dbd0, 0x00d1dcd1,
	0x00d2ddd2, 0x00d3ded3, 0x00d4dfd4, 0x00d5e0d5,
	0x00d6e1d6, 0x00d6e2d6, 0x00d7e3d7, 0x00d8e4d8,
	0x00d9e5d9, 0x00dae6da, 0x00dbe7db, 0x00dce8dc,
	0x00dde9dd, 0x00deeade, 0x00dfebdf, 0x00e0ebe0,
	0x00e1ece1, 0x00e2ede2, 0x00e2eee2, 0x00e3efe3,
	0x00e4f0e4, 0x00e5f1e5, 0x00e6f2e6, 0x00e7f3e7,
	0x00e8f4e8, 0x00e9f5e9, 0x00eaf6ea, 0x00ebf7eb,
	0x00ecf8ec, 0x00edf9ed, 0x00eefaee, 0x00effbef,
	0x00effcef, 0x00f0fdf0, 0x00f1fef1, 0x00f2fff2
#else
	/* default linear qlut */
	0x00000000, 0x00010101, 0x00020202, 0x00030303,
	0x00040404, 0x00050505, 0x00060606, 0x00070707,
	0x00080808, 0x00090909, 0x000a0a0a, 0x000b0b0b,
	0x000c0c0c, 0x000d0d0d, 0x000e0e0e, 0x000f0f0f,
	0x00101010, 0x00111111, 0x00121212, 0x00131313,
	0x00141414, 0x00151515, 0x00161616, 0x00171717,
	0x00181818, 0x00191919, 0x001a1a1a, 0x001b1b1b,
	0x001c1c1c, 0x001d1d1d, 0x001e1e1e, 0x001f1f1f,
	0x00202020, 0x00212121, 0x00222222, 0x00232323,
	0x00242424, 0x00252525, 0x00262626, 0x00272727,
	0x00282828, 0x00292929, 0x002a2a2a, 0x002b2b2b,
	0x002c2c2c, 0x002d2d2d, 0x002e2e2e, 0x002f2f2f,
	0x00303030, 0x00313131, 0x00323232, 0x00333333,
	0x00343434, 0x00353535, 0x00363636, 0x00373737,
	0x00383838, 0x00393939, 0x003a3a3a, 0x003b3b3b,
	0x003c3c3c, 0x003d3d3d, 0x003e3e3e, 0x003f3f3f,
	0x00404040, 0x00414141, 0x00424242, 0x00434343,
	0x00444444, 0x00454545, 0x00464646, 0x00474747,
	0x00484848, 0x00494949, 0x004a4a4a, 0x004b4b4b,
	0x004c4c4c, 0x004d4d4d, 0x004e4e4e, 0x004f4f4f,
	0x00505050, 0x00515151, 0x00525252, 0x00535353,
	0x00545454, 0x00555555, 0x00565656, 0x00575757,
	0x00585858, 0x00595959, 0x005a5a5a, 0x005b5b5b,
	0x005c5c5c, 0x005d5d5d, 0x005e5e5e, 0x005f5f5f,
	0x00606060, 0x00616161, 0x00626262, 0x00636363,
	0x00646464, 0x00656565, 0x00666666, 0x00676767,
	0x00686868, 0x00696969, 0x006a6a6a, 0x006b6b6b,
	0x006c6c6c, 0x006d6d6d, 0x006e6e6e, 0x006f6f6f,
	0x00707070, 0x00717171, 0x00727272, 0x00737373,
	0x00747474, 0x00757575, 0x00767676, 0x00777777,
	0x00787878, 0x00797979, 0x007a7a7a, 0x007b7b7b,
	0x007c7c7c, 0x007d7d7d, 0x007e7e7e, 0x007f7f7f,
	0x00808080, 0x00818181, 0x00828282, 0x00838383,
	0x00848484, 0x00858585, 0x00868686, 0x00878787,
	0x00888888, 0x00898989, 0x008a8a8a, 0x008b8b8b,
	0x008c8c8c, 0x008d8d8d, 0x008e8e8e, 0x008f8f8f,
	0x00909090, 0x00919191, 0x00929292, 0x00939393,
	0x00949494, 0x00959595, 0x00969696, 0x00979797,
	0x00989898, 0x00999999, 0x009a9a9a, 0x009b9b9b,
	0x009c9c9c, 0x009d9d9d, 0x009e9e9e, 0x009f9f9f,
	0x00a0a0a0, 0x00a1a1a1, 0x00a2a2a2, 0x00a3a3a3,
	0x00a4a4a4, 0x00a5a5a5, 0x00a6a6a6, 0x00a7a7a7,
	0x00a8a8a8, 0x00a9a9a9, 0x00aaaaaa, 0x00ababab,
	0x00acacac, 0x00adadad, 0x00aeaeae, 0x00afafaf,
	0x00b0b0b0, 0x00b1b1b1, 0x00b2b2b2, 0x00b3b3b3,
	0x00b4b4b4, 0x00b5b5b5, 0x00b6b6b6, 0x00b7b7b7,
	0x00b8b8b8, 0x00b9b9b9, 0x00bababa, 0x00bbbbbb,
	0x00bcbcbc, 0x00bdbdbd, 0x00bebebe, 0x00bfbfbf,
	0x00c0c0c0, 0x00c1c1c1, 0x00c2c2c2, 0x00c3c3c3,
	0x00c4c4c4, 0x00c5c5c5, 0x00c6c6c6, 0x00c7c7c7,
	0x00c8c8c8, 0x00c9c9c9, 0x00cacaca, 0x00cbcbcb,
	0x00cccccc, 0x00cdcdcd, 0x00cecece, 0x00cfcfcf,
	0x00d0d0d0, 0x00d1d1d1, 0x00d2d2d2, 0x00d3d3d3,
	0x00d4d4d4, 0x00d5d5d5, 0x00d6d6d6, 0x00d7d7d7,
	0x00d8d8d8, 0x00d9d9d9, 0x00dadada, 0x00dbdbdb,
	0x00dcdcdc, 0x00dddddd, 0x00dedede, 0x00dfdfdf,
	0x00e0e0e0, 0x00e1e1e1, 0x00e2e2e2, 0x00e3e3e3,
	0x00e4e4e4, 0x00e5e5e5, 0x00e6e6e6, 0x00e7e7e7,
	0x00e8e8e8, 0x00e9e9e9, 0x00eaeaea, 0x00ebebeb,
	0x00ececec, 0x00ededed, 0x00eeeeee, 0x00efefef,
	0x00f0f0f0, 0x00f1f1f1, 0x00f2f2f2, 0x00f3f3f3,
	0x00f4f4f4, 0x00f5f5f5, 0x00f6f6f6, 0x00f7f7f7,
	0x00f8f8f8, 0x00f9f9f9, 0x00fafafa, 0x00fbfbfb,
	0x00fcfcfc, 0x00fdfdfd, 0x00fefefe, 0x00ffffff
#endif
};
EXPORT_SYMBOL(p_lg_qc_lcdc_lut);
