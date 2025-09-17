/*******************************************************************************
 * File Name: cycfg_routing.h
 *
 * Description:
 * Establishes all necessary connections between hardware elements.
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#include "cycfg_notices.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ioss_0_port_1_pin_2_HSIOM P1_2_DEBUG600_CLK_SWJ_SWCLK_TCLK
#define ioss_0_port_1_pin_3_HSIOM P1_3_DEBUG600_SWJ_SWDIO_TMS
#define ioss_0_port_2_pin_0_HSIOM P2_0_SCB1_SPI_SELECT0
#define ioss_0_port_2_pin_1_HSIOM P2_1_SCB1_SPI_CLK
#define ioss_0_port_2_pin_2_HSIOM P2_2_SCB1_SPI_MOSI
#define ioss_0_port_2_pin_3_HSIOM P2_3_SCB1_SPI_MISO
#define ioss_0_port_6_pin_0_HSIOM P6_0_PERI_TR_IO_OUTPUT26
#define ioss_0_port_7_pin_0_HSIOM P7_0_SCB2_I2C_SCL
#define ioss_0_port_7_pin_1_HSIOM P7_1_SCB2_I2C_SDA
#define ioss_0_port_8_pin_1_HSIOM P8_1_PERI_TR_IO_OUTPUT39
#define PIN_DAC_OC_THR_digital_out_0_TRIGGER_OUT TRIG_OUT_MUX_2_HSIOM_TR_IO_OUTPUT26
#define PIN_PWM_FAN_digital_out_0_TRIGGER_OUT TRIG_OUT_MUX_2_HSIOM_TR_IO_OUTPUT39
#define PWM_FAN_tr_line_0_TRIGGER_IN TRIG_IN_MUX_2_TCPWM0_GRP1_LINE_256
#define PWM_OC_THR_tr_line_0_TRIGGER_IN TRIG_IN_MUX_2_TCPWM0_GRP0_LINE_0

void init_cycfg_routing(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_ROUTING_H */
