/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * DPU format file for Samsung EXYNOS DPU driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include "decon.h"
#include "dpp.h"
#include "format.h"

static const struct dpu_fmt dpu_formats_list[] = {
	{
		.name = "ARGB8888",
		.fmt = DECON_PIXEL_FORMAT_ARGB_8888,
		.dma_fmt = IDMA_IMG_FORMAT_BGRA8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 32,
		.padding = 0,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 8,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "ABGR8888",
		.fmt = DECON_PIXEL_FORMAT_ABGR_8888,
		.dma_fmt = IDMA_IMG_FORMAT_RGBA8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 32,
		.padding = 0,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 8,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGBA8888",
		.fmt = DECON_PIXEL_FORMAT_RGBA_8888,
		.dma_fmt = IDMA_IMG_FORMAT_ABGR8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 32,
		.padding = 0,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 8,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGRA8888",
		.fmt = DECON_PIXEL_FORMAT_BGRA_8888,
		.dma_fmt = IDMA_IMG_FORMAT_ARGB8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 32,
		.padding = 0,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 8,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "XRGB8888",
		.fmt = DECON_PIXEL_FORMAT_XRGB_8888,
		.dma_fmt = IDMA_IMG_FORMAT_BGRX8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 24,
		.padding = 8,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "XBGR8888",
		.fmt = DECON_PIXEL_FORMAT_XBGR_8888,
		.dma_fmt = IDMA_IMG_FORMAT_RGBX8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 24,
		.padding = 8,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGBX8888",
		.fmt = DECON_PIXEL_FORMAT_RGBX_8888,
		.dma_fmt = IDMA_IMG_FORMAT_XBGR8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 24,
		.padding = 8,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGRX8888",
		.fmt = DECON_PIXEL_FORMAT_BGRX_8888,
		.dma_fmt = IDMA_IMG_FORMAT_XRGB8888,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 24,
		.padding = 8,
		.bpc = 8,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGBA5551",
		.fmt = DECON_PIXEL_FORMAT_RGBA_5551,
		.dma_fmt = IDMA_IMG_FORMAT_ABGR1555,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = 5,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 1,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGRA5551",
		.fmt = DECON_PIXEL_FORMAT_BGRA_5551,
		.dma_fmt = IDMA_IMG_FORMAT_ARGB1555,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = 5,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 1,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "ABGR4444",
		.fmt = DECON_PIXEL_FORMAT_ABGR_4444,
		.dma_fmt = IDMA_IMG_FORMAT_RGBA4444,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = 4,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 4,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGBA4444",
		.fmt = DECON_PIXEL_FORMAT_RGBA_4444,
		.dma_fmt = IDMA_IMG_FORMAT_ABGR4444,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = 4,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 4,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGRA4444",
		.fmt = DECON_PIXEL_FORMAT_BGRA_4444,
		.dma_fmt = IDMA_IMG_FORMAT_ARGB4444,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = 4,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 4,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGB565",
		.fmt = DECON_PIXEL_FORMAT_RGB_565,
		.dma_fmt = IDMA_IMG_FORMAT_RGB565,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = (u8)DPU_UNDEF_BITS_DEPTH,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGR565",
		.fmt = DECON_PIXEL_FORMAT_BGR_565,
		.dma_fmt = IDMA_IMG_FORMAT_BGR565,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8888,
		.bpp = 16,
		.padding = 0,
		.bpc = (u8)DPU_UNDEF_BITS_DEPTH,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "ARGB2101010",
		.fmt = DECON_PIXEL_FORMAT_ARGB_2101010,
		.dma_fmt = IDMA_IMG_FORMAT_ARGB2101010,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8101010,
		.bpp = 32,
		.padding = 0,
		.bpc = 10,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 2,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "ABGR2101010",
		.fmt = DECON_PIXEL_FORMAT_ABGR_2101010,
		.dma_fmt = IDMA_IMG_FORMAT_ABGR2101010,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8101010,
		.bpp = 32,
		.padding = 0,
		.bpc = 10,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 2,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "RGBA1010102",
		.fmt = DECON_PIXEL_FORMAT_RGBA_1010102,
		.dma_fmt = IDMA_IMG_FORMAT_RGBA1010102,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8101010,
		.bpp = 32,
		.padding = 0,
		.bpc = 10,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 2,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "BGRA1010102",
		.fmt = DECON_PIXEL_FORMAT_BGRA_1010102,
		.dma_fmt = IDMA_IMG_FORMAT_BGRA1010102,
		.dpp_fmt = DPP_IMG_FORMAT_ARGB8101010,
		.bpp = 32,
		.padding = 0,
		.bpc = 10,
		.num_planes = 1,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 2,
		.cs = DPU_COLORSPACE_RGB,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "YVU422_3P",	/* not support */
		.fmt = DECON_PIXEL_FORMAT_YVU422_3P,
		.dma_fmt = 0,
		.dpp_fmt = 0,
		.bpp = 16,
		.padding = 0,
		.bpc = 8,
		.num_planes = 3,
		.num_buffers = 3,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV422,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12",
		.fmt = DECON_PIXEL_FORMAT_NV12,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV21",
		.fmt = DECON_PIXEL_FORMAT_NV21,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12M",
		.fmt = DECON_PIXEL_FORMAT_NV12M,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV21M",
		.fmt = DECON_PIXEL_FORMAT_NV21M,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "YUV420",	/* not support */
		.fmt = DECON_PIXEL_FORMAT_YUV420,
		.dma_fmt = 0,
		.dpp_fmt = 0,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 3,
		.num_buffers = 3,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "YVU420",	/* not support */
		.fmt = DECON_PIXEL_FORMAT_YVU420,
		.dma_fmt = 0,
		.dpp_fmt = 0,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 3,
		.num_buffers = 3,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "YUV420M",	/* not support */
		.fmt = DECON_PIXEL_FORMAT_YUV420M,
		.dma_fmt = 0,
		.dpp_fmt = 0,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 3,
		.num_buffers = 3,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "YVU420M",	/* not support */
		.fmt = DECON_PIXEL_FORMAT_YVU420M,
		.dma_fmt = 0,
		.dpp_fmt = 0,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 3,
		.num_buffers = 3,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12N",
		.fmt = DECON_PIXEL_FORMAT_NV12N,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 2,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12N_10B",
		.fmt = DECON_PIXEL_FORMAT_NV12N_10B,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_8P2,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P2,
		.bpp = 15,
		.padding = 0,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12M_P010",
		.fmt = DECON_PIXEL_FORMAT_NV12M_P010,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV21M_P010",
		.fmt = DECON_PIXEL_FORMAT_NV21M_P010,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 2,
		.num_buffers = 2,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12M_S10B",
		.fmt = DECON_PIXEL_FORMAT_NV12M_S10B,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_8P2,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P2,
		.bpp = 15,
		.padding = 0,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV21M_S10B",
		.fmt = DECON_PIXEL_FORMAT_NV21M_S10B,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_8P2,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P2,
		.bpp = 15,
		.padding = 0,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, {
		.name = "NV12_P010",
		.fmt = DECON_PIXEL_FORMAT_NV12_P010,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 2,
		.num_buffers = 1,
		.num_meta_planes = 1,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_NONE,
	}, { /* format for lossless SBWC case */
		.name = "NV12M_SBWC_8B",
		.fmt = DECON_PIXEL_FORMAT_NV12M_SBWC_8B,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	}, {
		.name = "NV12M_SBWC_10B",
		.fmt = DECON_PIXEL_FORMAT_NV12M_SBWC_10B,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	}, {
		.name = "NV21M_SBWC_8B",
		.fmt = DECON_PIXEL_FORMAT_NV21M_SBWC_8B,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	}, {
		.name = "NV21M_SBWC_10B",
		.fmt = DECON_PIXEL_FORMAT_NV21M_SBWC_10B,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 2,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	}, {
		.name = "NV12N_SBWC_8B",
		.fmt = DECON_PIXEL_FORMAT_NV12N_SBWC_8B,
		.dma_fmt = IDMA_IMG_FORMAT_YVU420_2P,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_8P,
		.bpp = 12,
		.padding = 0,
		.bpc = 8,
		.num_planes = 4,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	}, {
		.name = "NV12N_SBWC_10B",
		.fmt = DECON_PIXEL_FORMAT_NV12N_SBWC_10B,
		.dma_fmt = IDMA_IMG_FORMAT_YUV420_P010,
		.dpp_fmt = DPP_IMG_FORMAT_YUV420_P010,
		.bpp = 15,
		.padding = 9,
		.bpc = 10,
		.num_planes = 4,
		.num_buffers = 1,
		.num_meta_planes = 0,
		.len_alpha = 0,
		.cs = DPU_COLORSPACE_YUV420,
		.ct = COMP_TYPE_SBWC,
	},
};

const struct dpu_fmt *dpu_find_fmt_info(enum decon_pixel_format fmt)
{
	int i;
	const struct dpu_fmt *fmt_info;

	for (i = 0; i < ARRAY_SIZE(dpu_formats_list); i++)
		if (dpu_formats_list[i].fmt == fmt)
			return &dpu_formats_list[i];

	fmt_info = dpu_find_cal_fmt_info(fmt);
	if (!IS_ERR_OR_NULL(fmt_info))
		return fmt_info;

	decon_err("%s: can't find format(%d) in the list -> apply ARGB8888\n",
			__func__, fmt);
	return &dpu_formats_list[0];
}
