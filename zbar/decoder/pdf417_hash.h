/*------------------------------------------------------------------------
 *  Copyright 2008-2009 (c) Jeff Brown <spadix@users.sourceforge.net>
 *
 *  This file is part of the ZBar Bar Code Reader.
 *
 *  The ZBar Bar Code Reader is free software; you can redistribute it
 *  and/or modify it under the terms of the GNU Lesser Public License as
 *  published by the Free Software Foundation; either version 2.1 of
 *  the License, or (at your option) any later version.
 *
 *  The ZBar Bar Code Reader is distributed in the hope that it will be
 *  useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 *  of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser Public License
 *  along with the ZBar Bar Code Reader; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 *  Boston, MA  02110-1301  USA
 *
 *  http://sourceforge.net/projects/zbar
 *------------------------------------------------------------------------*/
#ifndef _PDF417_HASH_H_
#define _PDF417_HASH_H_

/* PDF417 bar to codeword decode table */

#define PDF417_HASH_MASK 0xfff

static const signed short pdf417_hash[PDF417_HASH_MASK + 1] = {
 0x170, 0xd8e, 0x02e, 0x000, 0xa21, 0xc99, 0x000, 0xf06,
 0xdaa, 0x7a1, 0xc5f, 0x7ff, 0xbcf, 0xac8, 0x000, 0xc51,
 0x49a, 0x5c7, 0x000, 0xef2, 0x000, 0x7dd, 0x9ee, 0xe32,
 0x1b7, 0x489, 0x3b7, 0xe70, 0x9c8, 0xe5e, 0xdf4, 0x599,
 0x4e0, 0x608, 0x639, 0xead, 0x0ac, 0x57c, 0x000, 0x20d,
 0x61b, 0x000, 0x7d1, 0x80f, 0x803, 0x000, 0x946, 0x093,
 0x79c, 0xf9c, 0xb34, 0x6d8, 0x4f1, 0x975, 0x886, 0x313,
 0xe8a, 0xf20, 0x3c9, 0xa92, 0xb90, 0xa1d, 0x091, 0x0ac,
 0xb50, 0x3af, 0x90a, 0x45a, 0x815, 0xf29, 0xb20, 0xb6d,
 0xc5c, 0x1cd, 0x1e2, 0x1bf, 0x963, 0x80b, 0xa7c, 0x9b7,
 0xb65, 0x6b7, 0x117, 0xc04, 0x000, 0x18e, 0x000, 0x77f,
 0xe0e, 0xf48, 0x370, 0x818, 0x379, 0x000, 0x090, 0xe77,
 0xd99, 0x8b8, 0xb95, 0x8a9, 0x94c, 0xc48, 0x679, 0x000,
 0x41a, 0x9ea, 0xb0e, 0x9c1, 0x1b4, 0x000, 0x630, 0x811,
 0x4b1, 0xc05, 0x98f, 0xa68, 0x485, 0x706, 0xfff, 0x0d9,
 0xddc, 0x000, 0x83f, 0x54e, 0x290, 0xfe7, 0x64f, 0xf36,
 0x000, 0x151, 0xb9b, 0x5cd, 0x961, 0x690,    -1, 0xa7a,
 0x328, 0x707, 0xe6d, 0xe1f,    -1, 0x6a0, 0xf3e, 0xb27,
 0x315, 0xc8c, 0x6de, 0x996, 0x2f9, 0xc4c, 0x90f,    -1,
 0xaa7, 0x9e9, 0xfff, 0x0bb, 0x33b, 0xbc6, 0xe17, 0x000,
 0x85d, 0x912, 0x5f7, 0x000, 0xff1, 0xba1, 0x086, 0xa1e,
 0x85a, 0x4cf, 0xd47, 0x5a9, 0x5dc, 0x0bc,    -1, 0x544,
 0x522, 0x1ff, 0xfa6, 0xa83, 0xc7d, 0x545, 0xd75, 0xb6f,
 0x284, 0xf11, 0xe46,    -1, 0x900, 0x0f3, 0xe31, 0x705,
 0x06d, 0xd59, 0x67b, 0xe56,    -1, 0xde2, 0x000, 0xd42,
    -1, 0x24b, 0x000, 0xf87, 0x842,    -1, 0xbb9, 0x065,
 0x626, 0x86a, 0x9f8,    -1, 0x7ac, 0xe20, 0xbe9, 0x357,
 0xfff, 0xf82, 0x219, 0x9d4, 0x269, 0x8a6, 0x251, 0x0af,
 0xd02, 0x09a, 0x803, 0x0a5, 0xfed, 0x278,    -1, 0x338,
 0x1e5, 0xcad, 0xf9e, 0x73e, 0xb39, 0xe48, 0x754,    -1,
 0x680, 0xd99, 0x4d4, 0x80b, 0x4be, 0xb0d, 0x5f2,    -1,
 0x4b1, 0x38a, 0xff5, 0x000, 0xa1b, 0xece, 0xa06, 0x8e6,
 0xdcb, 0xcb8, 0xc63, 0x98c, 0x346, 0x69c, 0x299, 0xa52,
 0xfff, 0x000,    -1, 0x7b2, 0xbf8, 0x2d1, 0xaff, 0x2f2,
 0xd69, 0xf20,    -1, 0xdcf, 0x9fb, 0x68f, 0x24e, 0xfd7,
 0xfdb, 0x894, 0xc8f, 0x615, 0xa25, 0x36d, 0x1bb, 0x064,
 0xb80, 0x280, 0xd7a,    -1, 0xd75, 0xc90, 0xdce, 0xdce,
 0x011, 0x869, 0xb2f, 0xd24, 0xe26, 0x492, 0xe0a, 0xcae,
    -1, 0x2ac, 0x38c, 0x0b9, 0xc4f,    -1, 0x32b, 0x415,
 0x49c, 0x11c, 0x816, 0xd08, 0xf5c, 0x356, 0x2b3, 0xfbf,
 0x7ff, 0x35d, 0x276, 0x292, 0x4f5, 0x0e2, 0xc68, 0x4c4,
 0x000, 0xb5e, 0xd0b, 0xca7, 0x624, 0x247, 0xf0d, 0x017,
 0x7ec, 0x2a6, 0x62c, 0x192, 0x610, 0xd98, 0x7a4, 0xfa3,
 0x80b, 0x043, 0xd7b, 0x301, 0x69d, 0x7e4, 0x10c, 0xacb,
 0x6eb, 0xea7, 0xe65, 0x75d, 0x4f5, 0x5b0, 0xa50, 0x7b6,
 0x0ec,    -1, 0xcf9, 0x4b4, 0x639, 0x111, 0xbdf, 0xe89,
 0x9fa, 0x76b, 0xdf6, 0x2d0, 0x857, 0x3a3, 0x000, 0xa3e,
 0x8cb, 0x35f, 0x4f0, 0x022, 0xb38, 0xc12, 0x93c, 0x2fc,
 0x546, 0xe6e, 0x91f, 0x145, 0xfff, 0x1af, 0x957, 0xbde,
 0x09d, 0xfd2, 0x9df, 0x2dc, 0x07f, 0x115, 0x7bf, 0xa35,
 0x061, 0x9bf, 0xc85, 0x918, 0x0c8, 0x317, 0xce5, 0xf28,
 0x108, 0x51b, 0x621, 0x188, 0x000, 0x28c, 0xf67, 0x6ef,
 0x000, 0xd72, 0xce2, 0x1be, 0x000, 0x000, 0x282, 0x357,
    -1, 0x4e5, 0x246, 0x859, 0x66c, 0x5d3, 0x9fd, 0x000,
 0x000, 0x82f, 0xc29, 0x331, 0xa93, 0x000, 0xae4, 0x48a,
 0x254, 0x000, 0x0ba, 0xe83, 0x7c7, 0xb6e, 0x88e, 0x774,
 0xf6f, 0x85d, 0x47f, 0xcd6, 0xe41, 0xdb6, 0x000, 0x0f4,
 0xb4d, 0x77f, 0x000, 0x901, 0x1a2, 0x44a, 0x482, 0x000,
 0xe99, 0xa75, 0x000, 0x7ab, 0x000, 0x0b6, 0x35c, 0x306,
 0x11c, 0x08e, 0x6eb, 0x11c, 0x771, 0xff9, 0x1c8, 0x63b,
 0x58b, 0x9d2, 0x250, 0x198, 0xfe7, 0xebc, 0x000, 0xa97,
 0xacc, 0xd4b, 0x28b, 0x892, 0x150, 0xcf4, 0xbc1, 0x000,
 0x662, 0xdd8, 0x61f, 0x903, 0x083, 0x000, 0xc55, 0x02f,
 0xc29, 0x4f5, 0xbcf, 0xe27, 0x9e3, 0xb13, 0xadc, 0x845,
 0x415, 0x0ae, 0x000, 0xe30, 0x931, 0x84a, 0xb09, 0x250,
 0x631, 0x7aa, 0x026, 0xdc9, 0x486, 0x3a7, 0xab0, 0xe04,
 0xe1a, 0xe17, 0x611, 0x556, 0xfac, 0x3c6, 0x5ab, 0x002,
 0xc16, 0xe60,    -1, 0xc51, 0x772, 0x67f, 0xfa9, 0x83c,
 0x974, 0x96a, 0xe94, 0x250, 0xa20, 0xc95, 0x65b, 0x479,
 0xe48, 0xa35, 0x23f, 0x5cf, 0x40a, 0xcf0, 0xe82, 0x1da,
 0x390, 0xc86, 0xa92, 0x433, 0xbed, 0x4a7, 0x09a, 0x15a,
 0xb8d, 0x9c7, 0x5fb, 0x8a0, 0x000, 0xf9a, 0xf3c, 0x11c,
 0x20c, 0xf23, 0x79d, 0xc79, 0xb71, 0x7af, 0xc5b, 0x771,
 0x629, 0x834, 0xb34, 0x20c, 0x940, 0x2ca, 0x60b, 0x000,
 0x4cb, 0x70b, 0x000, 0x000, 0x9e8, 0x000, 0xdca, 0x000,
 0x1ae, 0xb21, 0xfe3, 0x191, 0x9e1, 0x7f6, 0x04f, 0x64a,
 0xba2, 0x59e, 0x1ae, 0x000, 0x728, 0x000, 0x081, 0xecd,
 0x946, 0x000, 0xdee, 0x3ff, 0xdf9, 0x1bf, 0x01a, 0x1a9,
 0xc58, 0xe05, 0x3bf, 0x5e8, 0x39d, 0xbfa, 0x23f, 0xb8d,
    -1, 0x000, 0x779, 0x540, 0xf2c, 0x7cc, 0x340, 0x77a,
 0xa8e, 0xe8d, 0x2fd, 0xfed, 0x5d1, 0x308, 0x00f, 0xf4a,
 0x39b, 0xbe2, 0x0e5,    -1, 0xf4d, 0x1fe, 0xf00, 0x867,
 0x195, 0x2de, 0x712, 0x000, 0x00c, 0x0a3, 0x1f3, 0x4ee,
 0x317, 0x665, 0x000, 0x5d8, 0x291, 0x6c4, 0xa46, 0x492,
 0x8d4, 0x647, 0x57f, 0x000, 0x259, 0xd87, 0x5c2, 0x1d8,
 0xfad,    -1,    -1, 0x79f, 0x43a, 0xfd1, 0x164, 0x6e1,
 0x350, 0xf00, 0x0e9, 0xac4, 0xe35, 0x307, 0xfff, 0xabb,
 0xc1a, 0x768, 0x000, 0x372, 0x839, 0xf4b, 0x1c3, 0xab0,
 0xcb6, 0x943, 0xbe9, 0x20f, 0xddc, 0xe18, 0x4eb, 0x21d,
 0x530, 0x24c, 0x000, 0xf79,    -1, 0x1bd,    -1, 0x155,
 0x435,    -1, 0x132, 0x5c2, 0xb3d, 0x802, 0x733,    -1,
 0x336, 0xf19, 0xfea, 0xd2a, 0x07f, 0x8e9, 0x000, 0xdab,
    -1, 0x088, 0x4b1, 0x7ac, 0x000, 0xe66, 0xde0, 0x73c,
 0xfff, 0x02f,    -1, 0x000,    -1, 0x000, 0x562, 0x389,
 0xb20, 0x9ea,    -1, 0x3f8, 0x567, 0x035, 0xa55, 0x255,
 0xc98, 0x65f,    -1, 0x1ac, 0x571, 0x13d, 0xf57, 0x32a,
 0xbdb, 0x0ec, 0x47d, 0x43a,    -1, 0x1aa, 0x9d6, 0x843,
    -1, 0x244, 0xb03, 0xd0d, 0x579, 0x1b1, 0xea7, 0x000,
 0x062,    -1, 0x533, 0x1db, 0xf1f, 0x2f7, 0x2df, 0x3e5,
 0xdec, 0xc5c, 0x55a, 0xf6c, 0x4c1, 0x5a8, 0xcd4, 0x6fd,
 0x1a6, 0x4b8, 0x98a, 0xe17, 0xeb9, 0xfd1,    -1, 0x175,
 0x4d6, 0xba2, 0x000, 0x614, 0x147, 0x429, 0xfee,    -1,
 0x0d8,    -1, 0x98a, 0xdd2, 0xedd, 0x255, 0xef3, 0x345,
 0x000, 0xf3e,    -1,    -1, 0x210, 0x88a, 0x699,    -1,
 0x02c, 0xfee, 0x1c1, 0xb38, 0x000, 0x7cc, 0x165, 0x536,
    -1, 0x1ae, 0xefb, 0x734,    -1, 0x1a4, 0x984, 0x804,
 0x487,    -1,    -1, 0x31e, 0x9f2, 0x966, 0x000, 0xcb0,
 0x552, 0x0c9,    -1, 0x750, 0x650, 0x064, 0xffe, 0xe84,
 0x537, 0xee7, 0x834,    -1, 0x998, 0xa03,    -1, 0xcdf,
 0x4be, 0x310, 0x051, 0xf3f, 0x040, 0x973, 0x925, 0x000,
 0x000, 0xe51, 0x8b1, 0x468, 0xe11, 0xd4f, 0x374, 0x33a,
 0x126, 0x88b, 0x43a, 0xc9b, 0xdb9, 0x3c2, 0x3bd, 0x1ae,
 0x000, 0xc4a, 0x000, 0x4c4, 0x859, 0xe5a, 0x000, 0xeb4,
 0xd40, 0x87d, 0xc79, 0xe13, 0x50b,    -1, 0x724, 0x000,
 0x7be, 0x062, 0xe7f, 0xad0, 0x5f3, 0x69e, 0x381, 0x272,
 0x50f, 0xac8, 0x053, 0x55e, 0xf19, 0xd71, 0x75b, 0xbf2,
 0x000, 0x3ac, 0xdf0, 0xd75, 0x7e3, 0xe75, 0xa13, 0xfd8,
 0xbdc, 0x1d9, 0x15f, 0x8cc, 0xba4, 0xb79, 0xb7f, 0x812,
 0xfe6, 0x000, 0x2d3, 0xd7b, 0x5d4, 0xad2, 0x316, 0x908,
 0x323, 0x758, 0xb0b, 0x965, 0x1a9, 0xdce, 0x660, 0x625,
 0xeff, 0x0ed, 0x000, 0x323, 0x986, 0x831, 0x5c5, 0x22f,
 0xd49, 0xec6, 0x90e, 0x234, 0x000, 0x80f, 0x16c, 0x528,
 0x1f8, 0x2bd, 0x97d, 0xe20, 0xf29, 0x97d, 0x3a0, 0x7fc,
 0x086, 0x720, 0x1f9, 0x3eb, 0xf67, 0x423, 0xa55, 0x69e,
 0xede, 0x206, 0x7fa, 0x809, 0xfa8, 0xe22, 0x15e, 0x2a0,
 0x04a, 0xf7b, 0x4ea, 0xd9a,    -1, 0x1d8, 0x0b4, 0xb87,
 0x406,    -1, 0xcdf, 0x187, 0xf6d, 0x914, 0x4b1, 0x000,
 0x104, 0x67e, 0xc74, 0x6da, 0xe67, 0x7d2, 0xd1f, 0x64c,
 0x19d, 0x000, 0xa17, 0xfd5, 0x000, 0x8ad, 0xf38, 0xd65,
 0xabd, 0x75e, 0x667, 0x632, 0x346, 0xc48, 0xa77, 0x45e,
 0x2b5, 0xded, 0x7da, 0x160, 0x560,    -1, 0xf4e, 0xb0c,
 0xdb0, 0x287, 0x34a, 0x065, 0x439, 0x2ec, 0x679, 0xefa,
 0x208, 0xeb1, 0x1b0, 0x8c8, 0xca6, 0x62c, 0xa10, 0x673,
 0x000, 0x000, 0xc6a, 0x7b2, 0xbd7, 0xb2b, 0x17a, 0x6f3,
 0x1ab, 0xffa, 0x5e0, 0x1fa, 0xb8f, 0xe5c, 0xcab, 0xdbc,
 0x10f, 0x000, 0x000, 0xefe, 0x34b, 0x1d9, 0x834, 0x52f,
 0xb58, 0x82b, 0x6e8, 0x1f3, 0x719, 0x64e, 0xf55, 0xccd,
 0x531, 0x0de, 0x3aa, 0x150, 0x89a, 0x3b9, 0x26e, 0xebc,
 0x7ae, 0x670, 0x315, 0x8a9, 0x03b, 0x896, 0x247, 0x2f4,
 0x450, 0xd10, 0xb79, 0x0ed, 0x041,    -1, 0x707, 0x9e1,
 0xed6, 0x6d2, 0x000, 0xfff, 0xb1a, 0x084, 0xaf3, 0x47f,
 0x02f, 0xac3, 0x751, 0x8c4, 0x291, 0xadd, 0x000, 0xea1,
 0x8ec, 0xf9f, 0x5c2, 0x000, 0xd6b, 0x71e, 0x000, 0xcea,
 0x971, 0x5f8, 0x4b9, 0x7c6, 0xb7e, 0x353, 0xd25, 0x423,
 0x6ec, 0xb71, 0xf93, 0x000, 0x795, 0xc43, 0xaa2, 0x96a,
 0xcbd, 0xb55, 0x184, 0xdf0, 0x3d9, 0xbfe, 0xf79, 0x8f0,
 0x22c, 0xeeb, 0x000, 0xa4b, 0xe07, 0xf34, 0xc9d, 0x4be,
 0x95b, 0x371, 0x78c, 0x9e9, 0xde6, 0x072, 0xf0d, 0x60b,
 0x5a5, 0xab1, 0x000, 0x260, 0x000, 0xd2a, 0xd90, 0x154,
 0x4c6, 0x438, 0x5d9, 0x736, 0x062, 0x000, 0x000, 0xb84,
 0x72e, 0x0b7, 0x000, 0x050, 0x063, 0xa95, 0x89b, 0x917,
 0x049, 0xb14, 0x9a0, 0x734, 0x0c3, 0xd50, 0x917, 0xb02,
 0x8cf, 0x453, 0x0af, 0x8e5, 0x000, 0x7aa, 0x5d5, 0x81b,
 0x788, 0xb9c, 0x01a, 0x974, 0x000, 0x000, 0x37f, 0xd9f,
 0x000, 0xec4, 0x4f4, 0xbff, 0x4fe, 0x860, 0x11c, 0x74e,
 0x34a, 0x281, 0x52f, 0xb05, 0xa89, 0xbee, 0x6ad, 0x9fc,
 0x9ba, 0xb0b, 0x515, 0x1c7, 0x330, 0xfde, 0x97e, 0x6e7,
 0xc45,    -1, 0x658, 0x710, 0x28a, 0x921, 0x1de, 0x4a1,
 0x9d7, 0xe32, 0xa2d, 0xb0f, 0x545, 0xd6f, 0x329, 0x9b8,
 0xb4d, 0x9a0, 0x938, 0x783, 0xfa7, 0xd0a, 0xdc9, 0x0fe,
 0x000, 0x249, 0x000, 0x8cd, 0x922, 0x7cd, 0x021, 0xa89,
 0x3d5, 0xcee, 0x0a1, 0x6d6, 0x000,    -1, 0x48b, 0x000,
 0x87a, 0x8bb, 0x9ed, 0x01f, 0xe20, 0xb7f,    -1, 0xe95,
 0x593, 0x1da, 0x57a,    -1, 0xf3a, 0x000, 0x000,    -1,
    -1, 0x160, 0x501, 0x7a3, 0xb59,    -1,    -1, 0xc7f,
    -1, 0xf79,    -1,    -1, 0x48d, 0x781,    -1,    -1,
 0xb74,    -1, 0x3c4, 0xbe9,    -1,    -1, 0x9a4, 0x9ae,
 0xa75,    -1,    -1, 0x9cd, 0x000,    -1,    -1,    -1,
 0xc3c, 0x2d4,    -1, 0x173, 0xf38, 0x000,    -1, 0xee9,
    -1, 0xb91, 0xcc1, 0x86d, 0x8ab, 0xeb0, 0xec7, 0x687,
 0xd98, 0xa95, 0x744, 0xe7c, 0x826, 0x80e, 0x599, 0x3d9,
 0xf2f,    -1, 0x96a, 0xfd1, 0x174,    -1, 0x000, 0x1aa,
 0x50e,    -1, 0x5a2, 0xbcd, 0x000,    -1, 0x019, 0x588,
 0x18d, 0x470, 0x812, 0xeec, 0xf63, 0x05c,    -1, 0x000,
 0xb7f, 0x357, 0x436, 0xbb4, 0x1fb, 0x425, 0x1ed, 0xe13,
 0x66c, 0x555, 0xb11, 0x7b5, 0x48d, 0x38d, 0xf72, 0x000,
 0x000, 0xa66, 0x4fa, 0xf36, 0x1eb, 0x000, 0x95f, 0x000,
 0xd9a, 0x82f, 0x07f, 0x253, 0x70f, 0x915,    -1, 0x12d,
 0x040, 0x2ca, 0x446, 0x90a, 0x7a8, 0x687, 0x000, 0x04e,
 0x74f, 0x1ca, 0x793, 0x3c7, 0x3f0, 0x4c7, 0x000, 0xc30,
 0x533, 0x889, 0x9ef, 0xebd, 0x984, 0x18f, 0xfe1, 0x8ea,
 0x185, 0x410, 0x107, 0x000, 0x73e, 0xd4b, 0x8fc, 0xd34,
 0x1e6, 0x4bf, 0xbac, 0x7c3, 0x000, 0x7c8, 0xb2f, 0x02c,
 0xa46, 0x000, 0x0f9, 0x680, 0x94d, 0x6ad, 0x767, 0xfeb,
 0x6c7, 0x2d5, 0x43f, 0x9af, 0x261, 0xe83, 0xfa7, 0xb7b,
 0xf2d, 0x2f5, 0x4d7, 0x494, 0xbc2, 0x45b, 0x000, 0x17d,
 0x5c6, 0xe2b, 0xb20, 0x19e, 0x6ba, 0x973, 0xedd, 0xea8,
 0x000, 0x9f3, 0xd9a, 0x7fa, 0xb78, 0x556, 0xbb6, 0xc58,
 0x210, 0x000, 0xf9a, 0x56d, 0x48b, 0xf12, 0x000, 0x54d,
 0x5f4, 0x1ad, 0x86e, 0xe16, 0x6ff, 0xa35, 0x47e, 0x4c7,
 0x93c,    -1,    -1, 0xc98, 0xd3f, 0x000, 0x788, 0x6ef,
 0x959, 0xec2, 0x45e, 0xa4d, 0xa90, 0x000, 0x768, 0x8bb,
 0x6ee, 0x7f5, 0x770, 0xfa8, 0xba4, 0xf49, 0x7b8, 0x616,
 0x2bd, 0x23f, 0xe8c, 0x9fa, 0xa49, 0x213, 0x98a, 0x2c1,
 0x595, 0x885, 0x6de, 0x057, 0x1bc, 0x000, 0xc58, 0x7a8,
 0x5c1, 0x3d0, 0xa78, 0xb80, 0x000, 0xc06,    -1, 0x428,
 0xe92, 0xfa3, 0x341,    -1, 0x000, 0x000, 0x1ca, 0x27c,
 0xdeb, 0x835, 0x4c8, 0xdb3, 0x000, 0xf9d, 0x000, 0xe81,
 0xc22, 0xfce,    -1, 0xe6e, 0x96e, 0x161,    -1, 0x3b9,
 0x945, 0xa95, 0x13d, 0x748, 0x184, 0x588, 0x636, 0xf7e,
 0xb44, 0x2b7, 0x217, 0xee5, 0x65a, 0xc47,    -1, 0xca3,
 0x83e, 0x431, 0xc64, 0x636, 0x06e, 0x404, 0x993,    -1,
 0xeb3, 0x134, 0x8a3, 0xca9,    -1,    -1, 0x2ab, 0x000,
 0x8ed, 0x877, 0x1a8, 0xc89, 0x000, 0x000, 0xf94, 0x000,
 0x709, 0x249, 0x9ac, 0x22a, 0x605, 0x000, 0x000, 0x6b4,
 0x00c, 0xc53, 0xf23, 0x005, 0x29f, 0x865, 0xf79, 0x000,
 0x5fa, 0x764, 0xe51, 0xbdc, 0xb64, 0x0f3, 0xf29, 0x2f7,
 0x5da, 0x000, 0x16f, 0xb8b, 0x255, 0x9cc, 0xe43, 0x279,
 0x2c2, 0x483,    -1, 0xf7d, 0x7bb, 0x000, 0x9e3, 0xd84,
 0xe36, 0x6e6, 0x000,    -1, 0x33f, 0x41d, 0x5b5, 0x83e,
 0x2f4, 0xf5b, 0x9fc, 0xb1e,    -1, 0x8f4, 0xb26, 0x856,
 0x3b6, 0x126, 0x4c2, 0x274, 0x0c1, 0xfa9, 0x57d, 0x000,
 0x100, 0x7af, 0xc62, 0x000, 0xa55, 0x416, 0x93f, 0x78c,
 0xfba, 0x5a2, 0x0c2, 0x4d4, 0xa3e, 0xcc3, 0xe73, 0xd02,
 0x8df, 0x3e9, 0xe9a, 0x0f6, 0x32c, 0x23d, 0xdab, 0xf50,
 0xfc2, 0x000, 0x065, 0xc23, 0xd3d, 0xc84, 0x35e, 0x000,
 0xa24, 0x634, 0x4b4, 0xa52, 0x098, 0xb39, 0x9a4, 0xe71,
 0x8aa, 0x741, 0x000, 0xb16, 0x5c2, 0xea1, 0xc01, 0x5c1,
 0x30d, 0xca4, 0x201, 0xc9c, 0x717, 0x000, 0xba0, 0x537,
 0x619, 0x000, 0xfd9, 0x6dc, 0xdaa, 0x1da, 0xe51, 0xd39,
 0xb4c, 0x8a1, 0x098, 0x2f8, 0x191, 0x9dc, 0xdb0, 0x5e1,
 0x000, 0xe97, 0xef1, 0x8d3, 0xb0d, 0xfce, 0x336, 0xee1,
 0x7a2, 0xbc8, 0x494, 0x580, 0xba7, 0x000, 0x62a, 0x96a,
 0x527, 0x859, 0x811, 0xef0, 0x429, 0xef4, 0xf3d, 0x000,
 0x9d6, 0xb71, 0x000, 0x14b, 0xf3d, 0xb16, 0x204, 0x0c1,
 0xcd4, 0x339, 0x39d, 0xfe3, 0x837, 0x8c7, 0x955, 0x69a,
 0x5f6, 0x4c6,    -1, 0x3d5, 0x000, 0x0e7, 0x4b1,    -1,
 0xa3e, 0xb03, 0x1ea, 0xac8,    -1, 0x000, 0xed8,    -1,
 0x4e0, 0x9f7, 0xc91, 0x6b3,    -1,    -1, 0xa53, 0x290,
 0xa64, 0x0e3, 0x3dc, 0xed3, 0xf2f, 0x000, 0xd7c, 0xf44,
    -1, 0x205, 0x900, 0x864,    -1,    -1, 0xed3, 0x7d2,
 0x000,    -1, 0xdd2, 0x79b, 0x000,    -1, 0xae6, 0x5cf,
 0xde8, 0x000, 0x1f2,    -1, 0x2f3, 0x000,    -1, 0x2ce,
 0xcf2, 0x8f4, 0xee8, 0x165, 0x309, 0x15f,    -1, 0x714,
 0xbfc, 0x532, 0xad0, 0x151, 0x2d5, 0x0a4, 0x391,    -1,
 0x0dc, 0x0c1, 0x451,    -1,    -1, 0x6a0, 0x250,    -1,
 0xab8, 0x977, 0xa86, 0x407, 0x72f,    -1, 0x05f, 0x000,
 0xefe, 0x950, 0x4f4, 0x957,    -1, 0xd68, 0x26c, 0xa30,
 0x4f1, 0x279, 0x584, 0xb34,    -1, 0x4d7, 0x258, 0x000,
 0x518, 0x685, 0x91c, 0x3ac, 0x0fa,    -1, 0x979, 0x40c,
 0x506, 0x000,    -1, 0x7bd, 0xb97, 0x87f, 0xc06, 0x050,
 0x7bf, 0xe3e, 0xc81, 0x000, 0x65e, 0x000,    -1, 0xb76,
 0xc37, 0x4c4, 0xfc9, 0x336, 0x9fa, 0xaa2, 0x32c, 0xb8b,
 0xaa9, 0xc95, 0x85a, 0xa9a, 0x260, 0x4cd, 0x8fe, 0xd3c,
 0x982, 0x0d7, 0xbc1, 0xdcf, 0xe62, 0xe0d, 0xf8f, 0xd7b,
 0x91a, 0x3e0, 0x33a, 0x1c5, 0xf00, 0xde5, 0xad1, 0xebc,
 0xebc, 0x942, 0xd86, 0x3bf, 0x8ce, 0xb8c, 0x000, 0x8d6,
 0x784, 0xb74,    -1, 0x818, 0x000, 0xfff, 0x07e, 0x029,
 0xf48, 0xb65, 0xd81, 0x220, 0x095, 0x21f, 0xac4, 0xb31,
    -1, 0x864, 0x000, 0x3bd, 0xf85, 0x237, 0x369, 0x2d9,
 0xfdf, 0x25a, 0x782, 0x7b8, 0xabd, 0x5e3, 0x438, 0x230,
 0xbc4, 0x7ad, 0x00a, 0x441, 0x6dc, 0x2c4, 0xf16, 0x0b3,
 0x04c, 0xfd2, 0x8aa, 0xad8, 0x3e4, 0x142, 0x585, 0xc8f,
 0x9bf, 0x29b, 0xac9, 0x743, 0xfb5, 0x7fc, 0x05e, 0xd38,
 0x002,    -1, 0xb4e, 0xd0c, 0x84c, 0xf93, 0x91f, 0xcd2,
 0x04f, 0x569, 0xd1b, 0xfc6, 0x630, 0x6f6, 0x1d8, 0x91a,
 0x4da, 0x9f5, 0x07a, 0xcf5, 0x634, 0x42f, 0xfff, 0x951,
 0x0f9, 0xc01, 0x491, 0xbd6, 0x730, 0xfea, 0x9f4, 0xbfc,
 0xf1a, 0x413, 0xa2a, 0xdc6, 0xc87, 0x9db, 0xc2c, 0x30f,
 0xdb5, 0x785, 0xbaa, 0x000, 0x000, 0xa49, 0x000, 0x61d,
 0xf6f,    -1, 0x031,    -1, 0x441, 0x7bf, 0x53e,    -1,
 0x6fd, 0x0f6,    -1, 0xadb,    -1, 0x000, 0x432, 0x187,
 0xd37, 0x154, 0x539, 0xc08, 0xe51, 0x219, 0x1e9, 0x897,
 0xa0e, 0x201, 0x447, 0x89f, 0x000, 0x463, 0x726, 0xa05,
 0xab9, 0xd01, 0x1e4, 0xfea, 0x895, 0x816, 0x313, 0xae3,
 0x3a4,    -1, 0x70f,    -1, 0xa42, 0x5e9, 0x78e,    -1,
 0x317, 0x6c8, 0x000, 0xbf7, 0xefd,    -1, 0xb17, 0x382,
 0xd26, 0x5ff, 0xf81, 0x20b, 0x373, 0x774, 0x081, 0xaae,
 0xfdb, 0xe5d,    -1,    -1, 0xcb7, 0x738, 0x919, 0x933,
 0x398, 0x000, 0x14e,    -1, 0xe14, 0xbf8, 0x11c, 0x94b,
 0x031,    -1, 0x000, 0x2d4, 0xd41, 0xdc6, 0x9f6, 0xea7,
 0x9e8, 0x2ec, 0x10a, 0x50d, 0xeae, 0xdb0, 0xef0, 0x9c8,
 0x000,    -1, 0x82e, 0x9d3, 0xdb7, 0x46d,    -1, 0x230,
 0x73b, 0x45b,    -1,    -1, 0x000, 0x4a7,    -1,    -1,
 0x47c, 0x10e, 0x4b4,    -1,    -1,    -1, 0x1d7, 0xa5d,
 0x233, 0x6b2, 0x6bd, 0x387, 0x7ca, 0xb1a, 0xf75, 0xea4,
 0xdc9, 0x98b, 0x80c, 0x702, 0xe22, 0xa6e, 0x6f8, 0x05b,
 0x17c,    -1, 0x000, 0xebe, 0xc8e, 0xaec,    -1, 0x42b,
 0xdce,    -1,    -1,    -1, 0xef3, 0xc52, 0x31b,    -1,
 0xdff, 0xbd0, 0x000, 0xa72, 0x525, 0x9cf, 0x2ff, 0xfc8,
 0x37c, 0xbce, 0xd8c, 0xd88, 0x3a6, 0xed8, 0x4ab, 0x000,
 0x449, 0x9d7,    -1,    -1, 0x9be, 0x59f, 0x000, 0x882,
    -1, 0x742, 0x000,    -1,    -1,    -1, 0xe8b, 0x0f3,
 0x771,    -1, 0x3ea, 0x8f9, 0xcbb, 0x548, 0x46d, 0x000,
    -1, 0xf74, 0xa23, 0x15b,    -1, 0xaeb, 0x7f8, 0xbe2,
 0x000,    -1, 0x023, 0x61e, 0x95d, 0x7ac, 0x024, 0x141,
 0x561, 0x9fe, 0xb10,    -1, 0x623, 0xc47, 0x413, 0x0e7,
 0x663, 0xcdf, 0xebe, 0x5c9, 0x573, 0x21d, 0xb28, 0x280,
 0xb9f, 0xd1a, 0xecf, 0xff0, 0x000, 0xfc0, 0x085, 0x9c4,
 0x48c, 0x000, 0xb0b, 0x43d,    -1, 0x73b, 0x802, 0x633,
 0x6ef,    -1,    -1, 0x5c1, 0xea6, 0x0a9, 0xab4, 0xacd,
 0xb81, 0xa32,    -1,    -1, 0xa26, 0x9d5, 0xf7c,    -1,
 0xf69, 0xdbb, 0x6d5, 0x405,    -1, 0xd0a, 0xfe0, 0xf5e,
 0xbd7,    -1, 0x89a, 0x868, 0xeb2, 0x792, 0x7fe, 0x115,
 0x000, 0x8bb, 0xdd1, 0xc40, 0x453, 0xbb3, 0x7cc, 0x3e6,
 0x071, 0x0f1, 0xbae, 0xf67, 0x896, 0x38e, 0x86e, 0xfaa,
 0xccc,    -1, 0x411, 0x8e5, 0x699, 0x2ef, 0x785, 0x9d4,
 0xe30, 0xb2e, 0x976, 0x203, 0x035, 0x75d, 0x8f1, 0x144,
 0x092, 0x1a5,    -1, 0x55f, 0x000, 0xa43, 0x5be, 0x68d,
 0x852, 0xb87, 0x9af, 0x0c0,    -1, 0xa50, 0x9ca, 0x15f,
 0xf06, 0x869, 0x0f3,    -1, 0x000,    -1, 0x9a9,    -1,
    -1,    -1,    -1, 0xf05, 0x000,    -1, 0x000, 0x4a9,
 0xf9d,    -1, 0x000, 0xab1, 0x04c,    -1, 0xd17, 0x893,
 0x763, 0x332,    -1, 0xc41, 0x5bd, 0xa72, 0x67c, 0xb78,
 0x973, 0x6c7, 0x569,    -1, 0x96a, 0xc68, 0x48c,    -1,
 0x6fa,    -1, 0xa2a, 0x44f,    -1, 0x73f, 0x28f, 0x536,
 0xd91, 0xc86, 0xef8, 0x1f5, 0xfb4, 0x060, 0x230, 0xe10,
    -1, 0x000, 0x305, 0x0e6, 0xb19, 0x1e2, 0x7fc, 0xf35,
    -1, 0x7d9, 0x000, 0x000, 0xd2f, 0xb3a, 0x0a2, 0x7c9,
 0xda6, 0x37c, 0xe43,    -1, 0x7da, 0x0d6, 0x000,    -1,
 0xd40,    -1, 0x156, 0xee9,    -1, 0x239, 0x10f, 0x60c,
 0x9d4, 0x663, 0x565, 0x603, 0x38b,    -1, 0x606, 0x13c,
 0x681, 0x436, 0xc29, 0x9c7, 0x1d9, 0x000, 0x0a6, 0x996,
 0x231, 0x055, 0x01f, 0x0a3, 0xd96, 0x7c8, 0x0f3, 0xaa7,
 0xd99,    -1, 0x3be, 0x476, 0x25f, 0x38c, 0xdf3, 0x6d5,
 0xcb5, 0xadd, 0x000, 0x136, 0x64d, 0xc0d, 0xe61, 0xd0b,
    -1, 0x000, 0x535, 0x9c3, 0x279, 0x00c, 0xa87, 0xa31,
 0xc4a, 0x167, 0x423, 0xec8,    -1, 0x926, 0xa4d, 0x5ba,
    -1,    -1, 0x9bf, 0x000, 0x47f, 0x8f3, 0xd5b, 0xc3b,
 0xa18,    -1, 0x548, 0x8f7, 0x8cf, 0x000, 0x9bd, 0xaa2,
 0x7ec, 0x000, 0xfb8, 0xafd, 0xe68,    -1, 0xfa7, 0x31c,
 0xef3, 0x288, 0xdf0, 0x1bc, 0xfe9, 0x1ea, 0xa9f, 0x000,
 0x53f, 0x000, 0xda6, 0x09c, 0x1bf, 0x09c, 0x31c, 0x0c8,
 0x31c,    -1, 0x689, 0x211,    -1, 0x77f, 0x723, 0xb8f,
 0x683, 0x351,    -1, 0xb33, 0xce0,    -1, 0x61c, 0x073,
 0x783, 0x6b2, 0x6a8, 0x729, 0x81b, 0xabf, 0xd15, 0x563,
 0x433,    -1, 0x823, 0xf99, 0x2c5,    -1, 0x367, 0xcc4,
 0x934, 0x6f2, 0xdf0, 0xa1f, 0x579, 0x012,    -1, 0x508,
 0x070,    -1, 0x018, 0x270, 0xa6f,    -1, 0x7a7,    -1,
 0x826, 0x4b5,    -1, 0x7d8, 0xb20,    -1, 0xc28, 0x463,
    -1, 0xdf9, 0x22c, 0xe17, 0x4f2, 0xe13, 0x4ff, 0x40a,
 0xdcb, 0x9ed, 0x34a, 0xeb8, 0xa0e, 0x5f2, 0x594, 0x60d,
 0x4b6, 0xd3c, 0x675, 0x1c4, 0xbb5, 0xc73, 0xfad, 0xead,
    -1, 0xfb6,    -1, 0x146, 0xd40, 0x02f, 0x000, 0x302,
    -1,    -1, 0x6e5, 0x000, 0xed7, 0xd8c, 0x7a3, 0x0fc,
 0x259, 0x34b, 0xa1b, 0x882,    -1, 0x211, 0x000, 0xd30,
 0xe02, 0x5cd, 0x53e, 0x11b, 0xa16,    -1, 0x24e,    -1,
 0xace, 0xe9a,    -1, 0x5c6, 0x9be, 0x000, 0x169, 0x982,
    -1, 0x3fd, 0x457, 0x06f, 0x7e7, 0xed1, 0x5ee, 0xcef,
 0x62b, 0x26c, 0xc9f, 0xe68, 0x59f, 0x0b5, 0x000, 0x0bc,
 0x086, 0x890, 0x005, 0xc42, 0x939, 0xaca, 0xdd9,    -1,
    -1, 0x6e5, 0x0dd, 0x434, 0x297, 0xe21, 0x0f5,    -1,
 0xa6c, 0x4ad, 0x978, 0x433, 0xa41, 0xd6f, 0x8bf, 0xfb8,
    -1, 0x928, 0x85e, 0xfb6, 0x5c7, 0x99a, 0x8ec, 0xebc,
 0x226, 0x7d4, 0xdcd, 0xc0b, 0x000, 0x7f4, 0xc6f, 0x000,
 0x3ad, 0x5b2,    -1, 0x67b,    -1, 0x568, 0x6e2,    -1,
    -1,    -1, 0x3f3, 0xaf5, 0x33f,    -1, 0x022, 0x1bd,
 0xae5,    -1, 0x9c3, 0x000, 0x92b, 0xee5, 0x29c, 0x000,
 0x15e, 0xe71, 0xacb, 0x9d2, 0x1a3, 0xb7f, 0xa5b, 0x095,
    -1, 0xb6e, 0x79f, 0x3d1, 0x7d0, 0x131, 0xcd7,    -1,
 0x2c3,    -1, 0x396, 0x4d2, 0x297, 0x405, 0x634,    -1,
    -1,    -1, 0x928, 0xbca, 0xb6c, 0x011, 0xfc0, 0xbaf,
 0xbd2,    -1, 0x585, 0x000, 0xb8a, 0x7f9, 0xd6b, 0x4eb,
 0x9a3, 0x000,    -1, 0xaeb, 0xa47, 0xcef, 0x9c6,    -1,
 0x000,    -1, 0x2a9, 0x371, 0xca6,    -1, 0xb7d, 0x15f,
 0x2a9,    -1, 0xe80, 0x7a7, 0x23a, 0x000, 0x000, 0xcc9,
 0x60e,    -1, 0x130, 0x9cd, 0x498, 0xe25, 0x366, 0x34b,
 0x899, 0xe49, 0x1a8, 0xc93, 0x94d, 0x05e,    -1, 0x0c2,
 0x757, 0xb9d, 0xaa3, 0x086, 0x395, 0x3c3, 0xa2e, 0xf77,
 0xcb1, 0x45e, 0x169, 0xbba, 0x367, 0x8cb, 0x260, 0x5a0,
 0x8cb, 0x737, 0xa1f, 0xaaf, 0xf92, 0x430, 0x97d, 0x542,
 0xb09,    -1, 0x774, 0x084, 0x4c0, 0x2b3, 0xaf6, 0x93c,
 0x32d, 0xee2,    -1, 0x605, 0xece, 0x8eb, 0xc62, 0x01d,
 0x000, 0xaba, 0xfc5, 0xb8e, 0xc07, 0xfb6, 0xbca, 0x8f0,
 0xd33,    -1, 0x283, 0x6d6, 0x6ad, 0x678, 0x51a, 0xc95,
 0xda4, 0x962, 0x9ed, 0x307, 0x94a, 0x052, 0xf4e, 0x3bd,
 0x210, 0x71a, 0x3c7, 0x5a4, 0x6e7, 0x23a, 0x523, 0x1dc,
 0x6b2, 0x5e0, 0xbb0, 0xae4, 0xdb1, 0xd40, 0xc0d, 0x59e,
 0x21b, 0x4e6, 0x8be, 0x3b1, 0xc71, 0x5e4, 0x4aa, 0xaf3,
 0xa27, 0x43c, 0x9ea, 0x2ee, 0x6b2, 0xd51, 0x59d, 0xd3a,
 0xd43, 0x59d, 0x405, 0x2d4, 0x05b, 0x1b9, 0x68b, 0xbfa,
 0xbb9, 0x77a, 0xf91, 0xfcb,    -1, 0x949, 0x177, 0x68d,
 0xcc3, 0xcf2, 0x000, 0xa87, 0x2e6, 0xd2f, 0x111, 0x168,
 0x94c, 0x54c, 0x000, 0x0c5, 0x829, 0xcbc, 0xc0b, 0x1ed,
 0x836, 0x9d8, 0xbdc, 0xc5e, 0x4e5, 0xb94, 0x6f2, 0x74f,
 0x878, 0x3b2, 0x48d, 0xc72, 0xcff, 0xccb, 0x8f9, 0x7ee,
 0x869, 0x228, 0x035, 0x81e, 0xcf9, 0x309, 0xdf2,    -1,
 0x047, 0xdd3, 0xcab, 0x11d, 0xe76, 0xb52, 0xbbd, 0x12d,
 0xf37, 0x552, 0x61d, 0xdd8, 0x2cd, 0x298, 0x9e2, 0xf2c,
 0x9f7, 0xf41, 0xcb4, 0x277, 0xfde, 0xe7e, 0x82a, 0x86b,
 0x9cc, 0x580, 0xfcc, 0x33a, 0x438, 0xd6e, 0x000, 0xc04,
 0xd50, 0x681, 0x1b3, 0x322, 0x86c, 0x4a6, 0x000, 0xa17,
 0xd53, 0xdc0, 0xb61, 0x323, 0x3d1, 0x3fb, 0x929, 0xa6e,
 0x919, 0xae0, 0x283, 0xe6a, 0xed3, 0x371, 0xd51, 0x309,
 0x510, 0xd50, 0x6f4, 0xc84, 0x566, 0xba7, 0x75b, 0xbeb,
 0x793, 0x58f, 0x974, 0xe77, 0x52c, 0xcef, 0x942, 0xa7c,
 0x56a, 0xaa0, 0x784, 0x0ec, 0xad3, 0xccf, 0xecf, 0xc3f,
 0x846, 0x1b2, 0x112, 0x4ee, 0x18b, 0xa76, 0xe14,    -1,
 0xfb1, 0xb4c,    -1, 0xd54, 0x0e0, 0x72d, 0xdf0, 0xf0c,
 0x881, 0xc60, 0xe1b, 0x000, 0x453, 0xe21, 0xb2a, 0x6df,
 0x84f, 0x000, 0x12a, 0x991, 0x587, 0xa4e, 0x522, 0x000,
 0xe17, 0xc64, 0x994, 0x4cc, 0x0e5, 0xc2b, 0x8cf, 0x458,
 0x992, 0xec0, 0xc80, 0xefb, 0x7b7, 0x863, 0xc0a, 0x250,
 0x338, 0xa44, 0x8ab, 0x873, 0x134, 0x23c, 0x4f6, 0x066,
 0xd0f, 0xdd6, 0x93d, 0xf20, 0x000, 0x9bb, 0x255, 0xe7b,
 0x916, 0x4f3, 0x68e, 0xb82, 0x2b4, 0x9d7, 0xfd1, 0x0fb,
 0x11e, 0x204, 0x241, 0x67f, 0x1c4, 0xe91, 0xf41, 0xb4a,
    -1, 0x6d2, 0xce6, 0xdfb,    -1, 0xdd0, 0xb8d, 0x8db,
 0x86c, 0x224, 0xdeb, 0x7bb, 0x50e, 0x000, 0xb79, 0x11e,
 0x486, 0xd4c, 0x000, 0xa54, 0x946, 0x83a, 0x537, 0x875,
 0x000, 0x8e4, 0x95a, 0xdd5, 0x9d5, 0x910, 0x95b, 0x8c8,
 0xd22, 0x07c, 0xac0, 0x000, 0x048, 0x170, 0x9b2, 0xcea,
 0xb0f, 0x958, 0x0f9, 0xa9e, 0x87a, 0x166, 0x69c, 0x112,
 0xde0, 0x487, 0xeca, 0x639, 0x4ee, 0x7fa, 0x2cc, 0x709,
 0x87a, 0x5bb, 0xf64, 0x173, 0xdc6, 0xaaf, 0xbff, 0xf2a,
 0x8fb, 0xd44, 0x0ca, 0xf34, 0xb3a, 0xeb3, 0xfc5, 0x61d,
 0x92f, 0x6fb, 0x1a1, 0xd85, 0x8fe, 0xb6a, 0x0a1, 0x44f,
 0x89a, 0xc5d, 0x13b, 0x5cc, 0x000, 0x9ac, 0x9e6, 0xf95,
 0x511, 0xf2e, 0xf3c, 0x707, 0xec5, 0xaec, 0xc72, 0xeb1,
 0x105, 0xda3, 0xbcb, 0x1d6, 0xf16, 0xd50, 0x306, 0x03f,
 0xe6a, 0x25c, 0x9fe, 0xd3f, 0x8a4, 0x7bc, 0x0bc, 0x532,
 0x62e, 0x111, 0x797, 0xc2c, 0x9d0, 0x338, 0xbc7, 0xd64,
 0xb09, 0x4d6, 0xcba, 0x62c, 0xef2, 0x32b, 0x9c5, 0xc06,
 0x38b, 0xbb2, 0x8b7, 0x6f2, 0x7ec, 0xa77,    -1, 0x7a3,
 0xc95, 0xa91, 0x5d3, 0xffc,    -1, 0xe27, 0xa0a, 0x071,
 0x9da, 0x000, 0xba3, 0x3fd, 0x120, 0x845, 0x151, 0xb5f,
 0x193, 0xe99, 0x0f6, 0x640, 0xef4, 0xe17, 0x46b, 0x432,
 0x8a4, 0x415, 0x252, 0x79c, 0xbe5, 0x3f0, 0xb64, 0x984,
 0x5a7, 0x1be, 0xedc,    -1, 0xd7e, 0x5b4,    -1, 0xd27,
 0x03e, 0x136, 0xb30, 0xfff, 0x1dc, 0xc32, 0x84a, 0x392,
 0xf4f, 0x911, 0x501, 0x836, 0x700, 0x9ac, 0x000, 0xdb5,
 0xfa3, 0x5d3, 0x1f8, 0x888,    -1, 0xfa4, 0xfe7, 0xd87,
 0x9fe, 0x6af, 0x9a5, 0xfd5, 0xf49, 0xded, 0x416, 0x2fc,
 0x078, 0xd2e, 0xbf1, 0xcd9, 0x733,    -1, 0xb50, 0xd57,
 0xaa1,    -1, 0x9b0, 0x874, 0x18f,    -1,    -1, 0x2f9,
 0xfbb, 0xf73, 0x646, 0x868, 0x000, 0x000, 0xba2, 0xd74,
 0xc8f, 0xe36, 0xcfd, 0x5b8, 0x850, 0x48a, 0x689, 0x7ad,
 0xefd, 0x7e1, 0xf45, 0xd9e, 0x0f0, 0x7c0, 0x675,    -1,
 0xf26, 0x3c0, 0xe2d, 0xb62, 0x276,    -1, 0xf90, 0x837,
 0xc7c, 0x8ed, 0x08d, 0x1d6, 0x506, 0xac9, 0xd81, 0x1be,
 0xf7e, 0x1a3, 0xb2a, 0x5e2, 0x217, 0x1df, 0x5a3, 0x498,
 0xfb1, 0x432, 0x2ca, 0x5a1, 0x5d5, 0x135, 0x6f0,    -1,
 0xf70, 0x000, 0xd4c, 0x634,    -1, 0x8ca, 0x198,    -1,
 0x7b9, 0x629, 0xc16, 0x68c, 0xea2,    -1, 0xba0, 0x6d9,
 0xce9, 0x7b2, 0x000, 0xf59, 0x252, 0x575, 0x0a8, 0x894,
 0x000, 0x824, 0xf63, 0xd70, 0xdd8, 0x856, 0xc77, 0x334,
 0xeb2, 0x2b8, 0x307, 0xc34, 0x2e7, 0xa74, 0x6b9, 0x0e1,
 0x20f, 0x3ee, 0xf80, 0xa1f, 0x6e6, 0xa03, 0x3c7, 0x72f,
 0xfff, 0x156, 0x273, 0x1b7, 0xd90, 0x998, 0x474, 0xf1b,
 0x80f, 0xe4c, 0x0ba, 0xfff, 0x85e, 0x3af, 0x58f, 0x000,
 0xf6b, 0x71c, 0x4ed, 0xec3, 0x4cb, 0x000, 0xa68, 0x6ca,
 0x086, 0x000, 0x6e4, 0xab3, 0xff5, 0x281, 0xf0a, 0xc92,
 0x8d5, 0x486, 0xdd1, 0x903, 0x8e3, 0x9df, 0x2ab, 0xd08,
 0x144, 0xdcd, 0x281, 0x046, 0x161, 0xe83, 0xf24, 0xce7,
 0x30a, 0xf89, 0xf01, 0x308, 0x142, 0x9df, 0x44d, 0x9dd,
 0x3ed, 0x81b, 0xd9d, 0x000, 0x8c2, 0xe01, 0xfe6, 0xa20,
 0x167, 0xedd, 0xdb1, 0x470, 0xe70, 0x3aa, 0x0ff, 0x4d1,
 0xd30, 0x67a, 0xc56, 0x3d8, 0xf2e, 0x86a, 0x18b, 0x3f5,
 0x1a7, 0xd97, 0x652, 0x000, 0x00d, 0xbc7, 0xed3, 0x39e,
 0xb0d, 0xd8d, 0xc49, 0x2db, 0x44e, 0x820, 0x189, 0xd51,
 0x523, 0x161, 0x2eb, 0x41c, 0x951,    -1, 0xbb7,    -1,
    -1, 0x0a7, 0x3ed, 0xfaa, 0x18e, 0xa34, 0x820, 0x2b4,
    -1, 0x8c2, 0x3ee, 0x59d, 0x97b, 0x209, 0x3a2, 0x102,
 0x351, 0x6bf, 0xd3f, 0x4fc, 0x55f, 0x4b5, 0xe22, 0xf13,
 0x53a, 0x08a, 0x38d, 0xf4b, 0x424, 0xea6, 0x48e, 0x11c,
 0x339, 0x5bd, 0xf7c, 0x3bd, 0x15a, 0x35c, 0x854, 0x71b,
 0x30f, 0x065, 0x97e, 0x354, 0x28e, 0x344, 0x926, 0xc0b,
 0xae0, 0x5db, 0xb3e, 0x661, 0x432, 0x3c8, 0xf5e, 0x368,
 0xc85, 0xfff, 0x7f5, 0x0b6, 0x98b,    -1, 0x28c, 0x784,
 0xb78, 0x50a, 0x696, 0x47c, 0x40d,    -1, 0xe4d, 0x5fc,
    -1,    -1, 0xadb, 0x1db, 0x830, 0xd48,    -1, 0xf3a,
 0xee4, 0xed4, 0xb1a, 0xa14, 0x36d, 0xf1c, 0x774, 0x000,
 0x942, 0x278, 0x7ee, 0x000, 0x550, 0x57c, 0x343, 0x22b,
 0x324, 0xa34, 0x0ea, 0x230, 0x51b, 0x2d1, 0x500, 0x59f,
 0xd56, 0x540, 0x2f4, 0x87d, 0x9e5, 0x9c5, 0x5ea, 0x771,
 0x491, 0x206, 0xa4b, 0x4bf, 0xdaf, 0x308, 0xb25, 0x261,
 0x991, 0x000, 0x88e, 0x7e8, 0x3d6, 0x15d, 0xebc, 0x6c2,
 0xd45, 0x000, 0x3c6, 0x48d, 0x622, 0x758, 0xfa9, 0x3cf,
 0x401, 0xcdb, 0xe3f, 0x544, 0xf1f, 0x000,    -1, 0x4d4,
 0x000, 0x7f1, 0xba4, 0x81c, 0x92f, 0x7d1, 0xa83, 0xa31,
 0xe74, 0xa20, 0x475, 0x489, 0xf20, 0x3d1, 0xac1, 0xb2d,
 0x6b2, 0x1b6, 0x063, 0xd00, 0xfeb, 0x5ca, 0xb2c, 0xcb2,
 0x1cb, 0x251, 0x82b, 0x8ba, 0x40b, 0xf1e, 0xa8a, 0xd24,
 0x880, 0x84e, 0x8cb, 0x0a3, 0x000, 0xaf7, 0xf99, 0x6a1,
 0x156, 0x382, 0x0a0, 0x000, 0xed1, 0xd07, 0xbf5, 0x000,
 0x295, 0xe48, 0x760, 0x019, 0x97f, 0xb46, 0xff5, 0x7c9,
 0x1cf, 0xba4, 0x630, 0xe58, 0xda6, 0xd4b, 0xc02, 0xf9f,
 0x11c, 0x000, 0xb99, 0x51f, 0x43e, 0x199, 0xdfb, 0x72f,
 0x913, 0x509, 0xac5, 0xa2e, 0xcdb, 0x348, 0xb15, 0x472,
 0x95d, 0x67f, 0x000, 0x4b9, 0xd78, 0xc87, 0x0f6, 0x281,
 0x0bd, 0x924, 0x35e, 0x129, 0xffd, 0xe24, 0x000, 0x640,
 0x09b, 0xd10, 0xa0d, 0x000, 0x474, 0x189, 0x49f, 0x62d,
 0xcba, 0x561, 0x000, 0x58a, 0xaa1, 0x603, 0x5ab, 0x0c7,
 0x00a, 0x784, 0x5e4, 0x7e4, 0xe4d,    -1, 0x276, 0x465,
 0xee9, 0xe51, 0xdae, 0xbb1, 0x51f, 0xcba, 0x1c3, 0xd70,
 0x000, 0x5be, 0x4ea, 0x3cc, 0xf13, 0x811, 0x813, 0x234,
 0x7e4, 0xbae, 0xd97, 0xb74, 0x000, 0x76a, 0xda1, 0x000,
 0xd8c, 0x53a, 0xc5a, 0x000, 0x000, 0x61b, 0xd87, 0x141,
 0x383, 0xe06, 0x6a3, 0x6c3, 0xbcc, 0xc44, 0xf63, 0xd8b,
 0x58d, 0x000, 0x839, 0x77a, 0x000, 0x8e4, 0x000, 0xdbe,
 0x483, 0xd5b, 0xa9d, 0xca5, 0x431, 0x491, 0x29a, 0x27d,
 0x2d2, 0x691, 0x000, 0x19a, 0xa0d, 0xb0b, 0xf32, 0xe49,
 0xfbf, 0x399, 0xd20, 0x000, 0x66a, 0x000, 0x447, 0xb20,
 0x894, 0x038, 0xc9c, 0xff0, 0x000, 0x0d4, 0xad4, 0x768,
 0x65c, 0x000, 0x27b, 0x6c6, 0x9be, 0xd35, 0xc6a, 0xdd3,
 0x000, 0x2a7, 0x158, 0x38d, 0x8ef, 0x7b6, 0xd49, 0x30c,
 0xec3, 0x211, 0x17c, 0xcd0, 0x61f, 0x000, 0xe6e, 0x1d4,
 0x6e9, 0x000, 0xc2d, 0x5c3, 0xcd4, 0x760, 0x532, 0xc94,
 0x590, 0x000, 0x4a3, 0xc33, 0x000, 0x426, 0x604, 0xa06,
 0xa99, 0x917, 0x0c4, 0xc8d, 0x9e5, 0xcc7, 0x415, 0xf79,
 0x000, 0xaf4, 0x622, 0x756, 0x9c2, 0xa51, 0xb0f, 0x4ef,
 0xbc4, 0xe15, 0x29e, 0x055, 0x6c9, 0x695, 0x94f, 0x9d6,
 0x000, 0xb9f, 0xd46, 0x1d4, 0x000, 0xcb2, 0x9e8, 0x000,
 0xa5e, 0xce0, 0x000, 0x098, 0xa98, 0x6d9, 0x5e2, 0x95f,
 0x791, 0xeb8, 0x5fa, 0x60a, 0xacc, 0x3d3, 0x4df, 0x0df,
 0x9ca, 0x972, 0x3cc, 0x583, 0xca5, 0xe1a, 0x000, 0x2d3,
 0x266, 0x000, 0x06c, 0xfff, 0x62d, 0x64e, 0x40c, 0x599,
 0x475, 0xaa9, 0xba6, 0x96f, 0xe32, 0x059, 0x342, 0x36d,
 0xfd1, 0x09b, 0x878, 0x9f8, 0x000, 0x3ad, 0xdba, 0x000,
 0x544, 0xc1a, 0x000, 0xee8, 0x492, 0xa6b, 0x447, 0xd2a,
 0xb4e, 0x02c, 0xadb, 0xde2, 0x904, 0x62d, 0xf01, 0xbb8,
 0x255, 0x382, 0xfff, 0x29e, 0x000, 0x000, 0x011, 0xfff,
};

