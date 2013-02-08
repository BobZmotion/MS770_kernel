/* Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#include "msm_fb.h"
#include "mipi_dsi.h"
#include "mipi_hitachi.h"

static struct msm_panel_info pinfo;

#define DSI_BIT_CLK_337MHZ

/*                                              
                                    */
static struct mipi_dsi_phy_ctrl dsi_video_mode_phy_db = {
	/* 480*800, RGB888, 2 Lane 65 fps cmd mode */
#if defined(DSI_BIT_CLK_337MHZ)
	/* regulator */
	{0x03, 0x0a, 0x04, 0x00, 0x20}, /* Fixed values */
	/* timing */
	{0x66, 0x26, 0x15, 0x00, 0x17, 0x8C, 0x1E, 0x8B,
	0x17, 0x03, 0x04, 0xa0},
	/* phy ctrl */
	{0x5f, 0x00, 0x00, 0x10},	/* Fixed values */
	/* strength */
	{0xff, 0x00, 0x06, 0x00},	/* Fixed values */
	/* pll control */
	{0x00, 0x50, 0x01, 0x1a, 0x00, 0x50, 0x48, 0x63,
	0x41, 0x0f, 0x03, 0x00, 0x14, 0x03, 0x00, 0x02,
	0x00, 0x20, 0x00, 0x01 },
#endif
};

static int __init mipi_video_hitachi_wvga_pt_init(void)
{
	int ret;
	printk(KERN_ERR "%s: start!\n", __func__);

#ifdef CONFIG_FB_MSM_MIPI_PANEL_DETECT
	if (msm_fb_detect_client("mipi_video_hitachi_wvga"))
		return 0;
#endif

	pinfo.xres = 480;
	pinfo.yres = 800;
	pinfo.type = MIPI_VIDEO_PANEL;
	pinfo.pdest = DISPLAY_1;
	pinfo.wait_cycle = 0;
	pinfo.bpp = 24;
#if defined(DSI_BIT_CLK_337MHZ)
	pinfo.lcdc.h_back_porch = 20;
	pinfo.lcdc.h_front_porch = 16;
	pinfo.lcdc.h_pulse_width = 4;
	pinfo.lcdc.v_back_porch = 22;
	pinfo.lcdc.v_front_porch = 8;
	pinfo.lcdc.v_pulse_width = 1;
#endif
	pinfo.lcdc.border_clr = 0;			/* blk */
	pinfo.lcdc.underflow_clr = 0xff;	/* blue */
	pinfo.lcdc.hsync_skew = 0;
	pinfo.bl_max = 0x7F;
	pinfo.bl_min = 0;
	pinfo.fb_num = 2;

	pinfo.mipi.mode = DSI_VIDEO_MODE;
	pinfo.mipi.pulse_mode_hsa_he = FALSE;
	pinfo.mipi.hfp_power_stop = TRUE;
	pinfo.mipi.hbp_power_stop = TRUE;
	pinfo.mipi.hsa_power_stop = TRUE;
	pinfo.mipi.eof_bllp_power_stop = TRUE;
	pinfo.mipi.bllp_power_stop = FALSE;
	pinfo.mipi.traffic_mode = DSI_NON_BURST_SYNCH_EVENT;
	pinfo.mipi.dst_format = DSI_VIDEO_DST_FORMAT_RGB888;
	pinfo.mipi.vc = 0;
	pinfo.mipi.rgb_swap = DSI_RGB_SWAP_RGB;
	pinfo.mipi.data_lane0 = TRUE;
	pinfo.mipi.data_lane1 = TRUE;
#if defined(DSI_BIT_CLK_337MHZ)
	pinfo.mipi.t_clk_post = 0x22;
	pinfo.mipi.t_clk_pre = 0x33;
	pinfo.clk_rate = 337000000;
	pinfo.mipi.frame_rate = 65;
#endif
	pinfo.mipi.stream = 0;		/* dma_p */
	pinfo.mipi.mdp_trigger = 0;/* DSI_CMD_TRIGGER_SW; */
	pinfo.mipi.dma_trigger = DSI_CMD_TRIGGER_SW;
	pinfo.mipi.dsi_phy_db = &dsi_video_mode_phy_db;
	ret = mipi_hitachi_device_register(&pinfo, MIPI_DSI_PRIM,
						MIPI_DSI_PANEL_WVGA_PT);
	if (ret)
		printk(KERN_ERR "%s: failed to register device!\n", __func__);

	return ret;
}

module_init(mipi_video_hitachi_wvga_pt_init);
