/*
 * Copyright 2010 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * Copyright (c) 2008 Atheros Communications Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef	_ARN_HW_H
#define	_ARN_HW_H

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(1)
struct ar5416_desc {
	uint32_t ds_link;
	uint32_t ds_data;
	uint32_t ds_ctl0;
	uint32_t ds_ctl1;
	union {
		struct {
			uint32_t ctl2;
			uint32_t ctl3;
			uint32_t ctl4;
			uint32_t ctl5;
			uint32_t ctl6;
			uint32_t ctl7;
			uint32_t ctl8;
			uint32_t ctl9;
			uint32_t ctl10;
			uint32_t ctl11;
			uint32_t status0;
			uint32_t status1;
			uint32_t status2;
			uint32_t status3;
			uint32_t status4;
			uint32_t status5;
			uint32_t status6;
			uint32_t status7;
			uint32_t status8;
			uint32_t status9;
		} tx;
		struct {
			uint32_t status0;
			uint32_t status1;
			uint32_t status2;
			uint32_t status3;
			uint32_t status4;
			uint32_t status5;
			uint32_t status6;
			uint32_t status7;
			uint32_t status8;
		} rx;
	} u;
};
#pragma pack()

#define	AR5416DESC(_ds)		((struct ar5416_desc *)(_ds))
#define	AR5416DESC_CONST(_ds)	((const struct ar5416_desc *)(_ds))

#define	ds_ctl2		u.tx.ctl2
#define	ds_ctl3		u.tx.ctl3
#define	ds_ctl4		u.tx.ctl4
#define	ds_ctl5		u.tx.ctl5
#define	ds_ctl6		u.tx.ctl6
#define	ds_ctl7		u.tx.ctl7
#define	ds_ctl8		u.tx.ctl8
#define	ds_ctl9		u.tx.ctl9
#define	ds_ctl10	u.tx.ctl10
#define	ds_ctl11	u.tx.ctl11

#define	ds_txstatus0	u.tx.status0
#define	ds_txstatus1	u.tx.status1
#define	ds_txstatus2	u.tx.status2
#define	ds_txstatus3	u.tx.status3
#define	ds_txstatus4	u.tx.status4
#define	ds_txstatus5	u.tx.status5
#define	ds_txstatus6	u.tx.status6
#define	ds_txstatus7	u.tx.status7
#define	ds_txstatus8	u.tx.status8
#define	ds_txstatus9	u.tx.status9

#define	ds_rxstatus0	u.rx.status0
#define	ds_rxstatus1	u.rx.status1
#define	ds_rxstatus2	u.rx.status2
#define	ds_rxstatus3	u.rx.status3
#define	ds_rxstatus4	u.rx.status4
#define	ds_rxstatus5	u.rx.status5
#define	ds_rxstatus6	u.rx.status6
#define	ds_rxstatus7	u.rx.status7
#define	ds_rxstatus8	u.rx.status8

#define	AR_FrameLen	0x00000fff
#define	AR_VirtMoreFrag	0x00001000
#define	AR_TxCtlRsvd00	0x0000e000
#define	AR_XmitPower	0x003f0000
#define	AR_XmitPower_S	16
#define	AR_RTSEnable	0x00400000
#define	AR_VEOL		0x00800000
#define	AR_ClrDestMask	0x01000000
#define	AR_TxCtlRsvd01	0x1e000000
#define	AR_TxIntrReq	0x20000000
#define	AR_DestIdxValid	0x40000000
#define	AR_CTSEnable	0x80000000

#define	AR_BufLen		0x00000fff
#define	AR_TxMore		0x00001000
#define	AR_DestIdx		0x000fe000
#define	AR_DestIdx_S		13
#define	AR_FrameType		0x00f00000
#define	AR_FrameType_S		20
#define	AR_NoAck		0x01000000
#define	AR_InsertTS		0x02000000
#define	AR_CorruptFCS		0x04000000
#define	AR_ExtOnly		0x08000000
#define	AR_ExtAndCtl		0x10000000
#define	AR_MoreAggr		0x20000000
#define	AR_IsAggr		0x40000000

#define	AR_BurstDur		0x00007fff
#define	AR_BurstDur_S		0
#define	AR_DurUpdateEna		0x00008000
#define	AR_XmitDataTries0	0x000f0000
#define	AR_XmitDataTries0_S	16
#define	AR_XmitDataTries1	0x00f00000
#define	AR_XmitDataTries1_S	20
#define	AR_XmitDataTries2	0x0f000000
#define	AR_XmitDataTries2_S	24
#define	AR_XmitDataTries3	0xf0000000
#define	AR_XmitDataTries3_S	28

#define	AR_XmitRate0		0x000000ff
#define	AR_XmitRate0_S		0
#define	AR_XmitRate1		0x0000ff00
#define	AR_XmitRate1_S		8
#define	AR_XmitRate2		0x00ff0000
#define	AR_XmitRate2_S		16
#define	AR_XmitRate3		0xff000000
#define	AR_XmitRate3_S		24

#define	AR_PacketDur0		0x00007fff
#define	AR_PacketDur0_S		0
#define	AR_RTSCTSQual0		0x00008000
#define	AR_PacketDur1		0x7fff0000
#define	AR_PacketDur1_S		16
#define	AR_RTSCTSQual1		0x80000000

#define	AR_PacketDur2		0x00007fff
#define	AR_PacketDur2_S		0
#define	AR_RTSCTSQual2		0x00008000
#define	AR_PacketDur3		0x7fff0000
#define	AR_PacketDur3_S		16
#define	AR_RTSCTSQual3		0x80000000

#define	AR_AggrLen		0x0000ffff
#define	AR_AggrLen_S		0
#define	AR_TxCtlRsvd60		0x00030000
#define	AR_PadDelim		0x03fc0000
#define	AR_PadDelim_S		18
#define	AR_EncrType		0x0c000000
#define	AR_EncrType_S		26
#define	AR_TxCtlRsvd61		0xf0000000

#define	AR_2040_0		0x00000001
#define	AR_GI0			0x00000002
#define	AR_ChainSel0		0x0000001c
#define	AR_ChainSel0_S		2
#define	AR_2040_1		0x00000020
#define	AR_GI1			0x00000040
#define	AR_ChainSel1		0x00000380
#define	AR_ChainSel1_S		7
#define	AR_2040_2		0x00000400
#define	AR_GI2			0x00000800
#define	AR_ChainSel2		0x00007000
#define	AR_ChainSel2_S		12
#define	AR_2040_3		0x00008000
#define	AR_GI3			0x00010000
#define	AR_ChainSel3		0x000e0000
#define	AR_ChainSel3_S		17
#define	AR_RTSCTSRate		0x0ff00000
#define	AR_RTSCTSRate_S		20
#define	AR_TxCtlRsvd70		0xf0000000

#define	AR_TxRSSIAnt00		0x000000ff
#define	AR_TxRSSIAnt00_S	0
#define	AR_TxRSSIAnt01		0x0000ff00
#define	AR_TxRSSIAnt01_S	8
#define	AR_TxRSSIAnt02		0x00ff0000
#define	AR_TxRSSIAnt02_S	16
#define	AR_TxStatusRsvd00	0x3f000000
#define	AR_TxBaStatus		0x40000000
#define	AR_TxStatusRsvd01	0x80000000

#define	AR_FrmXmitOK		0x00000001
#define	AR_ExcessiveRetries	0x00000002
#define	AR_FIFOUnderrun		0x00000004
#define	AR_Filtered		0x00000008
#define	AR_RTSFailCnt		0x000000f0
#define	AR_RTSFailCnt_S		4
#define	AR_DataFailCnt		0x00000f00
#define	AR_DataFailCnt_S	8
#define	AR_VirtRetryCnt		0x0000f000
#define	AR_VirtRetryCnt_S	12
#define	AR_TxDelimUnderrun	0x00010000
#define	AR_TxDataUnderrun	0x00020000
#define	AR_DescCfgErr		0x00040000
#define	AR_TxTimerExpired	0x00080000
#define	AR_TxStatusRsvd10	0xfff00000

#define	AR_SendTimestamp	ds_txstatus2
#define	AR_BaBitmapLow		ds_txstatus3
#define	AR_BaBitmapHigh		ds_txstatus4

#define	AR_TxRSSIAnt10		0x000000ff
#define	AR_TxRSSIAnt10_S	0
#define	AR_TxRSSIAnt11		0x0000ff00
#define	AR_TxRSSIAnt11_S	8
#define	AR_TxRSSIAnt12		0x00ff0000
#define	AR_TxRSSIAnt12_S	16
#define	AR_TxRSSICombined	0xff000000
#define	AR_TxRSSICombined_S	24

#define	AR_TxEVM0		ds_txstatus5
#define	AR_TxEVM1		ds_txstatus6
#define	AR_TxEVM2		ds_txstatus7

#define	AR_TxDone		0x00000001
#define	AR_SeqNum		0x00001ffe
#define	AR_SeqNum_S		1
#define	AR_TxStatusRsvd80	0x0001e000
#define	AR_TxOpExceeded		0x00020000
#define	AR_TxStatusRsvd81	0x001c0000
#define	AR_FinalTxIdx		0x00600000
#define	AR_FinalTxIdx_S		21
#define	AR_TxStatusRsvd82	0x01800000
#define	AR_PowerMgmt		0x02000000
#define	AR_TxStatusRsvd83	0xfc000000

#define	AR_RxCTLRsvd00		0xffffffff

#define	AR_BufLen		0x00000fff
#define	AR_RxCtlRsvd00		0x00001000
#define	AR_RxIntrReq		0x00002000
#define	AR_RxCtlRsvd01		0xffffc000

#define	AR_RxRSSIAnt00		0x000000ff
#define	AR_RxRSSIAnt00_S	0
#define	AR_RxRSSIAnt01		0x0000ff00
#define	AR_RxRSSIAnt01_S	8
#define	AR_RxRSSIAnt02		0x00ff0000
#define	AR_RxRSSIAnt02_S	16
#define	AR_RxRate		0xff000000
#define	AR_RxRate_S		24
#define	AR_RxStatusRsvd00	0xff000000

#define	AR_DataLen		0x00000fff
#define	AR_RxMore		0x00001000
#define	AR_NumDelim		0x003fc000
#define	AR_NumDelim_S		14
#define	AR_RxStatusRsvd10	0xff800000

#define	AR_RcvTimestamp		ds_rxstatus2

#define	AR_GI			0x00000001
#define	AR_2040			0x00000002
#define	AR_Parallel40		0x00000004
#define	AR_Parallel40_S		2
#define	AR_RxStatusRsvd30	0x000000f8
#define	AR_RxAntenna		0xffffff00
#define	AR_RxAntenna_S		8

#define	AR_RxRSSIAnt10		0x000000ff
#define	AR_RxRSSIAnt10_S	0
#define	AR_RxRSSIAnt11		0x0000ff00
#define	AR_RxRSSIAnt11_S	8
#define	AR_RxRSSIAnt12		0x00ff0000
#define	AR_RxRSSIAnt12_S	16
#define	AR_RxRSSICombined	0xff000000
#define	AR_RxRSSICombined_S	24

#define	AR_RxEVM0		ds_rxstatus4
#define	AR_RxEVM1		ds_rxstatus5
#define	AR_RxEVM2		ds_rxstatus6

#define	AR_RxDone		0x00000001
#define	AR_RxFrameOK		0x00000002
#define	AR_CRCErr		0x00000004
#define	AR_DecryptCRCErr	0x00000008
#define	AR_PHYErr		0x00000010
#define	AR_MichaelErr		0x00000020
#define	AR_PreDelimCRCErr	0x00000040
#define	AR_RxStatusRsvd70	0x00000080
#define	AR_RxKeyIdxValid	0x00000100
#define	AR_KeyIdx		0x0000fe00
#define	AR_KeyIdx_S		9
#define	AR_PHYErrCode		0x0000ff00
#define	AR_PHYErrCode_S		8
#define	AR_RxMoreAggr		0x00010000
#define	AR_RxAggr		0x00020000
#define	AR_PostDelimCRCErr	0x00040000
#define	AR_RxStatusRsvd71	0x3ff80000
#define	AR_DecryptBusyErr	0x40000000
#define	AR_KeyMiss		0x80000000

#define	AR5416_MAGIC	0x19641014

#define	RXSTATUS_RATE(ah, ads)	(AR_SREV_5416_V20_OR_LATER(ah) ?	\
	MS(ads->ds_rxstatus0, AR_RxRate) :				\
	(ads->ds_rxstatus3 >> 2) & 0xFF)

#define	set11nTries(_series, _index)	\
	(SM((_series)[_index].Tries, AR_XmitDataTries##_index))

#define	set11nRate(_series, _index)	\
	(SM((_series)[_index].Rate, AR_XmitRate##_index))

#define	set11nPktDurRTSCTS(_series, _index)				\
	(SM((_series)[_index].PktDuration, AR_PacketDur##_index) |	\
	((_series)[_index].RateFlags & ATH9K_RATESERIES_RTS_CTS   ?	\
	    AR_RTSCTSQual##_index : 0))

#define	set11nRateFlags(_series, _index)				\
	(((_series)[_index].RateFlags & ATH9K_RATESERIES_2040 ?		\
	    AR_2040_##_index : 0)					\
	|((_series)[_index].RateFlags & ATH9K_RATESERIES_HALFGI ?	\
	    AR_GI##_index : 0)						\
	|SM((_series)[_index].ChSel, AR_ChainSel##_index))

#define	AR_SREV_9100(ah)	((ah->ah_macVersion) == AR_SREV_VERSION_9100)

#define	INIT_CONFIG_STATUS	0x00000000
#define	INIT_RSSI_THR		0x00000700
#define	INIT_BCON_CNTRL_REG	0x00000000

#define	MIN_TX_FIFO_THRESHOLD	0x1
#define	MAX_TX_FIFO_THRESHOLD	((4096 / 64) - 1)
#define	INIT_TX_FIFO_THRESHOLD	MIN_TX_FIFO_THRESHOLD

struct ar5416AniState {
	struct ath9k_channel c;
	uint8_t noiseImmunityLevel;
	uint8_t spurImmunityLevel;
	uint8_t firstepLevel;
	uint8_t ofdmWeakSigDetectOff;
	uint8_t cckWeakSigThreshold;
	uint32_t listenTime;
	uint32_t ofdmTrigHigh;
	uint32_t ofdmTrigLow;
	int32_t cckTrigHigh;
	int32_t cckTrigLow;
	int32_t rssiThrLow;
	int32_t rssiThrHigh;
	uint32_t noiseFloor;
	uint32_t txFrameCount;
	uint32_t rxFrameCount;
	uint32_t cycleCount;
	uint32_t ofdmPhyErrCount;
	uint32_t cckPhyErrCount;
	uint32_t ofdmPhyErrBase;
	uint32_t cckPhyErrBase;
	int16_t pktRssi[2];
	int16_t ofdmErrRssi[2];
	int16_t cckErrRssi[2];
};

#define	HAL_PROCESS_ANI	0x00000001
#define	DO_ANI(ah) \
	((AH5416(ah)->ah_procPhyErr & HAL_PROCESS_ANI))

struct ar5416Stats {
	uint32_t ast_ani_niup;
	uint32_t ast_ani_nidown;
	uint32_t ast_ani_spurup;
	uint32_t ast_ani_spurdown;
	uint32_t ast_ani_ofdmon;
	uint32_t ast_ani_ofdmoff;
	uint32_t ast_ani_cckhigh;
	uint32_t ast_ani_ccklow;
	uint32_t ast_ani_stepup;
	uint32_t ast_ani_stepdown;
	uint32_t ast_ani_ofdmerrs;
	uint32_t ast_ani_cckerrs;
	uint32_t ast_ani_reset;
	uint32_t ast_ani_lzero;
	uint32_t ast_ani_lneg;
	struct ath9k_mib_stats ast_mibstats;
	struct ath9k_node_stats ast_nodestats;
};

#define	AR5416_OPFLAGS_11A		0x01
#define	AR5416_OPFLAGS_11G		0x02
#define	AR5416_OPFLAGS_N_5G_HT40	0x04
#define	AR5416_OPFLAGS_N_2G_HT40	0x08
#define	AR5416_OPFLAGS_N_5G_HT20	0x10
#define	AR5416_OPFLAGS_N_2G_HT20	0x20

#define	EEP_RFSILENT_ENABLED		0x0001
#define	EEP_RFSILENT_ENABLED_S		0
#define	EEP_RFSILENT_POLARITY		0x0002
#define	EEP_RFSILENT_POLARITY_S		1
#define	EEP_RFSILENT_GPIO_SEL		0x001c
#define	EEP_RFSILENT_GPIO_SEL_S		2

#define	AR5416_EEP_NO_BACK_VER		0x1
#define	AR5416_EEP_VER			0xE
#define	AR5416_EEP_VER_MINOR_MASK	0x0FFF
#define	AR5416_EEP_MINOR_VER_2		0x2
#define	AR5416_EEP_MINOR_VER_3		0x3
#define	AR5416_EEP_MINOR_VER_7		0x7
#define	AR5416_EEP_MINOR_VER_9		0x9
#define	AR5416_EEP_MINOR_VER_16		0x10
#define	AR5416_EEP_MINOR_VER_17		0x11
#define	AR5416_EEP_MINOR_VER_19		0x13
/* 2.6.30 */
#define	AR5416_EEP_MINOR_VER_20		0x14
#define	AR5416_EEP_MINOR_VER_22		0x16

