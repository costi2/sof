/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2019 Intel Corporation. All rights reserved.
 *
 * Author: Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
 */

#include <stdint.h>

const int32_t fir_int32_03_3850_5100_010_095[93] = {
	44212,
	-302176,
	-1360920,
	-3291119,
	-5495374,
	-6588668,
	-5102927,
	-753403,
	4644861,
	7677973,
	5490212,
	-1618066,
	-9302333,
	-11445730,
	-4732005,
	7709057,
	17063964,
	14699335,
	-457541,
	-18980508,
	-26202607,
	-13319132,
	13695670,
	35545996,
	32740745,
	1994202,
	-37267233,
	-54079734,
	-29355959,
	25448678,
	71128406,
	67328423,
	5964667,
	-74773313,
	-111583346,
	-62643893,
	52737606,
	154899783,
	153311689,
	16759099,
	-184962926,
	-304661987,
	-201939017,
	160731847,
	673585388,
	1122541471,
	1300561761,
	1122541471,
	673585388,
	160731847,
	-201939017,
	-304661987,
	-184962926,
	16759099,
	153311689,
	154899783,
	52737606,
	-62643893,
	-111583346,
	-74773313,
	5964667,
	67328423,
	71128406,
	25448678,
	-29355959,
	-54079734,
	-37267233,
	1994202,
	32740745,
	35545996,
	13695670,
	-13319132,
	-26202607,
	-18980508,
	-457541,
	14699335,
	17063964,
	7709057,
	-4732005,
	-11445730,
	-9302333,
	-1618066,
	5490212,
	7677973,
	4644861,
	-753403,
	-5102927,
	-6588668,
	-5495374,
	-3291119,
	-1360920,
	-302176,
	44212

};

struct pdm_decim pdm_decim_int32_03_3850_5100_010_095 = {
	3, 93, 1, 3850, 5100, 10, 95, fir_int32_03_3850_5100_010_095
};
