/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*       @file   include/linux/broadcom/bcm59055/bcm59055-audio.h
*
* Unless you and Broadcom execute a separate written software license agreement
* governing use of this software, this software is licensed to you under the
* terms of the GNU General Public License version 2, available at
* http://www.gnu.org/copyleft/gpl.html (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a license
* other than the GPL, without Broadcom's express prior written consent.
*******************************************************************************/

/*
*
*****************************************************************************
*
* bcm59055-audio.h
*
* PURPOSE:
*
* This file sould be used by user of Audio in Max8986 PMU.
*
* NOTES:
*
* ****************************************************************************/

#ifndef __BCM59055_AUDIO_H__
#define __BCM59055_AUDIO_H__

enum {
	PMU_AUDIO_HS_RIGHT,
	PMU_AUDIO_HS_LEFT,
	PMU_AUDIO_HS_BOTH
};

enum {
	PMU_HS_DIFFERENTIAL_DC_COUPLED,
	PMU_HS_DIFFERENTIAL_AC_COUPLED,
	PMU_HS_SINGLE_ENDED_AC_COUPLED
};

enum {
	PMU_HS_LOW_GAIN,
	PMU_HS_HIGH_GAIN
};

enum {
	PMU_HSGAIN_MUTE,
	PMU_HSGAIN_66DB_N,
	PMU_HSGAIN_63DB_N,
	PMU_HSGAIN_60DB_N,
	PMU_HSGAIN_57DB_N,
	PMU_HSGAIN_54DB_N,
	PMU_HSGAIN_51DB_N,
	PMU_HSGAIN_48DB_N,
	PMU_HSGAIN_45DB_N,
	PMU_HSGAIN_42DB_N,
	PMU_HSGAIN_40P5DB_N,
	PMU_HSGAIN_39DB_N,
	PMU_HSGAIN_37P5DB_N,
	PMU_HSGAIN_36DB_N,
	PMU_HSGAIN_34P5DB_N,
	PMU_HSGAIN_33DB_N,
	PMU_HSGAIN_31P5DB_N,
	PMU_HSGAIN_30DB_N,
	PMU_HSGAIN_28P5DB_N,
	PMU_HSGAIN_27DB_N,
	PMU_HSGAIN_25P5DB_N,
	PMU_HSGAIN_24DB_N,
	PMU_HSGAIN_22P5DB_N,
	PMU_HSGAIN_22DB_N,
	PMU_HSGAIN_21P5DB_N,
	PMU_HSGAIN_21DB_N,
	PMU_HSGAIN_20P5DB_N,
	PMU_HSGAIN_20DB_N,
	PMU_HSGAIN_19P5DB_N,
	PMU_HSGAIN_19DB_N,
	PMU_HSGAIN_18P5DB_N,
	PMU_HSGAIN_18DB_N,
	PMU_HSGAIN_17P5DB_N,
	PMU_HSGAIN_17DB_N,
	PMU_HSGAIN_16P5DB_N,
	PMU_HSGAIN_16DB_N,
	PMU_HSGAIN_15P5DB_N,
	PMU_HSGAIN_15DB_N,
	PMU_HSGAIN_14P5DB_N,
	PMU_HSGAIN_14DB_N,
	PMU_HSGAIN_13P5DB_N,
	PMU_HSGAIN_13DB_N,
	PMU_HSGAIN_12P5DB_N,
	PMU_HSGAIN_12DB_N,
	PMU_HSGAIN_11P5DB_N,
	PMU_HSGAIN_11DB_N,
	PMU_HSGAIN_10P5DB_N,
	PMU_HSGAIN_10DB_N,
	PMU_HSGAIN_9P5DB_N,
	PMU_HSGAIN_9DB_N,
	PMU_HSGAIN_8P5DB_N,
	PMU_HSGAIN_8DB_N,
	PMU_HSGAIN_7P5DB_N,
	PMU_HSGAIN_7DB_N,
	PMU_HSGAIN_6P5DB_N,
	PMU_HSGAIN_6DB_N,
	PMU_HSGAIN_5P5DB_N,
	PMU_HSGAIN_5DB_N,
	PMU_HSGAIN_4P5DB_N,
	PMU_HSGAIN_4DB_N,
	PMU_HSGAIN_3P5DB_N,
	PMU_HSGAIN_3DB_N,
	PMU_HSGAIN_2P5DB_N,
	PMU_HSGAIN_2DB_N,
	PMU_HSGAIN_NUM
};