#define	AR5416_NUM_5G_CAL_PIERS		8
#define	AR5416_NUM_2G_CAL_PIERS		4
#define	AR5416_NUM_5G_20_TARGET_POWERS	8
#define	AR5416_NUM_5G_40_TARGET_POWERS	8
#define	AR5416_NUM_2G_CCK_TARGET_POWERS	3
#define	AR5416_NUM_2G_20_TARGET_POWERS	4
#define	AR5416_NUM_2G_40_TARGET_POWERS	4
#define	AR5416_NUM_CTLS			24
#define	AR5416_NUM_BAND_EDGES		8
#define	AR5416_NUM_PD_GAINS		4
#define	AR5416_PD_GAINS_IN_MASK		4
#define	AR5416_PD_GAIN_ICEPTS		5
#define	AR5416_EEPROM_MODAL_SPURS	5
#define	AR5416_MAX_RATE_POWER		63
#define	AR5416_NUM_PDADC_VALUES		128
#define	AR5416_BCHAN_UNUSED		0xFF
#define	AR5416_MAX_PWR_RANGE_IN_HALF_DB	64
#define	AR5416_MAX_CHAINS		3
#define	AR5416_PWR_TABLE_OFFSET		-5

/* Rx gain type values */
#define	AR5416_EEP_RXGAIN_23DB_BACKOFF	0
#define	AR5416_EEP_RXGAIN_13DB_BACKOFF	1
#define	AR5416_EEP_RXGAIN_ORIG		2

