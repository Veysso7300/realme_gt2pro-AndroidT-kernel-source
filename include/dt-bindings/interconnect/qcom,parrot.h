/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_PARROT_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_PARROT_H

#define MASTER_GPU_TCU				0
#define MASTER_SYS_TCU				1
#define MASTER_APPSS_PROC				2
#define MASTER_LLCC				3
#define MASTER_CNOC_LPASS_AG_NOC				4
#define MASTER_GIC_AHB				5
#define MASTER_CDSP_NOC_CFG				6
#define MASTER_QDSS_BAM				7
#define MASTER_QSPI_0				8
#define MASTER_QUP_0				9
#define MASTER_QUP_1				10
#define MASTER_A1NOC_CFG				11
#define MASTER_A2NOC_CFG				12
#define MASTER_A1NOC_SNOC				13
#define MASTER_A2NOC_SNOC				14
#define MASTER_CAMNOC_HF				15
#define MASTER_CAMNOC_ICP				16
#define MASTER_CAMNOC_SF				17
#define MASTER_CNOC2_CNOC3				18
#define MASTER_CNOC3_CNOC2				19
#define MASTER_CNOC_A2NOC				20
#define MASTER_GEM_NOC_CNOC				21
#define MASTER_GEM_NOC_PCIE_SNOC				22
#define MASTER_GFX3D				23
#define MASTER_LPASS_ANOC				24
#define MASTER_MDP				25
#define MASTER_MSS_PROC				26
#define MASTER_CNOC_MNOC_CFG				27
#define MASTER_MNOC_HF_MEM_NOC				28
#define MASTER_MNOC_SF_MEM_NOC				29
#define MASTER_COMPUTE_NOC				30
#define MASTER_ANOC_PCIE_GEM_NOC				31
#define MASTER_PCIE_ANOC_CFG				32
#define MASTER_SNOC_CFG				33
#define MASTER_SNOC_GC_MEM_NOC				34
#define MASTER_SNOC_SF_MEM_NOC				35
#define MASTER_VIDEO_P0				36
#define MASTER_VIDEO_PROC				37
#define MASTER_QUP_CORE_0				38
#define MASTER_QUP_CORE_1				39
#define MASTER_CRYPTO				40
#define MASTER_IPA				41
#define MASTER_LPASS_PROC				42
#define MASTER_CDSP_PROC				43
#define MASTER_PIMEM				44
#define MASTER_TME				45
#define MASTER_WLAN_Q6				46
#define MASTER_GIC				47
#define MASTER_PCIE_0				48
#define MASTER_QDSS_DAP				49
#define MASTER_QDSS_ETR				50
#define MASTER_QDSS_ETR_1				51
#define MASTER_SDCC_1				52
#define MASTER_SDCC_2				53
#define MASTER_UFS_MEM				54
#define MASTER_USB3_0				55
#define SLAVE_EBI1				512
#define SLAVE_AHB2PHY_SOUTH				513
#define SLAVE_AHB2PHY_NORTH				514
#define SLAVE_ANOC_THROTTLE_CFG				515
#define SLAVE_AOSS				516
#define SLAVE_APPSS				517
#define SLAVE_CAMERA_CFG				518
#define SLAVE_CLK_CTL				519
#define SLAVE_CDSP_CFG				520
#define SLAVE_RBCPR_CX_CFG				521
#define SLAVE_RBCPR_MX_CFG				522
#define SLAVE_CRYPTO_0_CFG				523
#define SLAVE_CX_RDPM				524
#define SLAVE_DISPLAY_CFG				525
#define SLAVE_GFX3D_CFG				526
#define SLAVE_IMEM_CFG				527
#define SLAVE_IPA_CFG				528
#define SLAVE_IPC_ROUTER_CFG				529
#define SLAVE_LPASS				530
#define SLAVE_LPASS_CORE_CFG				531
#define SLAVE_LPASS_LPI_CFG				532
#define SLAVE_LPASS_MPU_CFG				533
#define SLAVE_LPASS_TOP_CFG				534
#define SLAVE_CNOC_MSS				535
#define SLAVE_MX_RDPM				536
#define SLAVE_PCIE_0_CFG				537
#define SLAVE_PDM				538
#define SLAVE_PIMEM_CFG				539
#define SLAVE_PMU_WRAPPER_CFG				540
#define SLAVE_PRNG				541
#define SLAVE_QDSS_CFG				542
#define SLAVE_QSPI_0				543
#define SLAVE_QUP_0				544
#define SLAVE_QUP_1				545
#define SLAVE_SDC1				546
#define SLAVE_SDCC_2				547
#define SLAVE_TCSR				548
#define SLAVE_TLMM				549
#define SLAVE_TME_CFG				550
#define SLAVE_UFS_MEM_CFG				551
#define SLAVE_USB3_0				552
#define SLAVE_VENUS_CFG				553
#define SLAVE_VSENSE_CTRL_CFG				554
#define SLAVE_WLAN				555
#define SLAVE_A1NOC_CFG				556
#define SLAVE_A1NOC_SNOC				557
#define SLAVE_A2NOC_CFG				558
#define SLAVE_A2NOC_SNOC				559
#define SLAVE_CNOC2_CNOC3				560
#define SLAVE_CNOC3_CNOC2				561
#define SLAVE_CNOC_A2NOC				562
#define SLAVE_GEM_NOC_CNOC				563
#define SLAVE_SNOC_GEM_NOC_GC				564
#define SLAVE_SNOC_GEM_NOC_SF				565
#define SLAVE_LLCC				566
#define SLAVE_MNOC_HF_MEM_NOC				567
#define SLAVE_MNOC_SF_MEM_NOC				568
#define SLAVE_CNOC_MNOC_CFG				569
#define SLAVE_CDSP_MEM_NOC				570
#define SLAVE_MEM_NOC_PCIE_SNOC				571
#define SLAVE_PCIE_ANOC_CFG				572
#define SLAVE_ANOC_PCIE_GEM_NOC				573
#define SLAVE_SNOC_CFG				574
#define SLAVE_LPASS_SNOC				575
#define SLAVE_QUP_CORE_0				576
#define SLAVE_QUP_CORE_1				577
#define SLAVE_BOOT_IMEM				578
#define SLAVE_IMEM				579
#define SLAVE_PIMEM				580
#define SLAVE_SERVICE_NSP_NOC				581
#define SLAVE_SERVICE_A1NOC				582
#define SLAVE_SERVICE_A2NOC				583
#define SLAVE_SERVICE_MNOC				584
#define SLAVE_SERVICES_LPASS_AML_NOC				585
#define SLAVE_SERVICE_LPASS_AG_NOC				586
#define SLAVE_SERVICE_PCIE_ANOC				587
#define SLAVE_SERVICE_SNOC				588
#define SLAVE_PCIE_0				589
#define SLAVE_QDSS_STM				590
#define SLAVE_TCU				591
#define MASTER_LLCC_DISP				1000
#define MASTER_MDP_DISP				1001
#define MASTER_MNOC_HF_MEM_NOC_DISP				1002
#define MASTER_ANOC_PCIE_GEM_NOC_DISP				1003
#define SLAVE_EBI1_DISP				1512
#define SLAVE_LLCC_DISP				1513
#define SLAVE_MNOC_HF_MEM_NOC_DISP				1514

#endif