enum {
	PMU_HSGAIN_SE_MUTE,
	PMU_HSGAIN_SE_60DB_N,
	PMU_HSGAIN_SE_57DB_N,
	PMU_HSGAIN_SE_54DB_N,
	PMU_HSGAIN_SE_51DB_N,
	PMU_HSGAIN_SE_48DB_N,
	PMU_HSGAIN_SE_45DB_N,
	PMU_HSGAIN_SE_42DB_N,
	PMU_HSGAIN_SE_39DB_N,
	PMU_HSGAIN_SE_36DB_N,
	PMU_HSGAIN_SE_34P5DB_N,
	PMU_HSGAIN_SE_33DB_N,
	PMU_HSGAIN_SE_31P5DB_N,
	PMU_HSGAIN_SE_30DB_N,
	PMU_HSGAIN_SE_28P5DB_N,
	PMU_HSGAIN_SE_27DB_N,
	PMU_HSGAIN_SE_25P5DB_N,
	PMU_HSGAIN_SE_24DB_N,
	PMU_HSGAIN_SE_22P5DB_N,
	PMU_HSGAIN_SE_21DB_N,
	PMU_HSGAIN_SE_19P5DB_N,
	PMU_HSGAIN_SE_18DB_N,
	PMU_HSGAIN_SE_16P5DB_N,
	PMU_HSGAIN_SE_16DB_N,
	PMU_HSGAIN_SE_15P5DB_N,
	PMU_HSGAIN_SE_15DB_N,
	PMU_HSGAIN_SE_14P5DB_N,
	PMU_HSGAIN_SE_14DB_N,
	PMU_HSGAIN_SE_13P5DB_N,
	PMU_HSGAIN_SE_13DB_N,
	PMU_HSGAIN_SE_12P5DB_N,
	PMU_HSGAIN_SE_12DB_N,
	PMU_HSGAIN_SE_11P5DB_N,
	PMU_HSGAIN_SE_11DB_N,
	PMU_HSGAIN_SE_10P5DB_N,
	PMU_HSGAIN_SE_10DB_N,
	PMU_HSGAIN_SE_9P5DB_N,
	PMU_HSGAIN_SE_9DB_N,
	PMU_HSGAIN_SE_8P5DB_N,
	PMU_HSGAIN_SE_8DB_N,
	PMU_HSGAIN_SE_7P5DB_N,
	PMU_HSGAIN_SE_7DB_N,
	PMU_HSGAIN_SE_6P5DB_N,
	PMU_HSGAIN_SE_6DB_N,
	PMU_HSGAIN_SE_5P5DB_N,
	PMU_HSGAIN_SE_5DB_N,
	PMU_HSGAIN_SE_4P5DB_N,
	PMU_HSGAIN_SE_4DB_N,
	PMU_HSGAIN_SE_3P5DB_N,
	PMU_HSGAIN_SE_3DB_N,
	PMU_HSGAIN_SE_2P5DB_N,
	PMU_HSGAIN_SE_2DB_N,
	PMU_HSGAIN_SE_1P5DB_N,
	PMU_HSGAIN_SE_1DB_N,
	PMU_HSGAIN_SE_0P5DB_N,
	PMU_HSGAIN_SE_0DB_N,
	PMU_HSGAIN_SE_P5DB_P,
	PMU_HSGAIN_SE_1DB_P,
	PMU_HSGAIN_SE_1P5DB_P,
	PMU_HSGAIN_SE_2DB_P,
	PMU_HSGAIN_SE_2P5DB_P,
	PMU_HSGAIN_SE_3DB_P,
	PMU_HSGAIN_SE_3P5DB_P,
	PMU_HSGAIN_SE_4DB_P
};