/* Tx gain type values */
#define	AR5416_EEP_TXGAIN_ORIGINAL	0
#define	AR5416_EEP_TXGAIN_HIGH_POWER	1

#define	AR5416_EEP4K_START_LOC					64
#define	AR5416_EEP4K_NUM_2G_CAL_PIERS			3
#define	AR5416_EEP4K_NUM_2G_CCK_TARGET_POWERS	3
#define	AR5416_EEP4K_NUM_2G_20_TARGET_POWERS	3
#define	AR5416_EEP4K_NUM_2G_40_TARGET_POWERS	3
#define	AR5416_EEP4K_NUM_CTLS					12
#define	AR5416_EEP4K_NUM_BAND_EDGES				4
#define	AR5416_EEP4K_NUM_PD_GAINS				2
#define	AR5416_EEP4K_PD_GAINS_IN_MASK			4
#define	AR5416_EEP4K_PD_GAIN_ICEPTS				5
#define	AR5416_EEP4K_MAX_CHAINS					1

enum eeprom_param {
	EEP_NFTHRESH_5 = 0,
	EEP_NFTHRESH_2,
	EEP_MAC_MSW,
	EEP_MAC_MID,
	EEP_MAC_LSW,
	EEP_REG_0,
	EEP_REG_1,
	EEP_OP_CAP,
	EEP_OP_MODE,
	EEP_RF_SILENT,
	EEP_OB_5,
	EEP_DB_5,
	EEP_OB_2,
	EEP_DB_2,
	EEP_MINOR_REV,
	EEP_TX_MASK,
	EEP_RX_MASK,
	EEP_RXGAIN_TYPE,
	EEP_TXGAIN_TYPE,
	EEP_OL_PWRCTRL,
	EEP_RC_CHAIN_MASK,
	EEP_DAC_HPWR_5G,
	EEP_FRAC_N_5G,
	EEP_MAC_0 = AR_EEPROM_MAC(0),
	EEP_MAC_1 = AR_EEPROM_MAC(1),
	EEP_MAC_2 = AR_EEPROM_MAC(2)
};

