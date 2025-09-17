/*******************************************************************************
 * File Name: cycfg_peripherals.c
 *
 * Description:
 * Analog configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.50.0
 * device-db 4.22.0.7873
 * mtb-pdl-cat1 3.16.0.40964
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "cycfg_peripherals.h"

#define PWM_OC_THR_INPUT_DISABLED 0x7U
#define PWM_FAN_INPUT_DISABLED 0x7U

const cy_stc_lpcomp_config_t lpcomp_0_comp_0_config =
{
    .outputMode = CY_LPCOMP_OUT_DIRECT,
    .hysteresis = CY_LPCOMP_HYST_ENABLE,
    .power = CY_LPCOMP_MODE_NORMAL,
    .intType = CY_LPCOMP_INTR_RISING,
};

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t lpcomp_0_comp_0_obj =
{
    .type = CYHAL_RSC_LPCOMP,
    .block_num = 0U,
    .channel_num = 0U,
};
const cyhal_comp_configurator_t lpcomp_0_comp_0_hal_config =
{
    .resource = &lpcomp_0_comp_0_obj,
    .lpcomp = &lpcomp_0_comp_0_config,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_COMP)
const mtb_hal_comp_configurator_t lpcomp_0_comp_0_hal_config =
{
    .resource_type = MTB_HAL_RSC_LPCOMP,
    .channel_num = 0U,
    .lpcomp = &lpcomp_0_comp_0_config,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_COMP) */

const cy_stc_hppass_cfg_t pass_0_config =
{
    .ac =
    {
        .sttEntriesNum = 1U,
        .stt = pass_0_ac_0_stt_0_config,
        .gpioOutEnMsk = 0U,
        .startupClkDiv = 9U,
        .startup =
        {
            {
                .count = 200U,
                .sar = true,
                .csgChan = true,
                .csgSlice = false,
                .csgReady = false,
            },
            {
                .count = 50U,
                .sar = false,
                .csgChan = false,
                .csgSlice = true,
                .csgReady = false,
            },
            {
                .count = 0U,
                .sar = false,
                .csgChan = false,
                .csgSlice = false,
                .csgReady = true,
            },
            {
                .count = 0U,
                .sar = false,
                .csgChan = false,
                .csgSlice = false,
                .csgReady = false,
            },
        },
    },
    .csg = NULL,
    .sar = &pass_0_sar_0_config,
    .trigIn =
    {
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
        {
            .type = CY_HPPASS_TR_DISABLED,
            .hwMode = CY_HPPASS_PULSE_ON_POS_DOUBLE_SYNC,
        },
    },
    .trigPulse =
    {
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
        CY_HPPASS_DISABLED, 
    },
    .trigLevel =
    {
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
        {
            .syncBypass = true,
            .compMsk = 0U,
            .limitMsk = 0U,
        },
    },
};

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t pass_0_adc_hal_obj =
{
    .type = CYHAL_RSC_ADC,
    .block_num = 0U,
    .channel_num = 0U,
};
const cyhal_adc_configurator_t pass_0_adc_hal_config =
{
    .resource = &pass_0_adc_hal_obj,
    .hppass_config = &pass_0_config,
    .clock = NULL,
    .num_channels = 6U,
    .achieved_acquisition_time = NULL,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC)
const mtb_hal_adc_configurator_t pass_0_adc_hal_config =
{
    .base = HPPASS,
    .hppass_config = &pass_0_config,
    .num_channels = 6U,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC) */

