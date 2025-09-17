/*******************************************************************************
 * File Name: cycfg_clocks.c
 *
 * Description:
 * Clock configuration
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

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SPI_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = SPI_CLK_HW,
    .channel_num = SPI_CLK_NUM,
};
const cyhal_resource_inst_t peri_0_group_4_div_8_1_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = peri_0_group_4_div_8_1_HW,
    .channel_num = peri_0_group_4_div_8_1_NUM,
};
const cyhal_resource_inst_t PWM_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = PWM_CLK_HW,
    .channel_num = PWM_CLK_NUM,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriPclkDisableDivider((en_clk_dst_t)SPI_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriPclkSetDivider((en_clk_dst_t)SPI_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U, 0U);
    Cy_SysClk_PeriPclkEnableDivider((en_clk_dst_t)SPI_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriPclkDisableDivider((en_clk_dst_t)PERI_0_GROUP_4_DIV_8_1_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriPclkSetDivider((en_clk_dst_t)PERI_0_GROUP_4_DIV_8_1_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 1U, 7U);
    Cy_SysClk_PeriPclkEnableDivider((en_clk_dst_t)PERI_0_GROUP_4_DIV_8_1_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriPclkDisableDivider((en_clk_dst_t)PWM_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriPclkSetDivider((en_clk_dst_t)PWM_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U, 0U);
    Cy_SysClk_PeriPclkEnableDivider((en_clk_dst_t)PWM_CLK_GRP_NUM, CY_SYSCLK_DIV_8_BIT, 0U);
}
void reserve_cycfg_clocks(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&SPI_CLK_obj);
    cyhal_hwmgr_reserve(&peri_0_group_4_div_8_1_obj);
    cyhal_hwmgr_reserve(&PWM_CLK_obj);
#endif /* defined (CY_USING_HAL) */
}