enum ar5416_rates {
	rate6mb, rate9mb, rate12mb, rate18mb,
	rate24mb, rate36mb, rate48mb, rate54mb,
	rate1l, rate2l, rate2s, rate5_5l,
	rate5_5s, rate11l, rate11s, rateXr,
	rateHt20_0, rateHt20_1, rateHt20_2, rateHt20_3,
	rateHt20_4, rateHt20_5, rateHt20_6, rateHt20_7,
	rateHt40_0, rateHt40_1, rateHt40_2, rateHt40_3,
	rateHt40_4, rateHt40_5, rateHt40_6, rateHt40_7,
	rateDupCck, rateDupOfdm, rateExtCck, rateExtOfdm,
	Ar5416RateSize
};

enum ath9k_hal_freq_band {
	ATH9K_HAL_FREQ_BAND_5GHZ = 0,
	ATH9K_HAL_FREQ_BAND_2GHZ = 1
};

#pragma pack(1)
/* 2.6.30 */
struct base_eep_header {
	uint16_t length;
	uint16_t checksum;
	uint16_t version;
	uint8_t opCapFlags;
	uint8_t eepMisc;
	uint16_t regDmn[2];
	uint8_t macAddr[6];
	uint8_t rxMask;
	uint8_t txMask;
	uint16_t rfSilent;
	uint16_t blueToothOptions;
	uint16_t deviceCap;
	uint32_t binBuildNumber;
	uint8_t deviceType;
	uint8_t pwdclkind;
	uint8_t futureBase_1[2];
	uint8_t rxGainType;
	uint8_t dacHiPwrMode_5G;
	uint8_t openLoopPwrCntl;
	uint8_t dacLpMode;
	uint8_t txGainType;
	uint8_t rcChainMask;
	uint8_t desiredScaleCCK;
	uint8_t power_table_offset;
	uint8_t frac_n_5g;
	uint8_t futureBase_3[21];
};

struct base_eep_header_4k {
	uint16_t length;
	uint16_t checksum;
	uint16_t version;
	uint8_t opCapFlags;
	uint8_t eepMisc;
	uint16_t regDmn[2];
	uint8_t macAddr[6];
	uint8_t rxMask;
	uint8_t txMask;
	uint16_t rfSilent;
	uint16_t blueToothOptions;
	uint16_t deviceCap;
	uint32_t binBuildNumber;
	uint8_t deviceType;
	uint8_t futureBase[1];
};

struct spur_chan {
	uint16_t spurChan;
	uint8_t spurRangeLow;
	uint8_t spurRangeHigh;
};