enum {
	PMU_IHFGAIN_MUTE,
	PMU_IHFGAIN_60DB_N,
	PMU_IHFGAIN_57DB_N,
	PMU_IHFGAIN_54DB_N,
	PMU_IHFGAIN_51DB_N,
	PMU_IHFGAIN_48DB_N,
	PMU_IHFGAIN_45DB_N,
	PMU_IHFGAIN_42DB_N,
	PMU_IHFGAIN_39DB_N,
	PMU_IHFGAIN_36DB_N,
	PMU_IHFGAIN_34P5DB_N,
	PMU_IHFGAIN_33DB_N,
	PMU_IHFGAIN_31P5DB_N,
	PMU_IHFGAIN_30DB_N,
	PMU_IHFGAIN_28P5DB_N,
	PMU_IHFGAIN_27DB_N,
	PMU_IHFGAIN_25P5DB_N,
	PMU_IHFGAIN_24DB_N,
	PMU_IHFGAIN_22P5DB_N,
	PMU_IHFGAIN_21DB_N,
	PMU_IHFGAIN_19P5DB_N,
	PMU_IHFGAIN_18DB_N,
	PMU_IHFGAIN_16P5DB_N,
	PMU_IHFGAIN_16DB_N,
	PMU_IHFGAIN_15P5DB_N,
	PMU_IHFGAIN_15DB_N,
	PMU_IHFGAIN_14P5DB_N,
	PMU_IHFGAIN_14DB_N,
	PMU_IHFGAIN_13P5DB_N,
	PMU_IHFGAIN_13DB_N,
	PMU_IHFGAIN_12P5DB_N,
	PMU_IHFGAIN_12DB_N,
	PMU_IHFGAIN_11P5DB_N,
	PMU_IHFGAIN_11DB_N,
	PMU_IHFGAIN_10P5DB_N,
	PMU_IHFGAIN_10DB_N,
	PMU_IHFGAIN_9P5DB_N,
	PMU_IHFGAIN_9DB_N,
	PMU_IHFGAIN_8P5DB_N,
	PMU_IHFGAIN_8DB_N,
	PMU_IHFGAIN_7P5DB_N,
	PMU_IHFGAIN_7DB_N,
	PMU_IHFGAIN_6P5DB_N,
	PMU_IHFGAIN_6DB_N,
	PMU_IHFGAIN_5P5DB_N,
	PMU_IHFGAIN_5DB_N,
	PMU_IHFGAIN_4P5DB_N,
	PMU_IHFGAIN_4DB_N,
	PMU_IHFGAIN_3P5DB_N,
	PMU_IHFGAIN_3DB_N,
	PMU_IHFGAIN_2P5DB_N,
	PMU_IHFGAIN_2DB_N,
	PMU_IHFGAIN_1P5DB_N,
	PMU_IHFGAIN_1DB_N,
	PMU_IHFGAIN_P5DB_N,
	PMU_IHFGAIN_0DB,
	PMU_IHFGAIN_P5DB_P,
	PMU_IHFGAIN_1DB_P,
	PMU_IHFGAIN_1P5DB_P,
	PMU_IHFGAIN_2DB_P,
	PMU_IHFGAIN_2P5DB_P,
	PMU_IHFGAIN_3DB_P,
	PMU_IHFGAIN_3P5DB_P,
	PMU_IHFGAIN_4DB_P,
	PMU_IHFGAIN_NUM
};

/* HS/IHF Test Mode */
#define PMU_TEST_READ_AND_ENABLE  0x03
#define PMU_TEST_READ_AND_DISABLE 0x02
#define PMU_TEST_ENABLE_NO_READ   0x01
#define PMU_TEST_DISABLE_NO_READ  0x00

extern int bcm59055_audio_deinit(void);
extern int bcm59055_audio_init(void);
extern int bcm59055_hs_class_sel(bool i2cmethod, bool classAB);
extern int bcm59055_hs_power(bool on);
extern int bcm59055_hs_shortcircuit_en(bool enable);
extern int bcm59055_hs_set_input_mode(int HSgain, int HSInputmode);
extern int bcm59055_hs_sc_thold(int curr);
extern int bcm59055_hs_set_gain(int HSpath, int HSgain);
extern int bcm59055_ihf_power(bool on);
extern int bcm59055_ihf_bypass_en(bool enable);
extern int bcm59055_ihf_set_gain(int IHFGain);

extern int bcm59055_audio_ihf_selftest_stimulus_input(int stimulus);
extern int bcm59055_audio_ihf_selftest_stimulus_output(int stimulus);
extern void bcm59055_audio_ihf_selftest_result(u8 *result);
extern int bcm59055_audio_ihf_testmode(int Mode);
extern int bcm59055_audio_hs_selftest_stimulus(int stimulus);
extern void bcm59055_audio_hs_selftest_result(u8 *result);
extern int bcm59055_audio_hs_testmode(int Mode);

#endif