const cy_stc_hppass_ac_stt_t pass_0_ac_0_stt_0_config[] =
{
    {
        .condition = CY_HPPASS_CONDITION_FALSE,
        .action = CY_HPPASS_ACTION_STOP,
        .branchStateIdx = 0U,
        .interrupt = false,
        .count = 1U,
        .gpioOutUnlock = false,
        .gpioOutMsk = 0U,
        .csgUnlock = {false, false, false, false, false},
        .csgEnable = {false, false, false, false, false},
        .csgDacTrig = {false, false, false, false, false},
        .sarUnlock = true,
        .sarEnable = true,
        .sarGrpMsk = 0U,
        .sarMux = {{false, 0U}, {false, 0U}, {false, 0U}, {false, 0U}},
    },
};
const cy_stc_hppass_sar_t pass_0_sar_0_config =
{
    .vref = CY_HPPASS_SAR_VREF_VDDA,
    .lowSupply = false,
    .offsetCal = false,
    .linearCal = false,
    .gainCal = false,
    .chanId = false,
    .aroute = true,
    .dirSampEnMsk = 0x22FU,
    .muxSampEnMsk = 0x0U,
    .holdCount = 29U,
    .dirSampGain =
    {
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
    },
    .muxSampGain =
    {
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
        CY_HPPASS_SAR_SAMP_GAIN_1, 
    },
    .sampTime =
    {
        32U, 
        32U, 
        32U, 
    },
    .chan =
    {
        &I_OUT_SEC_P_config, 
        &I_OUT_SEC_N_config, 
        &VOUT_SEC_P_config, 
        &VOUT_SEC_N_config, 
        NULL, 
        &TEMP1_config, 
        NULL, 
        NULL, 
        NULL, 
        &TEMP2_config, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
    },
    .grp =
    {
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
    },
    .limit =
    {
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
        NULL, 
    },
    .muxMode =
    {
        CY_HPPASS_SAR_MUX_SEQ, 
        CY_HPPASS_SAR_MUX_SEQ, 
        CY_HPPASS_SAR_MUX_SEQ, 
        CY_HPPASS_SAR_MUX_SEQ, 
    },
    .fir =
    {
        NULL, 
        NULL, 
    },
    .fifo = NULL,
};
const cy_stc_hppass_sar_chan_t I_OUT_SEC_P_config =
{
    .diff = true,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_DISABLED,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_hppass_sar_chan_t I_OUT_SEC_N_config =
{
    .diff = false,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_DISABLED,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_hppass_sar_chan_t VOUT_SEC_P_config =
{
    .diff = true,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_DISABLED,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_hppass_sar_chan_t VOUT_SEC_N_config =
{
    .diff = false,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_DISABLED,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_hppass_sar_chan_t TEMP1_config =
{
    .diff = false,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_8,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_hppass_sar_chan_t TEMP2_config =
{
    .diff = false,
    .sign = false,
    .avg = CY_HPPASS_SAR_AVG_8,
    .limit = CY_HPPASS_SAR_LIMIT_DISABLED,
    .result = true,
    .fifo = CY_HPPASS_FIFO_DISABLED,
};
const cy_stc_scb_spi_config_t SPI_MASTER_config =
{
    .spiMode = CY_SCB_SPI_MASTER,
    .subMode = CY_SCB_SPI_MOTOROLA,
    .sclkMode = CY_SCB_SPI_CPHA0_CPOL0,
    .parity = CY_SCB_SPI_PARITY_NONE,
    .dropOnParityError = false,
    .oversample = 16,
    .rxDataWidth = 8UL,
    .txDataWidth = 8UL,
    .enableMsbFirst = true,
    .enableInputFilter = false,
    .enableFreeRunSclk = false,
    .enableMisoLateSample = true,
    .enableTransferSeperation = false,
    .ssPolarity = ((CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT0) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT1) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT2) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT3)),
    .ssSetupDelay = false,
    .ssHoldDelay = false,
    .ssInterFrameDelay = false,
    .enableWakeFromSleep = false,
    .rxFifoTriggerLevel = 63UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 63UL,
    .txFifoIntEnableMask = 0UL,
    .masterSlaveIntEnableMask = 0UL,
};

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t SPI_MASTER_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 1U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
const cyhal_clock_t SPI_MASTER_clock =
{
    .block = CYHAL_CLOCK_BLOCK_PERIPHERAL4_8BIT,
    .channel = 0,
#if defined (CY_USING_HAL)
    .reserved = false,
    .funcs = NULL,
#endif /* defined (CY_USING_HAL) */
};
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_spi_configurator_t SPI_MASTER_hal_config =
{
    .resource = &SPI_MASTER_obj,
    .config = &SPI_MASTER_config,
    .clock = &SPI_MASTER_clock,
    .gpios = {.sclk = P2_1, .ssel = {P2_0, NC, NC, NC}, .mosi = P2_2, .miso = P2_3},
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL)
const mtb_hal_peri_div_t SPI_MASTER_clock_ref =
{
    .clk_dst = (en_clk_dst_t)PCLK_SCB1_CLOCK_SCB_EN,
    .div_type = CY_SYSCLK_DIV_8_BIT,
    .div_num = 0,
};
const mtb_hal_clock_t SPI_MASTER_hal_clock =
{
    .clock_ref = &SPI_MASTER_clock_ref,
    .interface = &mtb_hal_clock_peri_interface,
};
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
const mtb_hal_spi_configurator_t SPI_MASTER_hal_config =
{
    .base = SPI_MASTER_HW,
    .clock = &SPI_MASTER_hal_clock,
    .config = &SPI_MASTER_config,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

const cy_stc_scb_i2c_config_t PM_BUS_config =
{
    .i2cMode = CY_SCB_I2C_SLAVE,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 8,
    .slaveAddressMask = 254,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = false,
    .lowPhaseDutyCycle = 0,
    .highPhaseDutyCycle = 0,
};

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t PM_BUS_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 2U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
const cyhal_clock_t PM_BUS_clock =
{
    .block = CYHAL_CLOCK_BLOCK_PERIPHERAL4_8BIT,
    .channel = 1,
#if defined (CY_USING_HAL)
    .reserved = false,
    .funcs = NULL,
#endif /* defined (CY_USING_HAL) */
};
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_i2c_configurator_t PM_BUS_hal_config =
{
    .resource = &PM_BUS_obj,
    .config = &PM_BUS_config,
    .clock = &PM_BUS_clock,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL)
const mtb_hal_peri_div_t PM_BUS_clock_ref =
{
    .clk_dst = (en_clk_dst_t)peri_0_group_4_div_8_1_GRP_NUM,
    .div_type = peri_0_group_4_div_8_1_HW,
    .div_num = peri_0_group_4_div_8_1_NUM,
};
const mtb_hal_clock_t PM_BUS_hal_clock =
{
    .clock_ref = &PM_BUS_clock_ref,
    .interface = &mtb_hal_clock_peri_interface,
};
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C)
const mtb_hal_i2c_configurator_t PM_BUS_hal_config =
{
    .base = PM_BUS_HW,
    .config = &PM_BUS_config,
    .clock = &PM_BUS_hal_clock,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C) */

const cy_stc_tcpwm_pwm_config_t PWM_OC_THR_config =
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_CONTINUOUS,
    .period0 = 1000,
    .period1 = 32768,
    .enablePeriodSwap = false,
    .compare0 = 500,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = (CY_TCPWM_INT_ON_TC & 0U) | (CY_TCPWM_INT_ON_CC0 & 0U) | (CY_TCPWM_INT_ON_CC1 & 0U),
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .swapInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
    .swapOverflowUnderflow = false,
    .immediateKill = false,
    .tapsEnabled = 45,
    .compare2 = 500,
    .compare3 = 16384,
    .enableCompare1Swap = false,
    .compare0MatchUp = true,
    .compare0MatchDown = false,
    .compare1MatchUp = true,
    .compare1MatchDown = false,
    .kill1InputMode = PWM_OC_THR_INPUT_DISABLED & 0x3U,
    .kill1Input = CY_TCPWM_INPUT_0,
    .pwmOnDisable = CY_TCPWM_PWM_OUTPUT_HIGHZ,
    .trigger0Event = CY_TCPWM_CNT_TRIGGER_ON_DISABLED,
    .trigger1Event = CY_TCPWM_CNT_TRIGGER_ON_DISABLED,
    .reloadLineSelect = false,
    .line_out_sel = CY_TCPWM_OUTPUT_PWM_SIGNAL,
    .linecompl_out_sel = CY_TCPWM_OUTPUT_INVERTED_PWM_SIGNAL,
    .line_out_sel_buff = CY_TCPWM_OUTPUT_PWM_SIGNAL,
    .linecompl_out_sel_buff = CY_TCPWM_OUTPUT_INVERTED_PWM_SIGNAL,
    .deadTimeClocks_linecompl_out = 0,
#if defined (CY_IP_MXS40TCPWM)
    .hrpwm_enable = false,
    .hrpwm_input_freq = CY_TCPWM_HRPWM_FREQ_80MHZ_OR_100MHZ,
    .kill_line_polarity = CY_TCPWM_LINEOUT_AND_LINECMPOUT_IS_LOW,
    .deadTimeClocksBuff = 0,
    .deadTimeClocksBuff_linecompl_out = 0,
    .buffer_swap_enable = false,
    .glitch_filter_enable = false,
    .gf_depth = CY_GLITCH_FILTER_DEPTH_SUPPORT_VALUE_0,
    .dithering_mode = CY_TCPWM_DITHERING_DISABLE,
    .period_dithering_value = 128,
    .duty_dithering_value = 128,
    .limiter = CY_TCPWM_DITHERING_LIMITER_7,
    .pwm_tc_sync_kill_dt = false,
    .pwm_sync_kill_dt = false,
#endif /* defined (CY_IP_MXS40TCPWM) */
};

#if defined (COMPONENT_MTB_HAL)
const mtb_hal_peri_div_t PWM_OC_THR_clock_ref =
{
    .clk_dst = (en_clk_dst_t)PCLK_TCPWM0_CLOCK_COUNTER_EN0,
    .div_type = CY_SYSCLK_DIV_8_BIT,
    .div_num = 0,
};
const mtb_hal_clock_t PWM_OC_THR_hal_clock =
{
    .clock_ref = &PWM_OC_THR_clock_ref,
    .interface = &mtb_hal_clock_peri_interface,
};
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
const mtb_hal_pwm_configurator_t PWM_OC_THR_hal_config =
{
    .base = PWM_OC_THR_HW,
    .clock = &PWM_OC_THR_hal_clock,
    .group = 0UL,
    .cntnum = 0UL,
    .max_count = 1000,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t PWM_OC_THR_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
const cyhal_clock_t PWM_OC_THR_clock =
{
    .block = CYHAL_CLOCK_BLOCK_PERIPHERAL5_8BIT,
    .channel = 0,
#if defined (CY_USING_HAL)
    .reserved = false,
    .funcs = NULL,
#endif /* defined (CY_USING_HAL) */
};
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_pwm_configurator_t PWM_OC_THR_hal_config =
{
    .resource = &PWM_OC_THR_obj,
    .config = &PWM_OC_THR_config,
    .clock = &PWM_OC_THR_clock,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

const cy_stc_tcpwm_pwm_config_t PWM_FAN_config =
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_CONTINUOUS,
    .period0 = 32768,
    .period1 = 32768,
    .enablePeriodSwap = false,
    .compare0 = 16384,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = (CY_TCPWM_INT_ON_TC & 0U) | (CY_TCPWM_INT_ON_CC0 & 0U) | (CY_TCPWM_INT_ON_CC1 & 0U),
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .swapInput = CY_TCPWM_INPUT_0,
    .reloadInputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
    .swapOverflowUnderflow = false,
    .immediateKill = false,
    .tapsEnabled = 45,
    .compare2 = 16384,
    .compare3 = 16384,
    .enableCompare1Swap = false,
    .compare0MatchUp = true,
    .compare0MatchDown = false,
    .compare1MatchUp = true,
    .compare1MatchDown = false,
    .kill1InputMode = PWM_FAN_INPUT_DISABLED & 0x3U,
    .kill1Input = CY_TCPWM_INPUT_0,
    .pwmOnDisable = CY_TCPWM_PWM_OUTPUT_HIGHZ,
    .trigger0Event = CY_TCPWM_CNT_TRIGGER_ON_DISABLED,
    .trigger1Event = CY_TCPWM_CNT_TRIGGER_ON_DISABLED,
    .reloadLineSelect = false,
    .line_out_sel = CY_TCPWM_OUTPUT_PWM_SIGNAL,
    .linecompl_out_sel = CY_TCPWM_OUTPUT_INVERTED_PWM_SIGNAL,
    .line_out_sel_buff = CY_TCPWM_OUTPUT_PWM_SIGNAL,
    .linecompl_out_sel_buff = CY_TCPWM_OUTPUT_INVERTED_PWM_SIGNAL,
    .deadTimeClocks_linecompl_out = 0,
#if defined (CY_IP_MXS40TCPWM)
    .hrpwm_enable = false,
    .hrpwm_input_freq = CY_TCPWM_HRPWM_FREQ_80MHZ_OR_100MHZ,
    .kill_line_polarity = CY_TCPWM_LINEOUT_AND_LINECMPOUT_IS_LOW,
    .deadTimeClocksBuff = 0,
    .deadTimeClocksBuff_linecompl_out = 0,
    .buffer_swap_enable = false,
    .glitch_filter_enable = false,
    .gf_depth = CY_GLITCH_FILTER_DEPTH_SUPPORT_VALUE_0,
    .dithering_mode = CY_TCPWM_DITHERING_DISABLE,
    .period_dithering_value = 128,
    .duty_dithering_value = 128,
    .limiter = CY_TCPWM_DITHERING_LIMITER_7,
    .pwm_tc_sync_kill_dt = false,
    .pwm_sync_kill_dt = false,
#endif /* defined (CY_IP_MXS40TCPWM) */
};

#if defined (COMPONENT_MTB_HAL)
const mtb_hal_peri_div_t PWM_FAN_clock_ref =
{
    .clk_dst = (en_clk_dst_t)PCLK_TCPWM0_CLOCK_COUNTER_EN256,
    .div_type = CY_SYSCLK_DIV_8_BIT,
    .div_num = 0,
};
const mtb_hal_clock_t PWM_FAN_hal_clock =
{
    .clock_ref = &PWM_FAN_clock_ref,
    .interface = &mtb_hal_clock_peri_interface,
};
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
const mtb_hal_pwm_configurator_t PWM_FAN_hal_config =
{
    .base = PWM_FAN_HW,
    .clock = &PWM_FAN_hal_clock,
    .group = 1UL,
    .cntnum = 256UL,
    .max_count = 32768,
};
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_resource_inst_t PWM_FAN_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 1U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
const cyhal_clock_t PWM_FAN_clock =
{
    .block = CYHAL_CLOCK_BLOCK_PERIPHERAL5_8BIT,
    .channel = 0,
#if defined (CY_USING_HAL)
    .reserved = false,
    .funcs = NULL,
#endif /* defined (CY_USING_HAL) */
};
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
const cyhal_pwm_configurator_t PWM_FAN_hal_config =
{
    .resource = &PWM_FAN_obj,
    .config = &PWM_FAN_config,
    .clock = &PWM_FAN_clock,
};
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

__WEAK void __NO_RETURN pass_0_error(cy_rslt_t error);

__WEAK void __NO_RETURN pass_0_error(cy_rslt_t error)
{
    (void)error; /* Suppress the compiler warning */
    while(true);
}
void pass_0_start(void)
{
    if (!Cy_HPPASS_AC_IsBlockReady())
    {
        cy_rslt_t hppassStatus = (cy_rslt_t)Cy_HPPASS_AC_Start(0U, 1000U);
        if (CY_RSLT_SUCCESS != hppassStatus)
        {
            pass_0_error(hppassStatus);
        }
    }
}
void init_cycfg_peripherals(void)
{
    cy_rslt_t hppassStatus = 0UL;
    hppassStatus = Cy_HPPASS_Init(&pass_0_config);
    if (CY_RSLT_SUCCESS != hppassStatus)
    {
        pass_0_error(hppassStatus);
    }
    Cy_SysClk_PeriPclkAssignDivider(PCLK_SCB1_CLOCK_SCB_EN, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriPclkAssignDivider(PCLK_SCB2_CLOCK_SCB_EN, CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_DEVICE_CONFIGURATOR_IP_ENABLE_FEATURE)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_TCPWM0_PERI_NR, CY_MMIO_TCPWM0_GROUP_NR, CY_MMIO_TCPWM0_SLAVE_NR, CY_MMIO_TCPWM0_CLK_HF_NR);
#endif /* defined (CY_DEVICE_CONFIGURATOR_IP_ENABLE_FEATURE) */
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM0_CLOCK_COUNTER_EN0, CY_SYSCLK_DIV_8_BIT, 0U);
#if defined (CY_DEVICE_CONFIGURATOR_IP_ENABLE_FEATURE)
    Cy_SysClk_PeriGroupSlaveInit(CY_MMIO_TCPWM0_PERI_NR, CY_MMIO_TCPWM0_GROUP_NR, CY_MMIO_TCPWM0_SLAVE_NR, CY_MMIO_TCPWM0_CLK_HF_NR);
#endif /* defined (CY_DEVICE_CONFIGURATOR_IP_ENABLE_FEATURE) */
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM0_CLOCK_COUNTER_EN256, CY_SYSCLK_DIV_8_BIT, 0U);
}
void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&lpcomp_0_comp_0_obj);
    cyhal_hwmgr_reserve(&SPI_MASTER_obj);
    cyhal_hwmgr_reserve(&PM_BUS_obj);
    cyhal_hwmgr_reserve(&PWM_OC_THR_obj);
    cyhal_hwmgr_reserve(&PWM_FAN_obj);
#endif /* defined (CY_USING_HAL) */
}