struct modal_eep_header {
	uint32_t antCtrlChain[AR5416_MAX_CHAINS];
	uint32_t antCtrlCommon;
	uint8_t antennaGainCh[AR5416_MAX_CHAINS];
	uint8_t switchSettling;
	uint8_t txRxAttenCh[AR5416_MAX_CHAINS];
	uint8_t rxTxMarginCh[AR5416_MAX_CHAINS];
	uint8_t adcDesiredSize;
	uint8_t pgaDesiredSize;
	uint8_t xlnaGainCh[AR5416_MAX_CHAINS];
	uint8_t txEndToXpaOff;
	uint8_t txEndToRxOn;
	uint8_t txFrameToXpaOn;
	uint8_t thresh62;
	uint8_t noiseFloorThreshCh[AR5416_MAX_CHAINS];
	uint8_t xpdGain;
	uint8_t xpd;
	uint8_t iqCalICh[AR5416_MAX_CHAINS];
	uint8_t iqCalQCh[AR5416_MAX_CHAINS];
	uint8_t pdGainOverlap;
	uint8_t ob;
	uint8_t db;
	uint8_t xpaBiasLvl;
	uint8_t pwrDecreaseFor2Chain;
	uint8_t pwrDecreaseFor3Chain;
	uint8_t txFrameToDataStart;
	uint8_t txFrameToPaOn;
	uint8_t ht40PowerIncForPdadc;
	uint8_t bswAtten[AR5416_MAX_CHAINS];
	uint8_t bswMargin[AR5416_MAX_CHAINS];
	uint8_t swSettleHt40;
	uint8_t xatten2Db[AR5416_MAX_CHAINS];
	uint8_t xatten2Margin[AR5416_MAX_CHAINS];
	uint8_t ob_ch1;
	uint8_t db_ch1;
	uint8_t useAnt1:1,
	    force_xpaon:1,
	    local_bias:1,
	    femBandSelectUsed:1, xlnabufin:1, xlnaisel:2, xlnabufmode:1;
	uint8_t futureModalar9280;
	uint16_t xpaBiasLvlFreq[3];
	uint8_t futureModal[6];

	struct spur_chan spurChans[AR5416_EEPROM_MODAL_SPURS];
};