#define TEXT_MODE_HASH_MASK 0x7F

/* Codeword to character decode table */

static const unsigned char text_mode_hash[TEXT_MODE_HASH_MASK + 1] = {
 0x041, 0x042, 0x043, 0x044, 0x045, 0x046, 0x047, 0x048,
 0x049, 0x04A, 0x04B, 0x04C, 0x04D, 0x04E, 0x04F, 0x050,
 0x051, 0x052, 0x053, 0x054, 0x055, 0x056, 0x057, 0x058,
 0x059, 0x05A,
 0x061, 0x062, 0x063, 0x064, 0x065, 0x066, 0x067, 0x068,
 0x069, 0x06A, 0x06B, 0x06C, 0x06D, 0x06E, 0x06F, 0x070,
 0x071, 0x072, 0x073, 0x074, 0x075, 0x076, 0x077, 0x078,
 0x079, 0x07A,
 0x030, 0x031, 0x032, 0x033, 0x034, 0x035, 0x036, 0x037,
 0x038, 0x039, 0x026, 0x00D, 0x009, 0x02C, 0x03A, 0x023,
 0x02D, 0x02E, 0x024, 0x02F, 0x02B, 0x025, 0x02A, 0x03D,
 0x05E,
 0x03B, 0x03C, 0x03E, 0x040, 0x05B, 0x05C, 0x05D, 0x05F,
 0x060, 0x07E, 0x021, 0x00D, 0x009, 0x02C, 0x03A, 0x00A,
 0x02D, 0x02E, 0x024, 0x02F, 0x067, 0x07C, 0x02A, 0x028,
 0x029, 0x03F, 0x07B, 0x07D, 0x027
}

#endif
