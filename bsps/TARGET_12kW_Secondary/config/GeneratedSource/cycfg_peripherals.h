/*******************************************************************************
 * File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_lpcomp.h"
#include "cy_hppass.h"
#include "cy_sysint.h"
#include "cy_scb_spi.h"
#include "cy_sysclk.h"
#include "cy_scb_i2c.h"
#include "cy_tcpwm_pwm.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#include "cyhal.h"
#endif /* defined (CY_USING_HAL) */

#if defined (COMPONENT_MTB_HAL)
#include "mtb_hal.h"
#include "mtb_hal_hw_types.h"
#include "cycfg_clocks.h"
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (CY_USING_HAL_LITE)
#include "cyhal_hw_types.h"
#endif /* defined (CY_USING_HAL_LITE) */

#if defined (CY_USING_HAL_LITE) || defined (CY_USING_HAL)
#include "cycfg_clocks.h"
#endif /* defined (CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define debug600_0_ENABLED 1U
#define lpcomp_0_comp_0_ENABLED 1U
#define lpcomp_0_comp_0_HW LPCOMP
#define lpcomp_0_comp_0_CHANNEL CY_LPCOMP_CHANNEL_0
#define lpcomp_0_comp_0_IRQ lpcomp_interrupt_IRQn
#define pass_0_ENABLED 1U
#define pass_0_ac_0_ENABLED 1U
#define pass_0_ac_0_stt_0_vstate_0_ENABLED 1U
#define pass_0_sar_0_ENABLED 1U
#define pass_0_sar_0_VREF 3300U
#define I_OUT_SEC_P_ENABLED 1U
#define I_OUT_SEC_P_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(0U)
#define I_OUT_SEC_P_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_0
#define I_OUT_SEC_P_CHAN_IDX 0U
#define AN_A0_CHAN_IDX 0U
#define I_OUT_SEC_N_ENABLED 1U
#define I_OUT_SEC_N_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(1U)
#define I_OUT_SEC_N_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_1
#define I_OUT_SEC_N_CHAN_IDX 1U
#define AN_A1_CHAN_IDX 1U
#define VOUT_SEC_P_ENABLED 1U
#define VOUT_SEC_P_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(2U)
#define VOUT_SEC_P_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_2
#define VOUT_SEC_P_CHAN_IDX 2U
#define AN_A2_CHAN_IDX 2U
#define VOUT_SEC_N_ENABLED 1U
#define VOUT_SEC_N_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(3U)
#define VOUT_SEC_N_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_3
#define VOUT_SEC_N_CHAN_IDX 3U
#define AN_A3_CHAN_IDX 3U
#define TEMP1_ENABLED 1U
#define TEMP1_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(5U)
#define TEMP1_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_5
#define TEMP1_CHAN_IDX 5U
#define AN_A5_CHAN_IDX 5U
#define TEMP2_ENABLED 1U
#define TEMP2_RSLT_PTR CY_HPPASS_SAR_CHAN_RSLT_PTR(9U)
#define TEMP2_FIR_CHAN_IDX CY_HPPASS_FIR_CHAN_9
#define TEMP2_CHAN_IDX 9U
#define AN_B1_CHAN_IDX 9U
#define pass_0_sar_0_dir_sampler_0_ENABLED 1U
#define pass_0_sar_0_dir_sampler_1_ENABLED 1U
#define pass_0_sar_0_dir_sampler_2_ENABLED 1U
#define pass_0_sar_0_dir_sampler_3_ENABLED 1U
#define pass_0_sar_0_dir_sampler_5_ENABLED 1U
#define pass_0_sar_0_dir_sampler_9_ENABLED 1U
#define SPI_MASTER_ENABLED 1U
#define SPI_MASTER_HW SCB1
#define SPI_MASTER_IRQ scb_1_interrupt_IRQn
#define PM_BUS_ENABLED 1U
#define PM_BUS_HW SCB2
#define PM_BUS_IRQ scb_2_interrupt_IRQn
#define PWM_OC_THR_ENABLED 1U
#define PWM_OC_THR_HW TCPWM0
#define PWM_OC_THR_NUM 0UL
#define PWM_FAN_ENABLED 1U
#define PWM_FAN_HW TCPWM0
#define PWM_FAN_NUM 256UL