struct modal_eep_4k_header {
    uint32_t  antCtrlChain[AR5416_EEP4K_MAX_CHAINS];
    uint32_t  antCtrlCommon;
    uint8_t   antennaGainCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   switchSettling;
    uint8_t   txRxAttenCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   rxTxMarginCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   adcDesiredSize;
    uint8_t   pgaDesiredSize;
    uint8_t   xlnaGainCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   txEndToXpaOff;
    uint8_t   txEndToRxOn;
    uint8_t   txFrameToXpaOn;
    uint8_t   thresh62;
    uint8_t   noiseFloorThreshCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   xpdGain;
    uint8_t   xpd;
    uint8_t   iqCalICh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   iqCalQCh[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   pdGainOverlap;
    uint8_t   ob_01;
    uint8_t   db1_01;
    uint8_t   xpaBiasLvl;
    uint8_t   txFrameToDataStart;
    uint8_t   txFrameToPaOn;
    uint8_t   ht40PowerIncForPdadc;
    uint8_t   bswAtten[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   bswMargin[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   swSettleHt40;
    uint8_t   xatten2Db[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   xatten2Margin[AR5416_EEP4K_MAX_CHAINS];
    uint8_t   db2_01;
    uint8_t   version;
    uint16_t  ob_234;
    uint16_t  db1_234;
    uint16_t  db2_234;
    uint8_t   futureModal[4];

    struct spur_chan spurChans[AR5416_EEPROM_MODAL_SPURS];
};

struct cal_data_per_freq {
	uint8_t pwrPdg[AR5416_NUM_PD_GAINS][AR5416_PD_GAIN_ICEPTS];
	uint8_t vpdPdg[AR5416_NUM_PD_GAINS][AR5416_PD_GAIN_ICEPTS];
};

struct cal_data_per_freq_4k {
	uint8_t pwrPdg[AR5416_EEP4K_NUM_PD_GAINS][AR5416_EEP4K_PD_GAIN_ICEPTS];
	uint8_t vpdPdg[AR5416_EEP4K_NUM_PD_GAINS][AR5416_EEP4K_PD_GAIN_ICEPTS];
};

struct cal_target_power_leg {
	uint8_t bChannel;
	uint8_t tPow2x[4];
};

struct cal_target_power_ht {
	uint8_t bChannel;
	uint8_t tPow2x[8];
};

#ifdef __BIG_ENDIAN_BITFIELD
struct cal_ctl_edges {
	uint8_t bChannel;
	uint8_t flag:2, tPower:6;
};
#else
struct cal_ctl_edges {
	uint8_t bChannel;
	uint8_t tPower:6, flag:2;
};
#endif

struct cal_ctl_data {
	struct cal_ctl_edges
	    ctlEdges[AR5416_MAX_CHAINS][AR5416_NUM_BAND_EDGES];
};

struct cal_ctl_data_4k {
	struct cal_ctl_edges
	ctlEdges[AR5416_EEP4K_MAX_CHAINS][AR5416_EEP4K_NUM_BAND_EDGES];
};

struct ar5416_eeprom_def {
	struct base_eep_header baseEepHeader;
	uint8_t custData[64];
	struct modal_eep_header modalHeader[2];
	uint8_t calFreqPier5G[AR5416_NUM_5G_CAL_PIERS];
	uint8_t calFreqPier2G[AR5416_NUM_2G_CAL_PIERS];
	struct cal_data_per_freq
	    calPierData5G[AR5416_MAX_CHAINS][AR5416_NUM_5G_CAL_PIERS];
	struct cal_data_per_freq
	    calPierData2G[AR5416_MAX_CHAINS][AR5416_NUM_2G_CAL_PIERS];
	struct cal_target_power_leg
	    calTargetPower5G[AR5416_NUM_5G_20_TARGET_POWERS];
	struct cal_target_power_ht
	    calTargetPower5GHT20[AR5416_NUM_5G_20_TARGET_POWERS];
	struct cal_target_power_ht
	    calTargetPower5GHT40[AR5416_NUM_5G_40_TARGET_POWERS];
	struct cal_target_power_leg
	    calTargetPowerCck[AR5416_NUM_2G_CCK_TARGET_POWERS];
	struct cal_target_power_leg
	    calTargetPower2G[AR5416_NUM_2G_20_TARGET_POWERS];
	struct cal_target_power_ht
	    calTargetPower2GHT20[AR5416_NUM_2G_20_TARGET_POWERS];
	struct cal_target_power_ht
	    calTargetPower2GHT40[AR5416_NUM_2G_40_TARGET_POWERS];
	uint8_t ctlIndex[AR5416_NUM_CTLS];
	struct cal_ctl_data ctlData[AR5416_NUM_CTLS];
	uint8_t padding;
};

struct ar5416_eeprom_4k {
	struct base_eep_header_4k baseEepHeader;
	uint8_t custData[20];
	struct modal_eep_4k_header modalHeader;
	uint8_t calFreqPier2G[AR5416_EEP4K_NUM_2G_CAL_PIERS];
	struct cal_data_per_freq_4k
	calPierData2G[AR5416_EEP4K_MAX_CHAINS][AR5416_EEP4K_NUM_2G_CAL_PIERS];
	struct cal_target_power_leg
	calTargetPowerCck[AR5416_EEP4K_NUM_2G_CCK_TARGET_POWERS];
	struct cal_target_power_leg
	calTargetPower2G[AR5416_EEP4K_NUM_2G_20_TARGET_POWERS];
	struct cal_target_power_ht
	calTargetPower2GHT20[AR5416_EEP4K_NUM_2G_20_TARGET_POWERS];
	struct cal_target_power_ht
	calTargetPower2GHT40[AR5416_EEP4K_NUM_2G_40_TARGET_POWERS];
	uint8_t ctlIndex[AR5416_EEP4K_NUM_CTLS];
	struct cal_ctl_data_4k ctlData[AR5416_EEP4K_NUM_CTLS];
	uint8_t padding;
};
#pragma pack()

struct ar5416IniArray {
	uint32_t *ia_array;
	uint32_t ia_rows;
	uint32_t ia_columns;
};

#define	INIT_INI_ARRAY(iniarray, array, rows, columns) do {	\
		(iniarray)->ia_array = (uint32_t *)(array);		\
		(iniarray)->ia_rows = (rows);			\
		(iniarray)->ia_columns = (columns);		\
		_NOTE(CONSTCOND) \
	} while (0)

#define	INI_RA(iniarray, row, column) \
	(((iniarray)->ia_array)[(row) *	((iniarray)->ia_columns) + (column)])

#define	INIT_CAL(_perCal) do {				\
		(_perCal)->calState = CAL_WAITING;	\
		(_perCal)->calNext = NULL;		\
	} while (0)

#define	INSERT_CAL(_ahp, _perCal)					\
	do {								\
		if ((_ahp)->ah_cal_list_last == NULL) {			\
			(_ahp)->ah_cal_list =				\
				(_ahp)->ah_cal_list_last = (_perCal);	\
			((_ahp)->ah_cal_list_last)->calNext = (_perCal); \
		} else {						\
			((_ahp)->ah_cal_list_last)->calNext = (_perCal); \
			(_ahp)->ah_cal_list_last = (_perCal);		\
			(_perCal)->calNext = (_ahp)->ah_cal_list;	\
		}							\
	} while (0)

enum hal_cal_types {
	ADC_DC_INIT_CAL = 0x1,
	ADC_GAIN_CAL = 0x2,
	ADC_DC_CAL = 0x4,
	IQ_MISMATCH_CAL = 0x8
};

enum hal_cal_state {
	CAL_INACTIVE,
	CAL_WAITING,
	CAL_RUNNING,
	CAL_DONE
};

#define	MIN_CAL_SAMPLES		1
#define	MAX_CAL_SAMPLES		64
#define	INIT_LOG_COUNT		5
#define	PER_MIN_LOG_COUNT	2
#define	PER_MAX_LOG_COUNT	10

struct hal_percal_data {
	enum hal_cal_types calType;
	uint32_t calNumSamples;
	uint32_t calCountMax;
	void (*calCollect) (struct ath_hal *);
	void (*calPostProc) (struct ath_hal *, uint8_t);
};

struct hal_cal_list {
	const struct hal_percal_data *calData;
	enum hal_cal_state calState;
	struct hal_cal_list *calNext;
};

/*
 * Enum to indentify the eeprom mappings
 */
enum hal_eep_map {
	EEP_MAP_DEFAULT = 0x0,
	EEP_MAP_4KBITS,
	EEP_MAP_MAX
};

struct ath_hal_5416 {
	struct ath_hal ah;
	union {
		struct ar5416_eeprom_def def;
		struct ar5416_eeprom_4k map4k;
	} ah_eeprom;
	struct ar5416Stats ah_stats;
	struct ath9k_tx_queue_info ah_txq[ATH9K_NUM_TX_QUEUES];

	uint8_t ah_macaddr[IEEE80211_ADDR_LEN];
	uint8_t ah_bssid[IEEE80211_ADDR_LEN];
	uint8_t ah_bssidmask[IEEE80211_ADDR_LEN];
	uint16_t ah_assocId;

	int16_t ah_curchanRadIndex;
	uint32_t ah_maskReg;
	uint32_t ah_txOkInterruptMask;
	uint32_t ah_txErrInterruptMask;
	uint32_t ah_txDescInterruptMask;
	uint32_t ah_txEolInterruptMask;
	uint32_t ah_txUrnInterruptMask;
	boolean_t ah_chipFullSleep;
	uint32_t ah_atimWindow;
	uint16_t ah_antennaSwitchSwap;
	enum ath9k_power_mode ah_powerMode;
	enum ath9k_ant_setting ah_diversityControl;

	/* Calibration */
	enum hal_cal_types ah_suppCals;
	struct hal_cal_list ah_iqCalData;
	struct hal_cal_list ah_adcGainCalData;
	struct hal_cal_list ah_adcDcCalInitData;
	struct hal_cal_list ah_adcDcCalData;
	struct hal_cal_list *ah_cal_list;
	struct hal_cal_list *ah_cal_list_last;
	struct hal_cal_list *ah_cal_list_curr;
#define	ah_totalPowerMeasI ah_Meas0.unsign
#define	ah_totalPowerMeasQ ah_Meas1.unsign
#define	ah_totalIqCorrMeas ah_Meas2.sign
#define	ah_totalAdcIOddPhase  ah_Meas0.unsign
#define	ah_totalAdcIEvenPhase ah_Meas1.unsign
#define	ah_totalAdcQOddPhase  ah_Meas2.unsign
#define	ah_totalAdcQEvenPhase ah_Meas3.unsign
#define	ah_totalAdcDcOffsetIOddPhase  ah_Meas0.sign
#define	ah_totalAdcDcOffsetIEvenPhase ah_Meas1.sign
#define	ah_totalAdcDcOffsetQOddPhase  ah_Meas2.sign
#define	ah_totalAdcDcOffsetQEvenPhase ah_Meas3.sign
	union {
		uint32_t unsign[AR5416_MAX_CHAINS];
		int32_t sign[AR5416_MAX_CHAINS];
	} ah_Meas0;
	union {
		uint32_t unsign[AR5416_MAX_CHAINS];
		int32_t sign[AR5416_MAX_CHAINS];
	} ah_Meas1;
	union {
		uint32_t unsign[AR5416_MAX_CHAINS];
		int32_t sign[AR5416_MAX_CHAINS];
	} ah_Meas2;
	union {
		uint32_t unsign[AR5416_MAX_CHAINS];
		int32_t sign[AR5416_MAX_CHAINS];
	} ah_Meas3;
	uint16_t ah_CalSamples;

	uint32_t ah_staId1Defaults;
	uint32_t ah_miscMode;
	enum {
		AUTO_32KHZ,
		USE_32KHZ,
		DONT_USE_32KHZ,
	} ah_enable32kHzClock;

	/* RF */
	uint32_t *ah_analogBank0Data;
	uint32_t *ah_analogBank1Data;
	uint32_t *ah_analogBank2Data;
	uint32_t *ah_analogBank3Data;
	uint32_t *ah_analogBank6Data;
	uint32_t *ah_analogBank6TPCData;
	uint32_t *ah_analogBank7Data;
	uint32_t *ah_addac5416_21;
	uint32_t *ah_bank6Temp;

	int16_t ah_txPowerIndexOffset;
	uint32_t ah_beaconInterval;
	uint32_t ah_slottime;
	uint32_t ah_acktimeout;
	uint32_t ah_ctstimeout;
	uint32_t ah_globaltxtimeout;
	uint8_t ah_gBeaconRate;
	uint32_t ah_gpioSelect;
	uint32_t ah_polarity;
	uint32_t ah_gpioBit;

	/* ANI */
	uint32_t ah_procPhyErr;
	boolean_t ah_hasHwPhyCounters;
	uint32_t ah_aniPeriod;
	struct ar5416AniState *ah_curani;
	struct ar5416AniState ah_ani[255];
	int ah_totalSizeDesired[5];
	int ah_coarseHigh[5];
	int ah_coarseLow[5];
	int ah_firpwr[5];
	enum ath9k_ani_cmd ah_ani_function;

	uint32_t ah_intrTxqs;
	boolean_t ah_intrMitigation;
	enum ath9k_ht_extprotspacing ah_extprotspacing;
	uint8_t ah_txchainmask;
	uint8_t ah_rxchainmask;

	struct ar5416IniArray ah_iniModes;
	struct ar5416IniArray ah_iniCommon;
	struct ar5416IniArray ah_iniBank0;
	struct ar5416IniArray ah_iniBB_RfGain;
	struct ar5416IniArray ah_iniBank1;
	struct ar5416IniArray ah_iniBank2;
	struct ar5416IniArray ah_iniBank3;
	struct ar5416IniArray ah_iniBank6;
	struct ar5416IniArray ah_iniBank6TPC;
	struct ar5416IniArray ah_iniBank7;
	struct ar5416IniArray ah_iniAddac;
	struct ar5416IniArray ah_iniPcieSerdes;
	struct ar5416IniArray ah_iniModesAdditional;
	struct ar5416IniArray ah_iniModesRxGain;
	struct ar5416IniArray ah_iniModesTxGain;
	/* To indicate EEPROM mapping used */
	enum hal_eep_map ah_eep_map;
};
#define	AH5416(_ah) ((struct ath_hal_5416 *)(_ah))

#define	FREQ2FBIN(x, y) ((y) ? ((x) - 2300) : (((x) - 4800) / 5))

#define	ar5416RfDetach(ah) do {					\
		if (AH5416(ah)->ah_rfHal.rfDetach != NULL)	\
			AH5416(ah)->ah_rfHal.rfDetach(ah);	\
	} while (0)

#define	ath9k_hw_use_flash(_ah)	\
	(!(_ah->ah_flags & AH_USE_EEPROM))

/* 2.6.30 */
#define	AR5416_VER_MASK	(eep->baseEepHeader.version & AR5416_EEP_VER_MINOR_MASK)
#define	OLC_FOR_AR9280_20_LATER	(AR_SREV_9280_20_OR_LATER(ah) && \
	ath9k_hw_get_eeprom(ah, EEP_OL_PWRCTRL))

#define	DO_DELAY(x) do {			\
		if ((++(x) % 64) == 0)          \
			drv_usecwait(1);	\
	} while (0)

#define	REG_WRITE_ARRAY(iniarray, column, regWr) do {                   \
		int r;							\
		for (r = 0; r < ((iniarray)->ia_rows); r++) {		\
			REG_WRITE(ah, INI_RA((iniarray), (r), 0),	\
			    INI_RA((iniarray), r, (column)));		\
			DO_DELAY(regWr);				\
		}							\
	} while (0)

#define	BASE_ACTIVATE_DELAY		100
#define	RTC_PLL_SETTLE_DELAY		1000
#define	COEF_SCALE_S			24
#define	HT40_CHANNEL_CENTER_SHIFT	10

#define	AR5416_EEPROM_MAGIC_OFFSET	0x0

#define	AR5416_EEPROM_S			2
#define	AR5416_EEPROM_OFFSET		0x2000
#define	AR5416_EEPROM_START_ADDR	\
	(AR_SREV_9100(ah)) ? 0x1fff1000 : 0x503f1200
#define	AR5416_EEPROM_MAX	0xae0
#define	ar5416_get_eep_ver(_ahp)	\
	(((_ahp)->ah_eeprom.def.baseEepHeader.version >> 12) & 0xF)