extern const cy_stc_lpcomp_config_t lpcomp_0_comp_0_config;

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t lpcomp_0_comp_0_obj;
extern const cyhal_comp_configurator_t lpcomp_0_comp_0_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_COMP)
extern const mtb_hal_comp_configurator_t lpcomp_0_comp_0_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_COMP) */

extern const cy_stc_hppass_cfg_t pass_0_config;

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t pass_0_adc_hal_obj;
extern const cyhal_adc_configurator_t pass_0_adc_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC)
extern const mtb_hal_adc_configurator_t pass_0_adc_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_ADC) */

extern const cy_stc_hppass_ac_stt_t pass_0_ac_0_stt_0_config[];
extern const cy_stc_hppass_sar_t pass_0_sar_0_config;
extern const cy_stc_hppass_sar_chan_t I_OUT_SEC_P_config;
extern const cy_stc_hppass_sar_chan_t I_OUT_SEC_N_config;
extern const cy_stc_hppass_sar_chan_t VOUT_SEC_P_config;
extern const cy_stc_hppass_sar_chan_t VOUT_SEC_N_config;
extern const cy_stc_hppass_sar_chan_t TEMP1_config;
extern const cy_stc_hppass_sar_chan_t TEMP2_config;
extern const cy_stc_scb_spi_config_t SPI_MASTER_config;

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t SPI_MASTER_obj;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
extern const cyhal_clock_t SPI_MASTER_clock;
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_spi_configurator_t SPI_MASTER_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t SPI_MASTER_clock_ref;
extern const mtb_hal_clock_t SPI_MASTER_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI)
extern const mtb_hal_spi_configurator_t SPI_MASTER_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_SPI) */

extern const cy_stc_scb_i2c_config_t PM_BUS_config;

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t PM_BUS_obj;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
extern const cyhal_clock_t PM_BUS_clock;
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_i2c_configurator_t PM_BUS_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t PM_BUS_clock_ref;
extern const mtb_hal_clock_t PM_BUS_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C)
extern const mtb_hal_i2c_configurator_t PM_BUS_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_I2C) */

extern const cy_stc_tcpwm_pwm_config_t PWM_OC_THR_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t PWM_OC_THR_clock_ref;
extern const mtb_hal_clock_t PWM_OC_THR_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
extern const mtb_hal_pwm_configurator_t PWM_OC_THR_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t PWM_OC_THR_obj;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
extern const cyhal_clock_t PWM_OC_THR_clock;
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_pwm_configurator_t PWM_OC_THR_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

extern const cy_stc_tcpwm_pwm_config_t PWM_FAN_config;

#if defined (COMPONENT_MTB_HAL)
extern const mtb_hal_peri_div_t PWM_FAN_clock_ref;
extern const mtb_hal_clock_t PWM_FAN_hal_clock;
#endif /* defined (COMPONENT_MTB_HAL) */

#if defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM)
extern const mtb_hal_pwm_configurator_t PWM_FAN_hal_config;
#endif /* defined (COMPONENT_MTB_HAL) && (MTB_HAL_DRIVER_AVAILABLE_PWM) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_resource_inst_t PWM_FAN_obj;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

#if defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL)
extern const cyhal_clock_t PWM_FAN_clock;
#endif /* defined(CY_USING_HAL_LITE) || defined (CY_USING_HAL) */

#if defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE)
extern const cyhal_pwm_configurator_t PWM_FAN_hal_config;
#endif /* defined (CY_USING_HAL) || defined(CY_USING_HAL_LITE) */

void pass_0_start(void);
void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