#define	ar5416_get_eep_rev(_ahp)	\
	(((_ahp)->ah_eeprom.def.baseEepHeader.version) & 0xFFF)
#define	ar5416_get_ntxchains(_txchainmask)	\
	(((_txchainmask >> 2) & 1) +	\
	((_txchainmask >> 1) & 1) + (_txchainmask & 1))

/* EEPROM 4K bit map definations */
#define	ar5416_get_eep4k_ver(_ahp)   \
	(((_ahp)->ah_eeprom.map4k.baseEepHeader.version >> 12) & 0xF)
#define	ar5416_get_eep4k_rev(_ahp)   \
	(((_ahp)->ah_eeprom.map4k.baseEepHeader.version) & 0xFFF)

#ifdef __BIG_ENDIAN
#define	AR5416_EEPROM_MAGIC	0x5aa5
#else
#define	AR5416_EEPROM_MAGIC	0xa55a
#endif

#define	ATH9K_POW_SM(_r, _s)		(((_r) & 0x3f) << (_s))

#define	ATH9K_ANTENNA0_CHAINMASK	0x1
#define	ATH9K_ANTENNA1_CHAINMASK	0x2

#define	ATH9K_NUM_DMA_DEBUG_REGS	8
#define	ATH9K_NUM_QUEUES		10

#define	HAL_NOISE_IMMUNE_MAX		4
#define	HAL_SPUR_IMMUNE_MAX		7
#define	HAL_FIRST_STEP_MAX		2

#define	ATH9K_ANI_OFDM_TRIG_HIGH	500
#define	ATH9K_ANI_OFDM_TRIG_LOW		200
#define	ATH9K_ANI_CCK_TRIG_HIGH		200
#define	ATH9K_ANI_CCK_TRIG_LOW		100
#define	ATH9K_ANI_NOISE_IMMUNE_LVL	4
#define	ATH9K_ANI_USE_OFDM_WEAK_SIG	B_TRUE
#define	ATH9K_ANI_CCK_WEAK_SIG_THR	B_FALSE
#define	ATH9K_ANI_SPUR_IMMUNE_LVL	7
#define	ATH9K_ANI_FIRSTEP_LVL		0
#define	ATH9K_ANI_RSSI_THR_HIGH		40
#define	ATH9K_ANI_RSSI_THR_LOW		7
#define	ATH9K_ANI_PERIOD		100

#define	AR_GPIOD_MASK		0x00001FFF
#define	AR_GPIO_BIT(_gpio)	(1 << (_gpio))

#define	HAL_EP_RND(x, mul)	\
	((((x)%(mul)) >= ((mul)/2)) ? ((x) + ((mul) - 1)) / (mul) : (x)/(mul))
#define	BEACON_RSSI(ahp)	\
	HAL_EP_RND(ahp->ah_stats.ast_nodestats.ns_avgbrssi,	\
	ATH9K_RSSI_EP_MULTIPLIER)

#define	ah_mibStats	ah_stats.ast_mibstats

#define	AH_TIMEOUT	100000
#define	AH_TIME_QUANTUM	10

#define	AR_KEYTABLE_SIZE	128
#define	POWER_UP_TIME		200000

#define	EXT_ADDITIVE	(0x8000)
#define	CTL_11A_EXT	(CTL_11A | EXT_ADDITIVE)
#define	CTL_11G_EXT	(CTL_11G | EXT_ADDITIVE)
#define	CTL_11B_EXT	(CTL_11B | EXT_ADDITIVE)

#define	SUB_NUM_CTL_MODES_AT_5G_40	2
#define	SUB_NUM_CTL_MODES_AT_2G_40	3
#define	SPUR_RSSI_THRESH		40

#define	TU_TO_USEC(_tu)		((_tu) << 10)

#define	CAB_TIMEOUT_VAL		10
#define	BEACON_TIMEOUT_VAL	10
#define	MIN_BEACON_TIMEOUT_VAL	1
#define	SLEEP_SLOP		3

#define	CCK_SIFS_TIME		10
#define	CCK_PREAMBLE_BITS	144
#define	CCK_PLCP_BITS		48

#define	OFDM_SIFS_TIME		16
#define	OFDM_PREAMBLE_TIME	20
#define	OFDM_PLCP_BITS		22
#define	OFDM_SYMBOL_TIME	4

#define	OFDM_SIFS_TIME_HALF	32
#define	OFDM_PREAMBLE_TIME_HALF	40
#define	OFDM_PLCP_BITS_HALF	22
#define	OFDM_SYMBOL_TIME_HALF	8

#define	OFDM_SIFS_TIME_QUARTER		64
#define	OFDM_PREAMBLE_TIME_QUARTER	80
#define	OFDM_PLCP_BITS_QUARTER		22
#define	OFDM_SYMBOL_TIME_QUARTER	16

uint32_t ath9k_hw_get_eeprom(struct ath_hal *ah,
    enum eeprom_param param);

#ifdef	__cplusplus
}
#endif

#endif	/* _ARN_HW_H */
